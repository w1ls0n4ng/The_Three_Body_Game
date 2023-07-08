#include "gamepage.h"
#include "ui_gamepage.h"
#include "planet.h"
#include "sun.h"
#include "civilization.h"
#include "players.h"
#include "pausewindow.h"
#include "ending.h"
#include "pausewindow.h"
#include "mainwindow.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QPushButton>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QScreen>
#include <QFile>
#include <QKeyEvent>

Gamepage::Gamepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gamepage)
{
    ui->setupUi(this);
    QString backgroundImage = "background-image: url(../Assests/space.png);";
    this->setStyleSheet(backgroundImage);

    // 设置游戏音乐
    mediaPlayer = new QMediaPlayer;
    playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/game_bgm.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    mediaPlayer->setPlaylist(playlist);
    mediaPlayer->play();

    // 设置第一个Groupbox
    QString styleSheet = "QGroupBox {"
                         "    background-image: url(../Assests/border.png);"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "}";
    ui->groupBox->setStyleSheet(styleSheet);

    // 设置Groupbox中的progressbar
    styleSheet = "QProgressBar {"
                         "    background-image: url(../Assests/1.png);"
                         "    background-color: rgba(23, 33, 255, 50);"
                         "    border: None;"
                         "}";

    // 设置人口进度条
    ui->population->setStyleSheet(styleSheet);
    ui->population->setValue(10);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);

    // 设置第二个Groupbox
    styleSheet = "QGroupBox {"
                         "    background-image: url(../Assests/border2.png);"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "    background-color:rgba(7, 4, 30, 200);"
                         "}";
    ui->groupBox_2->setStyleSheet(styleSheet);

    // 设置第三个Groupbox
    styleSheet = "QGroupBox {"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "    background-color:rgba(255, 255, 255, 200);"
                         "}";
    ui->groupBox_3->setStyleSheet(styleSheet);

    // 设置第四个Groupbox
    styleSheet = "QGroupBox {"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "    background-color:rgba(255, 255, 255, 200);"
                         "}";
    ui->groupBox_4->setStyleSheet(styleSheet);

    QList<QScreen*> screens = QGuiApplication::screens();

    // 设置Scene大小为屏幕大小
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 1119, 951);

    // 设置背景刷为透明
    scene->setBackgroundBrush(Qt::transparent);

    // 初始化恒星、行星
    sun1.initialize(-10, 0, 0);
    sun2.initialize(5, 8.66, 0);
    sun3.initialize(5, -8.66, 0);
    earth.initialize(sun1, sun2, sun3);
    threebodyman.initialize(earth);
    gamestatus1.initialize();
    player1.initialize();

    // 创造圆形并加入到scene当中
    circle1 = scene->addEllipse(sun1.location[0]*10, sun1.location[1]*10, 10, 10);
    circle2 = scene->addEllipse(sun2.location[0]*10, sun2.location[1]*10, 10, 10);
    circle3 = scene->addEllipse(sun3.location[0]*10, sun3.location[1]*10, 10, 10);
    circle4 = scene->addEllipse(earth.location[0]*10, earth.location[1]*10, 5, 5);

    circle1->setFlag(QGraphicsItem::ItemIsFocusable);
    circle1->setFocus();
    circle2->setFlag(QGraphicsItem::ItemIsFocusable);
    circle2->setFocus();
    circle3->setFlag(QGraphicsItem::ItemIsFocusable);
    circle3->setFocus();
    circle4->setFlag(QGraphicsItem::ItemIsFocusable);
    circle4->setFocus();

    // 设置三个圆形的颜色
    circle1->setBrush(Qt::red);
    circle2->setBrush(Qt::green);
    circle3->setBrush(Qt::blue);
    circle4->setBrush(Qt::white);

    // 创建view并设置好scene
    view = new QGraphicsView(scene);

    // 设置view大小为1119x951
    view->setFixedSize(1119, 951);

    // 设置滚动条为透明
    QString scrollBarStyle = "QScrollBar:vertical, QScrollBar:horizontal {"
                             "    background: transparent;"
                             "}"
                             "QScrollBar::handle:vertical, QScrollBar::handle:horizontal {"
                             "    background: rgba(0, 0, 0, 0);"
                             "}"
                             "QScrollBar::sub-page:vertical, QScrollBar::sub-page:horizontal {"
                             "    background: rgba(0, 0, 0, 0);"
                             "}"
                             "QScrollBar::add-page:vertical, QScrollBar::add-page:horizontal {"
                             "    background: rgba(0, 0, 0, 0);"
                             "}";
    view->setStyleSheet(scrollBarStyle);

    // 将视图放置在屏幕中央
    if (!screens.isEmpty()) {
        QRect screenRect = screens.first()->availableGeometry();
        view->move(screenRect.center() - view->rect().center());
    }

    // 设置中央小部件的背景为透明
    this->centralWidget()->setStyleSheet("background-color: transparent;"
                                         "background-image: url(../Assests/1.png);"
                                         "border: none;");

    // 创建layout
    QHBoxLayout *horizontalLayout = new QHBoxLayout;

    // 添加小部件到layout
    horizontalLayout->addWidget(view);

    // 以1毫秒（1000帧）刷新
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(updateGameState()));
    timer->start(1);

    connect(this, &Gamepage::keyPressEvent, this, &Gamepage::keyPressEvent);

    // 连接暂停游戏界面
    connect(this, &Gamepage::keyPressEvent, this, &Gamepage::keyPressEvent);
}


