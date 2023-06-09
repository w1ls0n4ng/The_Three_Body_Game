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
#include <QVector3D>

Gamepage::Gamepage(QWidget *parent, bool loadgame) :
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

   if (loadgame)
   {
        loadGame();
   }
   else
   {
       // 初始化恒星、行星
       sun1.initialize(-10, 0, 0);
       sun2.initialize(5, 8.66, 0);
       sun3.initialize(5, -8.66, 0);
       earth.initialize(sun1, sun2, sun3);
       threebodyman.initialize(earth);
       gamestatus1.initialize();
       player1.initialize();
   }

   // 创造圆形并加入到scene当中
   QWidget* centralwidget = ui->Cwidget;

   // 创建 QGraphicsView 和 QGraphicsScene
   QGraphicsView* view = new QGraphicsView(centralwidget);
   QGraphicsScene* scene = new QGraphicsScene(centralwidget);
   circle1 = scene->addEllipse(0, 0, 10, 10);
   circle2 = scene->addEllipse(0, 0, 10, 10);
   circle3 = scene->addEllipse(0, 0, 10, 10);
   circle4 = scene->addEllipse(0, 0, 5, 5);

   // 设置三个圆形的颜色
   circle1->setBrush(Qt::red);
   circle2->setBrush(Qt::green);
   circle3->setBrush(Qt::blue);
   circle4->setBrush(Qt::white);

   // 设置 QGraphicsScene 给 QGraphicsView
   view->setScene(scene);

   // 创建布局管理器，并将 QGraphicsView 添加到布局中
   QVBoxLayout* layout = new QVBoxLayout(centralwidget);
   layout->addWidget(view);

   centralwidget->setLayout(layout);


   // 设置view大小为1119x951
   view->setFixedSize(1119, 951);

   // 将视图放置在屏幕中央
   if (!screens.isEmpty()) {
       QRect screenRect = screens.first()->availableGeometry();
       view->move(screenRect.center() - view->rect().center());
   }

   // 设置中央小部件的背景为透明
    centralWidget()->setStyleSheet("background-color: transparent;"
                                        "background-image: url(../Assests/1.png);"
                                        "border: none;");

//   // 创建layout
//   QHBoxLayout *horizontalLayout = new QHBoxLayout;

