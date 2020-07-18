#ifndef LEVEL1_H
#define LEVEL1_H
#include"heroplane.h"
#include <QWidget>
#include<QTimer>
#include"map.h"
#include"enemyplane.h"
#include"bomb.h"


#define ENEMY_INTERVAL  30
class level1 : public QWidget
{
    Q_OBJECT
public:
    explicit level1(QWidget *parent = nullptr);
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

};

#endif // LEVEL1_H
