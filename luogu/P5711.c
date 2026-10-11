#include <stdio.h>

int runnian(int year);

int main(void)
{
    int year;
    scanf("%d",&year);
    printf("%d\n",runnian(year));

    return 0;
}

int runnian(int year)
{
    if(year%4==0&&year%100!=0)
    {
        return 1;
    }
    else if(year%400==0)
    {
        return 1;
    }
    return 0;
}