//   // 添加小部件到layout
//   horizontalLayout->addWidget(view);

   // 设置layout到中心小部件
   //this->centralWidget()->setLayout(horizontalLayout);

   //右上视图
   QWidget* widget = ui->upperRightwidget;

   // 创建 QGraphicsView 和 QGraphicsScene
   view = new QGraphicsView(widget);
   scene = new QGraphicsScene(widget);

   // 创建球体（QGraphicsEllipseItem）
   ball1 = new QGraphicsEllipseItem(0, 0, 8, 8);
   ball1->setBrush(Qt::red);  // 设置球体的颜色
   ball2 = new QGraphicsEllipseItem(0, 0, 8, 8);
   ball2->setBrush(Qt::green);  // 设置球体的颜色
   ball3 = new QGraphicsEllipseItem(0, 0, 8, 8);
   ball3->setBrush(Qt::blue);  // 设置球体的颜色
   ball4 = new QGraphicsEllipseItem(0, 0, 4, 4);
   ball4->setBrush(Qt::white);  // 设置球体的颜色

   // 将球体添加到 QGraphicsScene 中
   scene->addItem(ball1);
   scene->addItem(ball2);
   scene->addItem(ball3);
   scene->addItem(ball4);

   // 设置 QGraphicsScene 给 QGraphicsView
   view->setScene(scene);

   // 创建布局管理器，并将 QGraphicsView 添加到布局中
   layout = new QVBoxLayout(widget);
   layout->addWidget(view);

   widget->setLayout(layout);

   //设置右上视图的背景
   ui->upperRightwidget->setStyleSheet("background-image: url(../Assests/space1.png);"
                                        "border: 2px ridge rgb(60,255,255);"
                                        "margin: 0px;");

   //左上视图
   QWidget* leftWidget = ui->upperLeftwidget;

   // 创建 QGraphicsView 和 QGraphicsScene
   view = new QGraphicsView(leftWidget);
   scene = new QGraphicsScene(leftWidget);

   // 创建球体（QGraphicsEllipseItem）
   ball1_1 = new QGraphicsEllipseItem(0, 0, 10, 10);
   ball1_1->setBrush(Qt::red);  // 设置球体的颜色
   ball2_1 = new QGraphicsEllipseItem(0, 0, 10, 10);
   ball2_1->setBrush(Qt::green);  // 设置球体的颜色
   ball3_1 = new QGraphicsEllipseItem(0, 0, 10, 10);
   ball3_1->setBrush(Qt::blue);  // 设置球体的颜色
   ball4_1 = new QGraphicsEllipseItem(0, 0, 5, 5);
   ball4_1->setBrush(Qt::white);  // 设置球体的颜色

   // 将球体添加到 QGraphicsScene 中
   scene->addItem(ball1_1);
   scene->addItem(ball2_1);
   scene->addItem(ball3_1);
   scene->addItem(ball4_1);

   // 设置 QGraphicsScene 给 QGraphicsView
   view->setScene(scene);

   // 创建布局管理器，并将 QGraphicsView 添加到布局中
   layout = new QVBoxLayout(leftWidget);
   layout->addWidget(view);

   leftWidget->setLayout(layout);

   //设置左上视图的背景
   ui->upperLeftwidget->setStyleSheet("background-image: url(../Assests/space1.png);"
                                        "border: 2px ridge rgb(60,255,255);"
                                        "margin: 0px;");

   // 以1毫秒（1000帧）刷新
   timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()),this,SLOT(updateGameState()));
   timer->start(1);


    // 连接暂停游戏界面
    connect(this, &Gamepage::keyPressEvent, this, &Gamepage::keyPressEvent);

    //更新游戏状态
    if (gamestatus1.game_status != 0){
        close();
        ending* gameending = new ending();
        gameending->show();
    }
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

    str = "行星520号";
    ui->planet_no->setText(str);

    // 更新文明序号
    str = "第" + QString::number(gamestatus1.current_civilization_num) + "号文明";
    if("文明孕育中" == QString::fromStdString(threebodyman.current_stage)){ str += "(灭亡)"; }
    if(QString::number(gamestatus1.current_civilization_num) == "0"){ str = "尚未诞生文明";}
    ui->civilization_no->setText(str);


    // 更新年
    str = QString::number(earth.year,'f',0);
    ui->year->setText(str);

    // 更新恒纪元
    str = QString::number(earth.constant_era,'f',0);
    ui->constant_era->setText(str);

    // 更新乱纪元
    str = QString::number(earth.chaotic_era,'f',0);
    ui->chaotic_era->setText(str);

    // 更新连续恒纪元
    str = QString::number(earth.continue_constant_era,'f',0);
    ui->continue_constant_era->setText(str);

    // 更新平均温度
    str = QString::number(earth.temperature,'f',2);
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
        getscore=0;
        for (int i=0;i<3;++i){
            if (player1.guess_num[i]==gamestatus1.current_civilization_num & player1.guess_status[i]==gamestatus1.current_civilization_state){
                getscore = getscore + (1+player1.guess_num[i]-player1.guess_current_num[i]) * (1+player1.guess_num[i]-player1.guess_current_num[i]);
            }
        }
        gamestopinformation = gamestatus1.gamestop_information;
        ending* gameending = new ending();
        close();
        gameending->show();
    }

    //更新恒星信息

    double speed1 = QVector3D(sun1.velocity[0],sun1.velocity[1],sun1.velocity[2]).length();
    double speed2 = QVector3D(sun2.velocity[0],sun2.velocity[1],sun2.velocity[2]).length();
    double speed3 = QVector3D(sun3.velocity[0],sun3.velocity[1],sun3.velocity[2]).length();
    if(earth.father_sun_num == 1){
        str = "* / "+QString::number(sun1.mass,'f',2)+" / "+QString::number(earth.year,'f',0)+" / "+QString::number(speed1,'f',2);
        ui->label->setText(str);
        double dis = QVector3D(sun2.location[0]-sun1.location[0],sun2.location[1]-sun1.location[1],sun2.location[2]-sun1.location[2]).length();
        str = QString::number(dis,'f',2)+" / "+QString::number(sun2.mass,'f',2)+" / 0 / "+QString::number(speed2,'f',2);
        ui->label_2->setText(str);
        dis = QVector3D(sun3.location[0]-sun1.location[0],sun3.location[1]-sun1.location[1],sun3.location[2]-sun1.location[2]).length();
        str = QString::number(dis,'f',2)+" / "+QString::number(sun3.mass,'f',2)+" / 0 / "+QString::number(speed3,'f',2);
        ui->label_3->setText(str);
    }
    else if(earth.father_sun_num == 2){
        double dis = QVector3D(sun2.location[0]-sun1.location[0],sun2.location[1]-sun1.location[1],sun2.location[2]-sun1.location[2]).length();
        str = QString::number(dis,'f',2)+" / "+QString::number(sun1.mass,'f',2)+" / 0 / "+QString::number(speed1,'f',2);
        ui->label->setText(str);
        str = "* / "+QString::number(sun2.mass,'f',2)+" / "+QString::number(earth.year,'f',0)+" / "+QString::number(speed2,'f',2);
        ui->label_2->setText(str);
        dis = QVector3D(sun3.location[0]-sun2.location[0],sun3.location[1]-sun2.location[1],sun3.location[2]-sun2.location[2]).length();
        str = QString::number(dis,'f',2)+" / "+QString::number(sun3.mass,'f',2)+" / 0 / "+QString::number(speed3,'f',2);
        ui->label_3->setText(str);
    }
    else {
        double dis = QVector3D(sun3.location[0]-sun1.location[0],sun3.location[1]-sun1.location[1],sun3.location[2]-sun1.location[2]).length();
        str = QString::number(dis,'f',2)+" / "+QString::number(sun1.mass,'f',2)+" / 0 / "+QString::number(speed1,'f',2);
        ui->label->setText(str);
        dis = QVector3D(sun3.location[0]-sun2.location[0],sun3.location[1]-sun2.location[1],sun3.location[2]-sun2.location[2]).length();
        str = QString::number(dis,'f',2)+" / "+QString::number(sun2.mass,'f',2)+" / 0 / "+QString::number(speed2,'f',2);
        ui->label_2->setText(str);
        str = "* / "+QString::number(sun3.mass,'f',2)+" / "+QString::number(earth.year,'f',0)+" / "+QString::number(speed3,'f',2);
        ui->label_3->setText(str);
    }

}

