#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"config.h"
#include<QIcon>
#include<QPainter>
#include<QTimer>
#include"level.h"
#include"help.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //初始化窗口大小
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置窗口标题
    setWindowTitle(GAME_TITLE);
    //设置窗口标题
    this->setWindowIcon(QIcon(":/res/game.ico"));
    connect(ui->actionquit,&QAction::triggered,[=](){
        this->close();
   });
    //关卡选择界面
    chooseScene=new level;
    connect(chooseScene,&level::chooseSceneback,this,[=](){
        chooseScene->hide();//隐藏
        this->show();//重新显示主场景
    });
    connect(ui->pushButton,&QPushButton::clicked,[=](){

                this->hide();

        chooseScene->show();
        //监听选择关卡的信号
            });
    chooseScene1=new help;
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){

                this->hide();

        chooseScene1->show();
        //监听选择关卡的信号
            });
    connect(chooseScene1,&help::chooseSceneback,this,[=](){
        chooseScene1->hide();//隐藏
        this->show();//重新显示主场景
    });

}
void MainWindow::paintEvent(QPaintEvent*){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/mainscence.jpg");
    painter.drawPixmap(0,0,pix);
}
MainWindow::~MainWindow()
{
    delete ui;
}

