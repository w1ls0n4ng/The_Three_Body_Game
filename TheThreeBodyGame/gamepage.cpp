#include "gamepage.h"
#include "ui_gamepage.h"
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

Gamepage::Gamepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gamepage)
{
    ui->setupUi(this);
    QString backgroundImage = "background-image: url(../Assests/space.png);";
    this->setStyleSheet(backgroundImage);

    // 设置游戏音乐
    QMediaPlayer* mediaPlayer = new QMediaPlayer;
    QMediaPlaylist* playlist = new QMediaPlaylist;

    playlist->addMedia(QUrl::fromLocalFile("../Assests/game_bgm.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    mediaPlayer->setPlaylist(playlist);
    mediaPlayer->play();

    // 设置Groupbox
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
    ui->population->setStyleSheet(styleSheet);


    ui->population->setValue(10);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);

    styleSheet = "QGroupBox {"
                         "    background-image: url(../Assests/border2.png);"
                         "    border-radius: 5px;"  // 5像素的圆角边框
                         "    background-color:rgba(7, 4, 30, 200);"
                         "}";
    ui->groupBox_2->setStyleSheet(styleSheet);

    scene = new QGraphicsScene();

    // Set the scene size to 991x991
    scene->setSceneRect(464, 0, 1100, 1000);

    // Set the background brush of the scene to transparent
    scene->setBackgroundBrush(Qt::transparent);

    // Create the circles with specified positions
    qreal x1 = 100.0;
    qreal y1 = 100.0;
    qreal x2 = 200.0;
    qreal y2 = 200.0;
    qreal x3 = 300.0;
    qreal y3 = 300.0;

    // Create the circle items and add them to the scene
    QGraphicsEllipseItem* circle1 = scene->addEllipse(x1 + 400, y1 + 200, 100, 100);
    QGraphicsEllipseItem* circle2 = scene->addEllipse(x2 + 400, y2 + 200, 100, 100);
    QGraphicsEllipseItem* circle3 = scene->addEllipse(x3 + 400, y3 + 200, 100, 100);

    // Set the brush color for each circle
    circle1->setBrush(Qt::red);
    circle2->setBrush(Qt::green);
    circle3->setBrush(Qt::blue);

    // Create the view and set the scene
    view = new QGraphicsView();
    view->setScene(scene);

    // Set the view size to 991x991
    view->setFixedSize(991, 991);

    // Make the scrollbars transparent
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

    // Get the available geometries of the screens
    QList<QScreen*> screens = QGuiApplication::screens();
    if (!screens.isEmpty()) {
        // Get the first screen's geometry to center the view
        QRect screenRect = screens.first()->availableGeometry();
        int x = (screenRect.width() - view->width()) / 2;
        int y = (screenRect.height() - view->height()) / 2;

        // Move the view to the center of the screen
        view->move(x, y);
    }

    // Set the background of the central widget to transparent
    this->centralWidget()->setStyleSheet("background-color: transparent;"
                                         "background-image: url(../Assests/1.png);"
                                         "border: none;");

    //Create the layout.
    QHBoxLayout *horizontalLayout = new QHBoxLayout;

    //Add widgets to the layout.
    horizontalLayout->addWidget(view);

    //Set the layout to the widget that owns it.
    this->centralWidget()->setLayout(horizontalLayout);
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
