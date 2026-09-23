//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int order(int arr[], int len, int num);
//
//int binarysearch(int arr[], int len, int num);
//
//int main()
//{
//	////数组查找方式一：
//	//////顺序查找for
//
//	////1,定义数组
//	//int arr[] = { 11,33,44,55,45,43,76 };
//	//int len = sizeof(arr) / sizeof(int);
//	////2,定义一个变量表示要查找的数据
//	//int num = 55;
//
//	////3,调用函数查找
//	//int index = order(arr, len, num);
//
//	////4，输出打印
//	//printf("%d\n", index);
//
//	////数组查找方式二：
//	//////二分查找:前提条件：必须是有序的！
//	///过程：min和max查找范围
//	////////mid是在min和max中间的
//	////////如果要查找的元素在mid的左边，缩小范围时，min不变，max等于mid-1,反之则反
//	//      改进
//	// 
//	// 
//	/////数组4，56，67，88，99，247
//
//	int arr[] = { 4,56,67,88,99,247 };//数组
//
//	int len = sizeof(arr) / sizeof(int);//长度\
//
//	int num =1;//要查找的元素
//
//	int temp = binarysearch(arr, len, num);//返回值
//
//	printf("%d\n", temp);//索引的值
//
//
//
//	return 0;
//}
//
//int order(int arr[], int len, int num)//利用函数查找
//{
//	for (int i = 0;i < len;i++)
//	{
//		if (arr[i] == num)
//		{
//			return i;//返回索引
//		}
//	}
//	return -1;//不存在
//}
//
//int binarysearch(int arr[], int len, int num)
//{
//	int min = 0, max = len - 1;
//	
//	
//	while (min <= max)
//	{
//		int mid = (min + max) / 2;//中间数
//		if (num < arr[mid])
//		{
//			max = mid - 1;//在左边
//		}
//		else if (num > arr[mid])
//		{
//			min = mid + 1;//在右边
//		}
//		else//找到
//		{
//			return mid;//返回索引
//		}
//	}
//	
//	return -1;//没找到返回-1
//	
//}
//
