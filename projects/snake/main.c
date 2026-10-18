/* ============================================================
 * main.c —— 贪吃蛇的程序入口
 *
 * ★ 这个文件由你从头写 ★
 *
 * 目标（不超过 10 行）：
 *   1. 包含头文件：#include "snake.h" 和 #include <stdio.h>
 *   2. 定义一个 Game 变量
 *   3. 调用 GameInit(&g)          —— 注意传地址，因为要修改 g
 *   4. 调用 CursorHide()
 *   5. 调用 Draw(&g)              —— 注意传地址，只是打印，用 &g 也可以
 *   6. 打印一句提示，例如 printf("\nPress ENTER to exit...");
 *   7. 用 getchar() 停住，让你能看清画面
 *   8. return 0
 * ============================================================ */
#include "snake.h"
#include <stdio.h>

int main(void)
{
    Game g;
    int quit=0;

    CursorHide();

    while(!quit)
    {
        GameInit(&g);
        ScreenClear();
        while(!g.over && !quit)
        {
            if(KeyPressed())
            {
                int key=ReadKey();
                if(key=='q'||key=='Q')
                {
                    quit=1;
                    break;
                }
                HandleInput(&g,key);
            }
            Step(&g);
            Draw(&g);
            WaitMs(g.speed);
        }

        if(quit)break;

        /*---GAME OVER画面---*/
        Gotoxy(0,BOARD_H+4);  //棋盘下面2行再往下
        printf("=========== GAME OVER ==========\n");
        printf("SCORE: %d     LENGTH: %d\n",g.score,g.len);
        printf("Press R to restart, Q to quit...\n");

        while(KeyPressed()) ReadKey();
        int k=ReadKey();

        if(k != 'r'&& k != 'R')break;
    }
    

    printf("\nPress ENTER to exit...");
    getchar();

    return 0;
}
