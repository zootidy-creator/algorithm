//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//void swap(int* p1, int* p2);
//int* method();//定义函数
//int main()
//{
//	//指针
//	int a = 10;//定义变量
//	//int* p = &a;
//	//printf("%d\n", *p);
//	//*p = 200;*
//	
//	//printf("%d\n", *p)
//	//printf("%d\n", a)
//
//	int b = 20;//定义第二个变量
//
//	swap(&a,&b);
//	printf("%d,%d\n", a,b);
//
//	int* p = method();//不能打印，返回值的&a不存在返回不了，特殊：中间没有停顿的时候，因为编译器的原因，a还可以留存
//
//	printf("%d\n", p);
//
//	return 0;
//}
//
//void swap(int *p1, int *p2)//交换数字
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int* method()
//{
//	static  int a = 10;//变量
//	//想要延长a的生命周期，可加上static延长到程序的结束
//	return &a;
//}