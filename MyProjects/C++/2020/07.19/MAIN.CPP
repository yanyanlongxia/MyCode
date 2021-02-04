#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include "map.h"
 
int main() {
    Map game;
    char ch;
    while (1) {
        game.ChooseMode();   //模式选择
        game.InitMap();      //初始化
        game.Draw();          //画出地图
        game.SetMine();      //布置地雷
        game.SetNum();        //计算数字
        game.Play();         //扫雷
        if (game.IfWin())      //判定输赢
            printf("You Win\n");
        else
            printf("You Lose\n");
        printf("\nInput q to quit or c to continue : ");   //是否继续
        ch = getch();
        while (ch != 'q' && ch != 'c') {
            ch = getch();
        }
        if (ch == 'q') break;
    }
    system("cls");
    printf("~Bye~\n\n");
    system("pause");
    return 0;
}
