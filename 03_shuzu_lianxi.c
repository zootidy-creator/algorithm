//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int main()
//{
//	//定义一个数组，存入1~5.要求打乱所有数据的顺序
//	int arr[] = { 1,2,3,4,5 };//定义数组
//	srand(time(NULL));// 种子
//	for (int i = 0;i < 5;i++)
//	{
//		int j = rand() % 5;//随机交换位置
//		int temp = arr[i];//变量
//		arr[i] = arr[j];//变换位置
//		arr[j] = temp;//反转
//
//	}
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d\n", arr[i]);//遍历数组
//	}
//
//
//
//	return 0;
//}