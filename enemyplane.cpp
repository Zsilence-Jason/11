#include "enemyplane.h"
#include"config.h"
#include"level.h"
EnemyPlane::EnemyPlane()

{
    //敌机资源加载

    m_enemy.load(":/res/img-plane_3.png");
      //敌机速度
     m_Speed = 3;

    //敌机位置

    m_X = 0;

    m_Y = 0;



    //敌机状态

    m_Free = true;


    //敌机矩形

    m_Rect.setWidth(m_enemy.width());

    m_Rect.setHeight(m_enemy.height());

    m_Rect.moveTo(m_X,m_Y);

}



void EnemyPlane::updatePosition()

{

    //空闲状态，不计算坐标

    if(m_Free)

    {

        return;

    }



    m_Y += m_Speed;

    m_Rect.moveTo(m_X,m_Y);



    if(m_Y >= GAME_HEIGHT + m_Rect.height())

    {

        m_Free = true;

    }

}