//定义一个全局变量，用于行星运动的倍数
extern double p;
double p=8.0;

void Gamepage::updatePosition()
{
    // 更新恒星、行星和文明的数据
    sun1.update_sun(gap, G, sun2, sun3);
    earth.update_planet(gap, G, sun1, sun2, sun3);
    threebodyman.update_civilization(gap, earth);

    //更新游戏状态
    gamestatus1.update(sun1,sun2,sun3,earth,threebodyman);

    //-------------------------------------------------------------------------------------------------
    //主视图    x-y轴
    qreal xOffset;
    qreal yOffset;
//    while(true){

        // 获取视图和planet的中心位置
 //       QPointF viewCenter = view->mapToScene(view->viewport()->rect().center());
        QPointF viewCenter = QPointF((1180)/2,(780)/2);
        QPointF circlesCenter = QPointF((sun1.location[0]+sun2.location[0]+sun3.location[0])*p/3,(sun1.location[1]+sun2.location[1]+sun3.location[1])*p/3);

        // 计算偏移量以重新定位视图
        xOffset = circlesCenter.x() - viewCenter.x() + 200;
        yOffset = circlesCenter.y() - viewCenter.y() + 200;
//        cout << viewCenter.x() << "," << viewCenter.y() << "------" <<circlesCenter.x() <<',' <<circlesCenter.y() << endl;
//        cout << xOffset <<',' << yOffset<<endl;
//        QRectF visibleRect = view->mapToScene(view->viewport()->geometry()).boundingRect();
//        if(visibleRect.contains(QPointF(earth.location[0]*p-xOffset, earth.location[1]*p-yOffset))) break;
//        else p -= 0.5;
//    }

    // 设置圆圈位置
    circle1->setPos(sun1.location[0]*p-xOffset, sun1.location[1]*p-yOffset);
    circle2->setPos(sun2.location[0]*p-xOffset, sun2.location[1]*p-yOffset);
    circle3->setPos(sun3.location[0]*p-xOffset, sun3.location[1]*p-yOffset);
    circle4->setPos(earth.location[0]*p-xOffset, earth.location[1]*p-yOffset);

    //----------------------------------------------------------------------------------------------------------
    //右上视图    z-x轴
    // 获取视图和planet的中心位置
    QPointF widgetCenter = QPointF((-5+250)/2,(-5+290)/2);
    QPointF ballsCenter = QPointF((sun1.location[2]+sun2.location[2]+sun3.location[2])/3,(sun1.location[0]+sun2.location[0]+sun3.location[0])/3);

    // 计算偏移量以重新定位视图
    xOffset = ballsCenter.x() - widgetCenter.x() + 50;
    yOffset = ballsCenter.y() - widgetCenter.y() + 50;
//    cout << ballsCenter.x() << "," << ballsCenter.y() << "------" <<widgetCenter.x() <<',' <<widgetCenter.y() << endl;
//    cout << xOffset <<',' << yOffset<<endl;


    ball1->setPos(sun1.location[2]-xOffset-5, sun1.location[0]-yOffset-5);
    ball2->setPos(sun2.location[2]-xOffset-5, sun2.location[0]-yOffset-5);
    ball3->setPos(sun3.location[2]-xOffset-5, sun3.location[0]-yOffset-5);
    ball4->setPos(earth.location[2]-xOffset-5, earth.location[0]-yOffset-5);

    //----------------------------------------------------------------------------------------------------------
    //左上视图      y-z轴
    // 获取视图和planet的中心位置
    double mag = 2.2;
    widgetCenter = QPointF(320/2,370/2);
    ballsCenter = QPointF((sun1.location[1]+sun2.location[1]+sun3.location[1])*mag/3,(sun1.location[2]+sun2.location[2]+sun3.location[2])*mag/3);

    // 计算偏移量以重新定位视图
    xOffset = ballsCenter.x() - widgetCenter.x() + 150;
    yOffset = ballsCenter.y() - widgetCenter.y() + 150;
//    cout << ballsCenter.x() << "," << ballsCenter.y() << "------" <<widgetCenter.x() <<',' <<widgetCenter.y() << endl;
//    cout << xOffset <<',' << yOffset<<endl;

    ball1_1->setPos(sun1.location[1]*mag-xOffset, sun1.location[2]*mag-yOffset);
    ball2_1->setPos(sun2.location[1]*mag-xOffset, sun2.location[2]*mag-yOffset);
    ball3_1->setPos(sun3.location[1]*mag-xOffset, sun3.location[2]*mag-yOffset);
    ball4_1->setPos(earth.location[1]*mag-xOffset, earth.location[2]*mag-yOffset);
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
        player1.guess_num[current] = guess_num;
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
        player1.guess_num[current] = guess_num;
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
    stream << QString::number(sun1.location[0]) << " " << QString::number(sun1.location[1]) << " " << QString::number(sun1.location[2]) << "\n";
    stream << QString::number(sun1.velocity[0]) << " " << QString::number(sun1.velocity[1]) << " " << QString::number(sun1.velocity[2]) << "\n";
    stream << QString::number(sun1.mass) << "\n";
    stream << QString::number(sun2.location[0]) << " " << QString::number(sun2.location[1]) << " " << QString::number(sun2.location[2]) << "\n";
    stream << QString::number(sun2.velocity[0]) << " " << QString::number(sun2.velocity[1]) << " " << QString::number(sun2.velocity[2]) << "\n";
    stream << QString::number(sun2.mass) << "\n";
    stream << QString::number(sun3.location[0]) << " " << QString::number(sun3.location[1]) << " " << QString::number(sun3.location[2]) << "\n";
    stream << QString::number(sun3.velocity[0]) << " " << QString::number(sun3.velocity[1]) << " " << QString::number(sun3.velocity[2]) << "\n";
    stream << QString::number(sun3.mass) << "\n";
    stream << QString::number(earth.location[0]) << " " << QString::number(earth.location[1]) << " " << QString::number(earth.location[2]) << "\n";
    stream << QString::number(earth.velocity[0]) << " " << QString::number(earth.velocity[1]) << " " << QString::number(earth.velocity[2]) << "\n";
    stream << QString::number(earth.season) << " " << QString::number(earth.orbit) << " " << QString::number(earth.temperature) << "\n";
    stream << QString::number(earth.continue_constant_era) << " " << QString::number(earth.distance_to_last_catch) << " " << QString::number(earth.constant_era) << "\n";
    stream << QString::number(earth.chaotic_era) << " " << QString::number(earth.year) << "\n";
    stream << QString::number(threebodyman.is_alive) << " " << QString::number(threebodyman.develop_index) << " " << QString::fromStdString(threebodyman.current_stage) << "\n";
    stream << QString::number(threebodyman.max_fatal_temp) << " " << QString::number(threebodyman.min_fatal_temp) << " " << QString::fromStdString(threebodyman.current_state) << "\n";
    stream << QString::number(threebodyman.develop_speed_multiply) << " " << QString::number(threebodyman.current_num) << " " << QString::number(threebodyman.gap_to_last_civilization) << "\n";
    stream << QString::number(player1.guess_count) << "\n";
    stream << QString::number(player1.guess_num[0]) << " " << QString::number(player1.guess_num[1]) << " " << QString::number(player1.guess_num[2]) << "\n";
    stream << QString::number(player1.guess_current_num[0]) << " " << QString::number(player1.guess_current_num[1]) << " " << QString::number(player1.guess_current_num[2]) << "\n";
    stream << QString::number(player1.guess_status[0]) << " " << QString::number(player1.guess_status[1]) << " " << QString::number(player1.guess_status[2]) << "\n";
    file.close();
}

