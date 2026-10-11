#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);
    int sum[3];
    int min=0;
    for(int i=0;i<3;i++)
    {
        int prize,count;
        scanf("%d %d",&count,&prize);
        sum[i]=(num+count-1)/count*prize;
        if(sum[i]<sum[min])
        {
            min=i;
        }
    }
    printf("%d\n",sum[min]);
    return 0;
}
