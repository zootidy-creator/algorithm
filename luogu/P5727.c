#include <stdio.h>

int main(void)
{
    int n,i=1,a[200];
    scanf("%d",&n);
    a[0]=n;
    while (n!=1)
    {
        if(n%2!=0)n=n*3+1;
        else n=n/2;
        a[i]=n;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
