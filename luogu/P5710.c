#include <stdio.h>

int oushu(int x);
int range(int x);

int main(void)
{
    int x;
    int A=0;
    int U=0;
    int B=0;
    int M=0;
    scanf("%d",&x);
    if(oushu(x)+range(x)==2)
    {
        A++;
        U++;
    }
    else if(oushu(x)+range(x)==1)
    {
        B++;
        U++;
    }
    else if(oushu(x)+range(x)==0)
    {
        M++;
    }
    printf("%d %d %d %d",A,U,B,M);

    return 0;
}

int oushu(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    return 0;
}

int range(int x)
{
    if(x>4&&x<=12)
    {
        return 1;
    }
    return 0;
}
