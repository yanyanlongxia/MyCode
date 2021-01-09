#ifndef MAP_H_
#define MAP_H_
 
#define MAX_WID 18
#define MAX_LEN 32
#define UP_EDGE 1        //上边界
#define LEFT_EDGE 1      //左边界
#define RIGHT_EDGE _len  //右边界
#define DOWN_EDGE _wid   //下边界
 
struct Position {       //用于表示位置
    short x;
    short y;
};
 
struct MapInfo {        //表示扫雷图的信息
    int n;              //-1表示地雷，0表示空格，1~8表示雷数
    bool flag;         //是否已经被打开
};
 
void gotoxy(short, short);       //光标移动函数
 
class Map {
private:
    int _len, _wid;                //图的长宽
    int _mines, _blanks;           //雷数和空格数
    Position pos;                   //光标位置
    MapInfo data[MAX_WID][MAX_LEN];  //地图
 
public:
    void ChooseMode();              //选择游戏模式，初级，中级，高级
    void Draw();                    //画出地图
    void InitMap();                 //初始化地图信息
    void SetMine();                 //设置地雷
    void SetNum();                  //根据周围地雷数计算数字
    void Move();                    //负责移动
    void OpenBlock();               //打开方块
    void OpenAll();                 //如果触雷则全部打开
    void Play();                    //提供游戏操作接口
    bool IfWin();                   //判断输赢
    bool IfLose(); 
   // void show();
};
 
#endif
