/* ============================================================
 * 洛谷刷题模板
 * 用法：复制本文件为 pXXXX.c（XXXX = 题号），例如 p1001.c，再写代码
 * 提交：把整个文件内容粘到洛谷的代码编辑器，语言选 C (C99)
 * 本地编译（装好 MinGW 之后）：gcc p1001.c -o p1001.exe  然后 .\p1001.exe
 * 注意：本目录在 VS 项目目录之外，每个文件都有自己的 main() 也不会冲突
 * ============================================================ */
#include <stdio.h>
#include<math.h>

int main(void)
{
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        printf("I love Luogu!");
    }
    else if(T==2)
    {
        int total=10;
        int take=2+4;
        printf("%d %d\n",take,total-take);
    }
    else if(T==3)
    {
        int fen=14/4;
        printf("%d\n%d\n%d\n",fen,fen*4,14-fen*4);
    }
     else if(T==4)
    {
        printf("%.3lf",500.0/3.0);
    }
    else if(T==5)
    {
        printf("%d\n",(260+220)/(20+12));
    }
     else if(T==6)
    {
        double len=sqrt(9.0*9.0+6.0*6.0);
        printf("%.4lf",len);
    }
     else if(T==7)
    {
        int sum=100;
        sum=sum+10;
        printf("%d\n",sum);
        sum=sum-20;
        printf("%d\n",sum);
        printf("%d\n",0);
    }
    else if(T==8)
    {
        double lon=2.0*5.0*3.141593;
        double area=5.0*5.0*3.141593;
        double tiji=4.0/3.0*5.0*5.0*5.0*3.141593;
        printf("%.4lf\n%.4lf\n%.3lf\n",lon,area,tiji);
    }
    else if(T==9)
    {
        int remain=1;
        for(int i=1;i<=3;i++)
        {
            remain=(remain+1)*2;
        }
        printf("%d\n",remain);
    }
    else if(T==10)
    {
        printf("9\n");
    }
   else if(T==11)
    {
        printf("%.4lf\n",100.0/3.0);
    }
    else if(T==12)
    {
        printf("%d\n%c\n",'M'-'A'+1,'A'+17);
    }
    else if(T==13)
    {
        double z=4.0/3.0*3.141593*4*4*4+4.0/3.0*3.141593*10*10*10;
        double lenc=cbrt(z);
        int lec=lenc/1;
        printf("%d\n",lec);
    }
    else if(T==14)
    {
        printf("50");
        
    }


    return 0;
}
