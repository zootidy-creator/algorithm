#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int a[105]={0};
    for(int i=0;i<n;i++)
    {
        int c=0;
        scanf("%d",&a[i]);
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }

    return 0;
}