void Gamepage::loadGame()
{
    QFile file("savegame.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString word;
        QChar currentChar;
        int status;

        in >> status;
        in >> sun1.location[0] >> sun1.location[1] >> sun1.location[2];
        in >> sun1.velocity[0] >> sun1.velocity[1] >> sun1.velocity[2];
        in >> sun1.mass;
        in >> sun2.location[0] >> sun2.location[1] >> sun2.location[2];
        in >> sun2.velocity[0] >> sun2.velocity[1] >> sun2.velocity[2];
        in >> sun2.mass;
        in >> sun3.location[0] >> sun3.location[1] >> sun3.location[2];
        in >> sun3.velocity[0] >> sun3.velocity[1] >> sun3.velocity[2];
        in >> sun3.mass;
        in >> earth.location[0] >> earth.location[1] >> earth.location[2];
        in >> earth.velocity[0] >> earth.velocity[1] >> earth.velocity[2];
        in >> earth.season >> earth.orbit >> earth.temperature;
        in >> earth.continue_constant_era >> earth.distance_to_last_catch >> earth.constant_era;
        in >> earth.chaotic_era >> earth.year;
        in >> word >> threebodyman.develop_index;
        threebodyman.is_alive = word.toInt();
        word = "";
        while (!in.atEnd())
        {
            in >> currentChar;
            if (currentChar == '\n')
            {
                break;
            }
            else if (currentChar != ' ')
                word += currentChar;
        }
        threebodyman.current_stage = word.toStdString();
        in >> threebodyman.max_fatal_temp >> threebodyman.min_fatal_temp;
        word = "";
        while (!in.atEnd())
        {
            in >> currentChar;
            if (currentChar == '\n')
            {
                break;
            }
            else if (currentChar != ' ')
                word += currentChar;
        }
        threebodyman.current_state = word.toStdString();
        in >> threebodyman.develop_speed_multiply >> threebodyman.current_num >> threebodyman.gap_to_last_civilization;
        in >> player1.guess_count;
        in >> player1.guess_num[0] >> player1.guess_num[1] >> player1.guess_num[2];
        in >> player1.guess_current_num[0] >> player1.guess_current_num[1] >> player1.guess_current_num[2];
        in >> player1.guess_status[0] >> player1.guess_status[1] >> player1.guess_status[2];
        file.close();

        if (earth.father_sun_num == 1)
        {
            earth.father_sun = &sun1;
        }
        else if (earth.father_sun_num == 2)
        {
            earth.father_sun = &sun2;
        }
        else if (earth.father_sun_num == 3)
        {
            earth.father_sun = &sun3;
        }
        threebodyman.earth = &earth;
    }
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
