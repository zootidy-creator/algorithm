//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int main()
//{
//	//二级指针
//	int a = 10;
//	int b = 20;//定义变量
//
//	//利用指针
//	/*
//	   数据类型+  *  +  变量
//	  (int/int*  /等等
//	   */
//	int* p = &a;//指针改变
//	int** pp = &p;//二级指针
//	*pp = &b;//传导
//
//	//(作用一）利用二级指针修改一级指针的地址
//
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//
//	//利用二级指针获取变量的值
//
//	printf("%d\n", **pp);
//
//
//
//
//	return 0;
//}