Gamepage::~Gamepage()
{
    delete ui;
}

void Gamepage::myfunction()
{
    int val = ui->population->value() + 5;
    ui->population->setValue(val);
}

void Gamepage::updateUI()
{
    QString str;

    // 更新年
    str = QString::number(earth.year);
    ui->year->setText(str);

    // 更新恒纪元
    str = QString::number(earth.constant_era);
    ui->constant_era->setText(str);

    // 更新乱纪元
    str = QString::number(earth.chaotic_era);
    ui->chaotic_era->setText(str);

    // 更新连续恒纪元
    str = QString::number(earth.continue_constant_era);
    ui->continue_constant_era->setText(str);

    // 更新平均温度
    str = QString::number(earth.temperature);
    ui->ave_temp->setText(str);

    // 更新文明阶段
    str = QString::fromStdString(threebodyman.current_stage);
    ui->civilization_label->setText(str);
    ui->civilization_label->setStyleSheet("color: rgb(85, 255, 255);"
                                          "font: 75 10pt 'Microsoft YaHei UI';");

    // 更新文明状态
    str = QString::fromStdString(threebodyman.current_state);
    ui->civilization_state->setText(str);

    // 更新文明发展指数
    if (threebodyman.develop_index < 0.0001)
        str = "";
    else
        str = QString::number(threebodyman.develop_index);
    ui->civilization->setText(str);

    // 更新文明致命温度
    str = QString::number(threebodyman.min_fatal_temp) + "°C/ " + QString::number(threebodyman.max_fatal_temp) + "°C";
    ui->deadly_temp->setText(str);

    //更新文明数及文明状态
    str = "当前行星第"+QString::number(gamestatus1.current_civilization_num)+"号文明";
    if (gamestatus1.current_civilization_state==0){
        str = str + "灭亡";
    }
    ui->civilization_no->setText(str);

    //游戏终止条件
    if (gamestatus1.game_status != 0){
        timer->stop();
        close();
        ending* gameending = new ending();
        gameending->show();
    }
}

