#ifndef LEVEL_H
#define LEVEL_H
#include"level22.h"
#include <QMainWindow>
#include"level11.h"
class level : public QMainWindow
{
    Q_OBJECT
public:
    void initScene();
    explicit level(QWidget *parent = nullptr);
void paintEvent(QPaintEvent*);
level11*chooselevel1=NULL;
level22*chooselevel2=NULL;
signals:
void chooseSceneback();//自定义一个返回信号
};

#endif // LEVEL_H
