//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int Getremainder(int num1, int num2, int* res);
//
//int main()
//{
//	//函数的结果和计算状态分开//
//
//	//练练，运用函数，将两数相除，获取他们的余数
//
//	//指针的作用：传递结果的媒介
//
//	int a = 444;
//	int b = 0;
//	int res;
//
//	int flag = Getremainder(a, b, &res);
//
//	if (!flag)
//	{
//		printf("%d\n", res);
//	}
//
//	return 0;
//}
//
//int Getremainder(int num1, int num2, int* res)
//{
//	if (num2 == 0)
//	{
//		//为零的情况
//		return 1;
//	}
//	*res = num1 % num2;
//	return 0;
//}