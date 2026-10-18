#include <stdio.h>

int main(void)
{
    int count=0;
    int a[20];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int h;
    scanf("%d",&h);
    for(int i=0;i<10;i++)
    {
        if(h+30>=a[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
