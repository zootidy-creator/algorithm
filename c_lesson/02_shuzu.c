//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//void printArr(int arr[],int len);
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//1，数组作为函数的参数，需要注意什么？
//	       /*
//		         实际上是传递数组的首地址,如果要在函数中对数组进行遍历的话
//				 定义处：arr表示的是完整的数组
//				 函数中的arr：只是一个变量，用来记录数组的首地址
//
//	 2,数组的索引越界
//		   0~长度减一
//		   
//		   
//		   */
//	int len = sizeof(arr) / sizeof(arr[0]);//算出数组长度
//	printArr(arr, len);
//
//
//
//
//
//	return 0;
//}
//
//void printArr(int arr[],int len)//函数
//{
//	
//
//	for (int i = 0;i < len;i++)
//	{
//      printf("%d\n",arr[i]);
//
//	}
//	
//}