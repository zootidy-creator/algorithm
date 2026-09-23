//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//void sawp(void* p1, void* p2, int len);  
//
//int main()
//{
//	/*
//	    指针的运算：
//		   步长：指针移动以此，走了多少个字节
//		   char；1
//		   short；2
//		   int：4
//		   long：4
//		   long long：8
//	
//	    加法：指针往后移动了N步p+1
//		减法：指针往前移动了N步p-1
//	
//	     指针间的运算：
//		 无意义：
//		  指针跟整数进行乘除操作
//		    原因：此时指针指向不明
//          指针跟指针进行加、乘、除操作
//		 有意义：
//		  跟整数进行加减
//		  跟指针进行减（间隔的步长）
//
//
//
//	*/
//
//	// 前提条件：保证内存空间是连续的（数组）
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p1 = &arr[0];//获取第一个数据
//
//	printf("%d\n", *p1);
//	printf("%d\n", *(p1 + 1));//间隔一个步长
//	
//	//减法获取间隔
//	int* p2 =& arr[5];
//
//	printf("%d\n", p2 - p1);
//
//	/*
//	       野指针：指针指向的空间未分配
//		   悬空指针：指针的指针空间已分配，但是被释放了
//	
//	*/
//	
//
//	//
//	int a = 10;
//	int b = 20;
//	sawp(&a, &b, 4);
//
//	printf("%d %d\n", a, b);
//
//
//
//	return 0;
//}
//
//void sawp(void* p1, void* p2,  int len)//函数，交换变量，提高通用性
//{
//	//把void转换成char类型
//	char* pc1 = p1;
//	char* pc2 = p2;
//	char temp;
//
//	// 以字节为单位，一个字节一个字节得交换
//	for (int i = 0;i < len;i++)
//	{
//		temp = *pc1;//交换
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		*pc1++;
//		*pc2++;
//
//	}
//
//}
//
//
