#ifndef CONFIG_H
#define CONFIG_H
#define GAME_WIDTH  512  //宽度
#define GAME_HEIGHT 768  //高度
#define GAME_TITLE "星际穿越" //标题
#define GAME_ICON ":/res/game.ico"  //图标路径
#define GAME_RATE  10  //单位毫秒
#define MAP_SCROLL_SPEED 2  //地图滚动速度
#define HERO_PATH ":/res/hero2.png"
#define BULLET_PATH ":/res/bullet_11.png"   //子弹图片路径
#define BULLET_SPEED 5  //子弹移动速度
#define BULLET_NUM 30   //弹匣中子弹总数
#define BULLET_INTERVAL 20 //发射子弹时间间隔
#define ENEMY_NUM   20 //敌机总数量
#define BOMB_PATH  ":/res/bomb-%1.png"   //爆炸资源图片
#define BOMB_NUM  20     //爆炸数量
#define BOMB_MAX  7      //爆炸图片最大索引
#define BOMB_INTERVAL 20   //爆炸切图时间间隔
#define SOUND_BACKGROUND ":/res/bg.wav"
#define SOUND_BOMB ":/res/bomb.wav"
#endif // CONFIG_H
