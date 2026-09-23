/* ============================================================
 * 洛谷刷题模板
 * 用法：复制本文件为 pXXXX.c（XXXX = 题号），例如 p1001.c，再写代码
 * 提交：把整个文件内容粘到洛谷的代码编辑器，语言选 C (C99)
 * 本地编译（装好 MinGW 之后）：gcc p1001.c -o p1001.exe  然后 .\p1001.exe
 * 注意：本目录在 VS 项目目录之外，每个文件都有自己的 main() 也不会冲突
 * ============================================================ */
#include <stdio.h>

int main(void)
{
    float t;
    int number;
    scanf("%f %d", &t, &number);
    float avg = t /  number;
    printf("%.3f\n", avg);
    printf("%d\n", 2*number);


    return 0;
}
