#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<arr[min])
        {
            min=i;
        }
    }
    printf("%d\n",arr[min]);

    return 0;
}
