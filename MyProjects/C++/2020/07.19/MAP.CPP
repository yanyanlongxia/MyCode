#include "map.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>     //提供随机函数，rand()， srand()
#include <ctime>       //提供time()函数
#include <conio.h>     //提供不回显的输入函数getch()
#include <windows.h>   //提供system()内命令
 
#define GOTOXY( pos ) gotoxy( 2 * (pos).x - 1, (pos).y - 1 )
#define POSITION_POS _wid+1      //游戏信息的位置,这里是位置信息
#define POSITION_BLANKS _wid+2  //空格数位置
#define POSITION_TIMES _wid+3   //时间显示位置
#define POSITION_SITUATION _wid+4  //输赢状态位置
 
using std::cin;
using std::cout;
 
void gotoxy(short x, short y) {    //自行百度
    COORD pos = { x, y };
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}
 
 
void Map::ChooseMode() {
    system("cls");           //清屏
    cout << "Please choose the mode\n";          
    cout << "1 : Beginner\n";
    cout << "2 : Intermediate\n";
    cout << "3 : Expert\nYour mode: ";
 
    char mode;
    cin >> mode;
    while (mode != '1' && mode != '2' && mode != '3') {    //只接受 1， 2， 3
        cout <<"\nWrong mode, please input 1, 2, or 3\nYour mode: ";
        cin >> mode;
    }
    switch (mode) {   //根据模式改变地图信息
        case '1': _len = _wid = 8; _mines = 10; break;
        case '2': _len = _wid = 16; _mines = 40; break;
        default : _len = 30; _wid = 16; _mines = 99; 
    }
    _blanks = _len * _wid - _mines;   //更新空格数
}
 
 
void Map::Draw() {    //画出地图
    system("cls");
    SetConsoleOutputCP(437);      //自行百度，否则无法显现方块而是显现？
    for (int i = 1; i <= _wid; i++) {
        printf("|");
        for (int j = 1; j <= _len; j++)
            printf("%c", 219);       //219是方块
        printf("|\n");
    }
    gotoxy(0, POSITION_POS);
    printf("Position: ( %2d, %2d )\n", pos.x, pos.y);
    printf("Blanks: %2d", _blanks);
    GOTOXY(pos);      //查看 map.h 内说明
}
 
 
void Map::InitMap() {
    for (int i = 0; i <= _wid+1; i++)     //从0 ~ _wid+1 是因为可以假设地图边界的空格存在，且为0，后面计算
        for (int j = 0; j <= _len+1; j++) {
            data[i][j].flag = false;     //设置为没有被打开
            data[i][j].n = 0;            //全部设为空格
        }
    pos.x = pos.y = 1;
}
 
 
void Map::SetMine() {
    int mines = _mines;
    int x, y;
    Move();        //先执行move(),避免第一个空就触雷
    srand(time(NULL));
    while (mines) { 
        x = rand() % _wid + 1;
        y = rand() % _len + 1;
        if (0 == data[x][y].n && (x != pos.x && y != pos.y)) {   //后面的条件可以避免第一个打开的空被设置为地雷，避免第一步就触雷
            data[x][y].n = -1;        //雷 设为 -1
            data[x][y].flag = true;   //设为雷的格子 flag 置为 true
            mines--;
        }
    }
}
 
 
void Map::SetNum() {
    for (int i = 1; i <= _wid; i++) {
        for (int j = 1; j <= _len; j++) {    //逐个计算格子周围的 8 个格子的雷数
            if (-1 == data[ i ][ j ].n) continue;
            if (-1 == data[i-1][j-1].n) data[i][j].n++;
            if (-1 == data[i-1][ j ].n) data[i][j].n++;
            if (-1 == data[i-1][j+1].n) data[i][j].n++;
            if (-1 == data[ i ][j-1].n) data[i][j].n++;
            if (-1 == data[ i ][j+1].n) data[i][j].n++;
            if (-1 == data[i+1][j-1].n) data[i][j].n++;
            if (-1 == data[i+1][ j ].n) data[i][j].n++;
            if (-1 == data[i+1][j+1].n) data[i][j].n++;
        }
    }
    OpenBlock();   //与SetMine()配套，这时才正好打开用户要打开的第一个空，避免第一步就触雷
}
 
 
void Map::Move() {
    char mv;
    while (1) {
        mv = getch();
        if (mv == ' ') break;   //如果是 ‘ ’（空格），那么就结束移动，打开方块
        if (mv != 'w' && mv != 'a' && mv != 's' && mv != 'd') continue;  //移动只接受 w a s d 四个键
        switch (mv) {
            case 'w': 
                if (pos.y != UP_EDGE)    pos.y--;
                break;
            case 's':
                if (pos.y != DOWN_EDGE)  pos.y++;
                break;
            case 'a':
                if (pos.x != LEFT_EDGE)  pos.x--;
                break;
            default :
                if (pos.x != RIGHT_EDGE) pos.x++;
        }
        gotoxy(12, POSITION_POS);  //12，可以不用重新输入覆盖已经存在的 "Position: "，而是接着输入
        printf("%2d, %2d", pos.x, pos.y);
        GOTOXY(pos);  //回到用户所指的位置
    }
}
 
 
#define IF_IN_EDGE(p) ((p.x >= LEFT_EDGE && p.x <= RIGHT_EDGE) && (p.y >= UP_EDGE && p.y <= DOWN_EDGE))  //判断是否越界
#define IF_PUSHIN_STACK(p) (data[p.y][p.x].flag == false && IF_IN_EDGE(p))         //判断是否入栈，条件是：不越界且格子未被打开
#define PUSHIN_STACK(p) { stack[++top] = p; data[p.y][p.x].flag = true; _blanks--; }  //入栈，并设置为已打开，并减少空格数，用于定是否获胜
 
