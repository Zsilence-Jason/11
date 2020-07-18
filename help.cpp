#include "help.h"
#include<QPainter>
#include<QPushButton>
#include"config.h"
help::help(QWidget *parent) : QMainWindow(parent)
{
initScene();
}
void help::paintEvent(QPaintEvent*){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/help.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}
void help::initScene(){
    //初始化窗口大小
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置窗口标题
    setWindowTitle(GAME_TITLE);
    //设置窗口标题
    this->setWindowIcon(QIcon(":/res/game.ico"));
    //创建菜单
    QPushButton*backBtn=new QPushButton("back");
    backBtn->setParent(this);
    backBtn->setFixedSize(100,50);
    backBtn->move(412,718);
    connect(backBtn,&QPushButton::clicked,[=](){
        emit this->chooseSceneback();
    });
}
