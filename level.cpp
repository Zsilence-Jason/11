#include "level.h"
#include"config.h"
#include<QMenuBar>
#include<QPainter>
#include<QPushButton>
#include<QIcon>
#include<QTimer>
#include<QDebug>
#include"level11.h"
#include"level11.h"
level::level(QWidget *parent) : QMainWindow(parent)
{
   initScene();
}
void level::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/mainscence.jpg");
    painter.drawPixmap(0,0,pix);
}
void level::initScene(){
    //初始化窗口大小
    this->setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置窗口标题
    setWindowTitle(GAME_TITLE);
    //设置窗口标题
    this->setWindowIcon(QIcon(":/res/game.ico"));
    //创建菜单
    QMenuBar *bar=menuBar();

    setMenuBar(bar);
    QMenu*startMenu=bar->addMenu("start");
 QAction* quitAction=startMenu->addAction("quit");
  connect(quitAction,&QAction::triggered,[=](){
       this->close();
    });
  QPushButton*backBtn=new QPushButton("back");
  backBtn->setParent(this);
  backBtn->setFixedSize(100,50);
  backBtn->move(412,718);
  connect(backBtn,&QPushButton::clicked,[=](){
      emit this->chooseSceneback();
  });
  QPushButton*Btn1=new QPushButton("level 1");
  Btn1->setParent(this);
  Btn1->setFixedSize(100,50);
  Btn1->move(206,484);
  chooselevel1=new level11;
  connect(Btn1,&QPushButton::clicked,[=](){


              this->hide();
      chooselevel1->show();
      //监听选择关卡的信号

  });
  connect(chooselevel1,&level11::chooseSceneback,this,[=](){
      chooselevel1->hide();//隐藏
      this->show();//重新显示主场景
  });
  QPushButton*Btn2=new QPushButton("level 2");
  Btn2->setParent(this);
  Btn2->setFixedSize(100,50);
  Btn2->move(206,584);
  chooselevel2=new level22;
  connect(Btn2,&QPushButton::clicked,[=](){


              this->hide();
      chooselevel2->show();
      //监听选择关卡的信号

  });
  connect(chooselevel2,&level22::chooseSceneback,this,[=](){
      chooselevel2->hide();//隐藏
      this->show();//重新显示主场景
  });

}
