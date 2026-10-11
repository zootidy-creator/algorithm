#include <stdio.h>

int main(void)
{
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0)
    {
        printf("%d",0);
    }
    else 
    {
     int count=m-(s+t-1)/t;
    if(count<0)
    {
        count=0;
    }
    printf("%d\n",count);
    }
    

    return 0;
}
