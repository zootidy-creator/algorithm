#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);
    int day=1;
    while(num!=1)
    {
        num=num/2;
        day++;
    }
    printf("%d\n",day);
    return 0;
}
