#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int arr[]={a,b,c};
    int len = sizeof(arr)/sizeof(int);
    for(int i=0;i<len-1;i++)
    {
        for(int j=1;j<len;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
