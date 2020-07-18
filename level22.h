#ifndef LEVEL22_H
#define LEVEL22_H

#include <QMainWindow>
#include <QMainWindow>
#include"heroplane.h"
#include<QTimer>
#include"map.h"
#include"enemyplane.h"
#include"bomb.h"
class level22 : public QMainWindow
{
    Q_OBJECT
public:
    explicit level22(QWidget *parent = nullptr);
    void initScene();
    QTimer m_Timer;

    //飞机对象
        HeroPlane m_hero;

        //鼠标移动事件

            void mouseMoveEvent(QMouseEvent *event);

    //启动游戏  用于启动定时器对象

        void playGame();

        //更新坐标

        void updatePosition();

        //绘图事件

        void paintEvent(QPaintEvent *event);



        //地图对象

        Map m_map;

        //敌机出场

            void enemyToScene();



            //敌机数组

            EnemyPlane m_enemys[ENEMY_NUM];



            //敌机出场间隔记录

            int m_recorder;
            void collisionDetection();

            //爆炸数组

                Bomb m_bombs[BOMB_NUM];

signals:
void chooseSceneback();//自定义一个返回信号
};

#endif // LEVEL22_H
