//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
////冒泡排序
//int main()
//{
//	//// 1,冒泡排序：前一个和后一个比较大小，小的放前面，一直循环
//	int arr[] = { 3,2,4,5,1 };//数组
//	int len = sizeof(arr) / sizeof(int);//长度
//
//	//for (int i = 0;i < len;i++)
//	//{
//	//	for (int j = 0;j < len - 1-i;j++)
//	//	{
//	//		if (arr[j] > arr[j + 1])
//	//		{
//	//			int temp = arr[j];//临时变量
//	//			arr[j] = arr[j + 1];//换位
//	//			arr[j + 1] = temp;
//	//		}
//	//	}
//	//}
//	
//	//2，选择排序,以0索引开始和后面的数字比较大小，一轮结束后，减少一位
//	for (int i = 0;i < len - 1;i++)
//	{
//		for (int j = i+1;j < len;j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int temp = arr[i];//换位
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	
//
//
//
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//
//	return 0;
//}
