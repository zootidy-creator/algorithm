//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//
//void printArr(int arr[]);
//int main()
//{
//	//键盘录入五个数字并存入数组
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0;i < 5;i++)
//	{
//		printf("请输入第%d个数字:\n",i+1);//提示
//		scanf("%d", &arr[i]);//键盘录入数字
//	}
//	printArr(arr);
//	//反转数组
//	int i = 0, j = len-1;
//	while (i<j)
//	{
//		int numi = arr[i];//i此时的数
//		int numj = arr[j];//j
//		arr[i] = numj;//反转
//		arr[j] = numi;
//		i++, j--;
//	}
//	printArr(arr);
//
//
//
//	return 0;
//}
//
//void printArr(int arr[])
//{
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}