void Map::OpenBlock() {
    if (data[pos.y][pos.x].flag == true) return ;   //如果格子打开过，就跳出函数
    int num, top = 0;
    Position stack[_len * _wid << 1];   //栈，用于存位置
    Position temp;
    stack[top] = pos;
    data[pos.y][pos.x].flag = true;   //要打开的第一个格子设置为打开
    _blanks--;    
    while (top != -1) {
        temp = stack[top--];
        GOTOXY(temp);
        num = data[temp.y][temp.x].n;
        if (0 == num) {
            printf("  ");           //如果是0，那么输出空格，并且判断一下周围8个是否要打开，如果不是地雷就打开
            temp.y--; temp.x--;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)   //格子周围8个都要判断
            temp.x++;                                       //因为空格周围的都要打开
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
            temp.x++;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
            temp.y++;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
            temp.y++;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
            temp.x--;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
            temp.x--;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
            temp.y--;
            if (IF_PUSHIN_STACK(temp)) PUSHIN_STACK(temp)
        }
        else {
            printf("%d ", num);    //不是0，也即不是空格，不存在连开
        }
    }
    gotoxy(8, POSITION_BLANKS);   //更新空格数
    printf("%2d", _blanks);
    GOTOXY(pos);    //回到用户所指的位置
}
 
 
void Map::OpenAll() {
    SetConsoleOutputCP(437);
    gotoxy(0,0);
    for (int i = 1; i <= _wid; i++) {
        printf("|");
        for (int j = 1; j <= _len; j++) {
            switch (data[i][j].n) {
                case 0 : printf("%c", 219); break;
                case -1: printf("* "); break;
                default: printf("%d ", data[i][j].n);
            }
        } printf("|\n");
    }
    GOTOXY(pos);
    printf("X");
}
 
 
void Map::Play() {
    char op;
    float end, start;
 
    start = clock();   //计时用
    while (!IfWin()) {   //如果还未获胜
        Move();   //当 Move() 跳出即代表用户输入空格
        if (IfLose()) { OpenAll(); break; }  //如果触雷则跳出，并打开全图
        OpenBlock();   //开格子
    }
    end = clock();   //计时用
    gotoxy(0, POSITION_TIMES);
    printf("Times: %.2f s\n\n", (end-start)/CLK_TCK);
}
 
 
bool Map::IfWin() {
    return _blanks == 0;
}
 
 
bool Map::IfLose() {
    return -1 == data[pos.y][pos.x].n;
}
