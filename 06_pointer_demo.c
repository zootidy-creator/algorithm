//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int main()
//{
//	/*
//	  利用指针遍历数组
//	*/
//
//	//1.定义数组
//
//	int arr[] = { 10,20,40,50 };
//	int len = sizeof(arr) / sizeof(int);
//
//	//2.获取数组的指针
//	int* p1 = arr;
//	int* p2 = &arr[0];//两种方法都行,获取首地址
//
//	printf("%d\n", *p1);
//	printf("%d\n", *(p1+1));
//
//	//3.利用循环和指针来遍历数组
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d\n", *(p1 + i));
//	}
//
//	//&arr获取地址的时候，不会退化，记录的内存地址第一个元素的的首地址，也是数组的首地址，步长：数据类型*数组的长度
//	// arr参与与计算的时候，会退化为第一个元素的指针，记录第一个元素的首地址，数组首地址，步长：数据类型(特殊情况：sizeof运算的时候
//	//不会退化，还是整体
//
//
//
//	return 0;
//}