void Gamepage::updatePosition()
{
    // 更新恒星、行星和文明的数据
    sun1.update_sun(gap, G, sun2, sun3);
    earth.update_planet(gap, G, sun1, sun2, sun3);
    threebodyman.update_civilization(gap, earth);

    //更新游戏状态
    gamestatus1.update(sun1,sun2,sun3,earth,threebodyman);

    // 设置圆圈位置
    circle1->setPos(sun1.location[0]*10+200, sun1.location[1]*10+200);
    circle2->setPos(sun2.location[0]*10+200, sun2.location[1]*10+200);
    circle3->setPos(sun3.location[0]*10+200, sun3.location[1]*10+200);
    circle4->setPos(earth.location[0]*10+200, earth.location[1]*10+200);

    // 检查圆圈是否已经移出了可见区域
    QRectF visibleRect = view->mapToScene(view->viewport()->geometry()).boundingRect();
    QRectF circlesRect = circle1->sceneBoundingRect().united(circle2->sceneBoundingRect()).united(circle3->sceneBoundingRect());

    if (!visibleRect.contains(circlesRect)) {
        // 计算偏移量以重新定位视图
        qreal xOffset = circlesRect.center().x() - visibleRect.center().x();
        qreal yOffset = circlesRect.center().y() - visibleRect.center().y();

        // 调整视图的中心
        view->centerOn(view->mapToScene(view->viewport()->rect().center()) + QPointF(xOffset, yOffset));

        // 放大场景以包括圆圈的新位置
        QRectF newSceneRect = scene->sceneRect().united(circlesRect);
        scene->setSceneRect(newSceneRect);
    }
}

void Gamepage::updateGameState()
{
    updatePosition();
    updateUI();
}


void Gamepage::on_radioButton_clicked()
{
    ui->radioButton->setChecked(true);
}

void Gamepage::on_radioButton_2_pressed()
{
    ui->radioButton_2->setChecked(true);
}

void Gamepage::on_pushButton_clicked()
{
    if (ui->radioButton->isChecked() & (player1.guess_count < 3)){
        QString s = ui->lineEdit->text();
        int guess_num = s.toInt();
        int current = player1.guess_count;
        player1.guess_current_num[current] = guess_num;
        player1.guess_status[current] = 1;
        player1.guess_current_num[current] = gamestatus1.current_civilization_num;
        player1.guess_count += 1;
        if (player1.guess_count == 1){
            ui->label1_3->setText("1/3 "+ s +"号文明胜利");
        }
        if (player1.guess_count == 2){
            ui->label2_3->setText("2/3 "+ s +"号文明胜利");
        }
        if (player1.guess_count == 3){
            ui->label3_3->setText("3/3 "+ s +"号文明胜利");
        }
    }
    if (ui->radioButton_2->isChecked() & (player1.guess_count < 3)){
        QString s = ui->lineEdit->text();
        int guess_num=s.toInt();
        int current = player1.guess_count;
        player1.guess_current_num[current] = guess_num;
        player1.guess_status[current] = -1;
        player1.guess_current_num[current] = gamestatus1.current_civilization_num;
        player1.guess_count += 1;
        if (player1.guess_count == 1){
            ui->label1_3->setText("1/3 "+ s +"号文明失败");
        }
        if (player1.guess_count == 2){
            ui->label2_3->setText("2/3 "+ s +"号文明失败");
        }
        if (player1.guess_count == 3){
            ui->label3_3->setText("3/3 "+ s +"号文明失败");
        }
    }
}

void Gamepage::saveGame()
{

    QFile file("savegame.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream stream(&file);
    stream << "1\n";
    file.close();
}

void Gamepage::keyPressEvent(QKeyEvent * event)
{
    if (event->key() == Qt::Key_Escape)
    {
        PauseWindow *pause = new PauseWindow();
        pause->show();
        gap = 0;
        if (pause->exec())
        {
            gap = 25;
        }
        else
        {
            saveGame();
            close();

            // 关闭音乐
            mediaPlayer->stop();

            // 打开主界页面
            MainWindow *main = new MainWindow();
            main->showMaximized();
        }
    }
}
