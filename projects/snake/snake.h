/* ============================================================
 * snake.h —— 贪吃蛇 v1 的接口声明
 *
 * 约定（这是 C 语言的工程习惯，第 1 关的核心知识点）：
 *   .h （头文件）= 常量 + 类型 + 函数声明（只写「长什么样」）
 *   .c （源文件）= 函数的实现（写「怎么做」）
 *   谁要用这些函数，就 #include "snake.h"
 * ============================================================ */
#ifndef SNAKE_H          /* 头文件卫士：防止同一个文件被重复包含 */
#define SNAKE_H

/* ---------------- 棋盘与显示字符 ---------------- */
#define BOARD_W   20                     /* 棋盘宽（格子数） */
#define BOARD_H   20                     /* 棋盘高（格子数） */
#define MAX_LEN   (BOARD_W * BOARD_H)    /* 蛇最长能有多长 */

#define CH_WALL   '#'     /* 墙 */
#define CH_HEAD   '@'     /* 蛇头 */
#define CH_BODY   'o'     /* 蛇身 */
#define CH_FOOD   '*'     /* 食物 */
#define CH_EMPTY  ' '     /* 空地 */

/* ---------------- 类型 ---------------- */
typedef struct {
    int x;      /* 列：0 ~ BOARD_W-1 */
    int y;      /* 行：0 ~ BOARD_H-1 */
} Point;

typedef enum {
    DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT
} Dir;

typedef struct {
    Point body[MAX_LEN];   /* 蛇身坐标数组，body[0] 是【蛇头】 */
    int   len;             /* 当前蛇长 */
    Dir   dir;             /* 当前方向 */
    Point food;            /* 食物坐标 */
    int   score;           /* 分数 */
    int   speed;           /* 每帧延时（毫秒）：越小越快 */
    int   over;            /* 1 = 游戏结束 */
} Game;

/* ---------------- 控制台工具（snake.c 里已经给你写好，不用改） ---------------- */
void ScreenClear(void);      /* 清屏 */
void CursorHide(void);       /* 隐藏光标 */
void Gotoxy(int x, int y);   /* 把光标移到第 y 行第 x 列 */
int  KeyPressed(void);
int  ReadKey(void);
void WaitMs(int ms);
void HandleInput(Game *g, int key);
/* ---------------- 第 1 关：你要实现的 ---------------- */
void GameInit(Game *g);          /* 初始化游戏状态 */
void Draw(const Game *g);        /* 画出完整画面 */
void SpawnFood(Game *g);
void MoveSnake(Game *g);
void Step(Game *g);
void AddScore(Game *g,int n);


#endif /* SNAKE_H */
