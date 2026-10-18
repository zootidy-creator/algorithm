#include <stdio.h>

int main(void)
{
    int a[105];
    int i=0;
    do
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            break;
        }
        i++;
    } while (a[i-1]!=0);
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }

    return 0;
}
