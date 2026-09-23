#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//
//int contains(int arr[], int len, int num);
//
//int main()
//{
//	//1.//求最值/数组
//	////已知数组元素为[33,5,22,44,55]得到最大值并打印在控制台	
//	//int max;//最大值
//	//int arr[] = { 33,5,22,44,55 };//数组
//	//int len = sizeof(arr) / sizeof(int);//长度计算
//	//for (int i = 0;i < len-1;i++)//循环得全部元素
//	//{
//	//	 max = arr[i] > arr[i + 1] ? arr[i] : arr[i + 1];//所有元素比较大小
//	//}
//	//printf("%d", max);//打印最大值
//
//	//生成10个1~100之间的随机数存入数组
//	//////(1)求出所有数据的和
//	/*
//          (2)求出所有数据的平均值
//
//		 （3）统计有多少个数据比平均值小
//	
//	*/
//	int arr[10] = {0};//数组10个位置
//	int len = sizeof(arr) / sizeof(int);//长度
//	srand(time(NULL));//种子
//	for (int i = 0;i < len;)
//	{
//		
//		int num = rand() % 100 + 1;//生成随机数1~100,要求数据不能重复
//
//		int flage = contains(arr,len,num);//判断结果1或0
//
//		if (!flage)//取反
//		{
//			arr[i] = num;//放入10个数据
//			i++;//满足条件再下一个循环
//		}
//
//		
//	}
//	int sum=0;//求和
//	
//	for (int i = 0;i < len;i++)//求和相加
//	{
//		printf("%d\n", arr[i]);
//		sum = sum + arr[i];//求和
//	}
//	printf("总和为%d\n", sum);//打印
//
//	double average = (double)sum / len;//求出平均值
//
//	printf("平均数为%.2f\n",average);//打印
//	int count = 0;
//	for (int i = 0;i < len;i++)
//	{
//		if (arr[i] < average)
//		{
//			count++;//小于加次数
//		}
//	}
//	printf("比平均数小的有%d个\n", count);
//
//	return 0;
//}
//
//int contains(int arr[], int len, int num)//利用函数来判断真假，1或0
//{
//	for (int i = 0;i < len;i++)//进行检索，每一项
//	{
//		if (arr[i] == num)//满足条件
//		{
//			return 1;//结束函数
//		}
//	}
//	return 0;
//	
//}
//
//
