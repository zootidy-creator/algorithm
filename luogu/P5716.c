#include <stdio.h>

int runnian(int year);

int main(void)
{
    int year,month;
    scanf("%d %d",&year,&month);
    if(runnian(year)==1)
    {
        if(month==2)
        {
            printf("29");
            return 0;
        }
       
    }
    else if(month==2)
    {
        printf("28");
    }
    
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("31");
    }
    else
    {
        printf("30");
    }

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