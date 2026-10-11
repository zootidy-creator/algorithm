#include <stdio.h>

typedef struct Study
{
    int stime;
    int atime;
}S;

int findtop(S Sarr[],int len);

int main(void)
{
    S Sarr[7];
    for(int i=0;i<7;i++)
    {
        scanf("%d %d",&Sarr[i].stime,&Sarr[i].atime);
    }
    
    int max=findtop(Sarr,7);
    if(Sarr[max].atime+Sarr[max].stime<=8)
    {
        printf("0\n");
        return 0;
    }
    printf("%d\n",max+1);

    return 0;
}

int findtop(S Sarr[],int len)
{
    int max=0;
    for(int i=0;i<len;i++)
    {
        int itime=Sarr[i].atime+Sarr[i].stime;
        int maxtime=Sarr[max].atime+Sarr[max].stime;
        if(itime>maxtime)
        {
            max=i;
        }
    }
    return max;
}