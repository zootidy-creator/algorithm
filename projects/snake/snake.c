/* ============================================================
 * snake.c —— 贪吃蛇的实现
 *
 *   第一部分：控制台工具（我已经写好，你【不用改】）
 *   第二部分：游戏逻辑（★ 你来实现 ★）
 * ============================================================ */
#include "snake.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
/* ============================================================
 * 第一部分：控制台工具（不用改，看看就好）
 *   这几个函数用到 Windows 的 API，属于「样板代码」，
 *   你只需要知道：Gotoxy(x, y) 能把光标直接跳到第 y 行第 x 列，
 *   这样我们就能在屏幕任意位置「画」东西，而不是一行一行 printf。
 * ============================================================ */

/* 清屏 */
void ScreenClear(void)
{
    system("cls");
}

/* 隐藏光标：不隐藏的话，光标会在画面上乱闪，影响观感 */
void CursorHide(void)
{
    CONSOLE_CURSOR_INFO info;
    info.dwSize   = 1;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

/* 把光标移到第 y 行、第 x 列（都从 0 开始数） */
void Gotoxy(int x, int y)
{
    COORD pos;
    pos.X = (SHORT)x;
    pos.Y = (SHORT)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int KeyPressed(void)
{
    return _kbhit();        /* 有按键按下返回非 0，不阻塞 */
}

int ReadKey(void)
{
    return _getch();        /* 读一个键，不回显 */
}

void WaitMs(int ms)
{
    Sleep(ms);
}
/* ============================================================
 * 第二部分：★ 你来实现 ★
 * ============================================================ */

/* ------------------------------------------------------------
 * GameInit：初始化游戏状态
 *
 * 要求：
 *   1. 蛇头放在棋盘中间：x = BOARD_W / 2, y = BOARD_H / 2
 *   2. 蛇长 len = 3，蛇身往【头后面】排
 *      —— 初始方向是向右，所以 body[1] 在头的左边一格，body[2] 再往左一格
 *   3. dir = DIR_RIGHT，score = 0，speed = 200，over = 0
 *   4. 随机生成一个食物：rand() % BOARD_W 得到 0 ~ 19 的列
 *      只用调用一次 srand((unsigned)time(NULL));（放在 main 里或这里都行）
 *
 * 提示：Point 是结构体，访问成员用点：g->body[0].x = ...
 * ------------------------------------------------------------ */
void GameInit(Game *g)
{
    srand((unsigned)time(NULL));
    g->body[0].x=10;  g->body[0].y=10;
    g->body[1].x=9;   g->body[1].y=10;
    g->body[2].x=8;   g->body[2].y=10;

    g->len=3;
    g->dir=DIR_RIGHT;
    g->score=0;
    g->speed=200;
    g->over=0;

    SpawnFood(g);
}
char CellAt(const Game *g,int x,int y)
{
    //1.
    if(x==g->body[0].x&&y==g->body[0].y)
    {
        return CH_HEAD;
    }
    for(int i=1;i<g->len;i++)
    {
        if (g->body[i].x==x&&g->body[i].y==y)
        {
            return CH_BODY;
        }
        
    }
    if(g->food.x==x&&g->food.y==y)
    {
        return CH_FOOD;

    }

    return CH_EMPTY;

}
/* ------------------------------------------------------------
 * Draw：画出完整的一帧画面
 *
 * 要求：
 *   1. 清屏，并把光标移到 (0, 0)
 *   2. 画上边框：BOARD_W + 2 个 CH_WALL（左右各多一个，给两侧的墙留位置）
 *   3. 画中间 BOARD_H 行，每行格式是：
 *          左墙 + BOARD_W 个格子 + 右墙
 *      每个格子显示什么，取决于这个坐标上有什么：
 *          是蛇头   → CH_HEAD
 *          是蛇身   → CH_BODY
 *          是食物   → CH_FOOD
 *          都没有   → CH_EMPTY
 *   4. 画下边框
 *   5. 在下方打印分数，例如：printf("SCORE: %d\n", g->score);
 *
 * 强烈建议：再写一个辅助函数，让 Draw 只管循环
 *      char CellAt(const Game *g, int x, int y);
 *   它返回 (x, y) 这个格子该显示的字符（先查蛇头、再查蛇身、再查食物）。
 * ------------------------------------------------------------ */
void Draw(const Game *g)
{
    Gotoxy(0,0);

    for (int i = 0; i < BOARD_W + 2; i++) printf("%c", CH_WALL);
    printf("\n");

    for (int y = 0; y < BOARD_H; y++) {
        printf("%c", CH_WALL);                       /* 左墙 */
        for (int x = 0; x < BOARD_W; x++)
        {
            printf("%c", CellAt(g, x, y)); 
        }          
        printf("%c\n", CH_WALL);                     /* 右墙 */
    }
   
    for (int i = 0; i < BOARD_W + 2; i++) printf("%c", CH_WALL);
    printf("\n");

    printf("SCORE: %d  \n", g->score);
    printf("SPEED: %d LEN: %d \n", g->speed, g->len);
}

void HandleInput(Game *g, int key)
{
    switch (key)
    {
        //    printf("key=%d  dir=%d\n", key, g->dir);   /* 临时调试用 */调试思路
        case 'w': case 'W':                 /* 上 */
            if (g->dir != DIR_DOWN)         /* ★ 禁止 180° 反向 */
                g->dir = DIR_UP;
            break;
        
        case 's': case 'S':
            if (g->dir != DIR_UP)
            {
                g->dir = DIR_DOWN;
            }
            break;
        
        case 'a': case 'A':
            if (g->dir != DIR_RIGHT)
            {
                g->dir = DIR_LEFT;
            }
            break;

        case 'd': case 'D':
            if (g->dir != DIR_LEFT)
            {
                g->dir = DIR_RIGHT;
            }
            break;
        
    }
}

void MoveSnake(Game *g)
{
    
    for(int i=g->len-1;i>0;i--)
    {
        g->body[i]=g->body[i-1];
    }

    switch (g->dir)
    {
    case DIR_UP :
        g->body[0].y--;
        break;

    case DIR_DOWN :
        g->body[0].y++;
        break;

    case DIR_LEFT :
        g->body[0].x--;
        break;

    case DIR_RIGHT :
        g->body[0].x++;
        break;

    default:
        break;
    }

}

void SpawnFood(Game *g)
{
    int ok;
    do
    {
       g->food.x = rand()%BOARD_W;
       g->food.y = rand()%BOARD_H;

       ok=1;
       for(int i=0;i<g->len;i++)
       {
            if(g->body[i].x == g->food.x && g->body[i].y == g->food.y)
            {
                ok=0;
                break;
            }
       }

    } while (!ok);
    
}

void Step(Game *g)
{
    Point oldTail = g->body[g->len-1];
    MoveSnake(g);
    if(g->body[0].x == g->food.x&&g->body[0].y == g->food.y)
    {
        g->score +=10;
        if(g->len<MAX_LEN)
        {
            g->body[g->len]=oldTail;
            g->len++;
        }
        SpawnFood(g);
        if(g->speed>80)g->speed-=5;
    }
    if(g->body[0].x<0 || g->body[0].y>=BOARD_H||g->body[0].x>=BOARD_W||g->body[0].y<0)
    {
        g->over=1;
    }
    int hit=0;
    for(int i=1;i<g->len;i++)
    {
        if(g->body[i].x==g->body[0].x&&g->body[i].y==g->body[0].y)
        {
            hit=1;
        }
    }
    if(hit)g->over=1;
}