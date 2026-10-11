#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int local=n*5;
    int luogu=3*n+11;
    if(local<luogu)
    {
        printf("Local");
    }
    else
    {
        printf("Luogu");
    }

    return 0;
}
