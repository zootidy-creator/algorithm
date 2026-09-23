//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//int way1(int num1, int num2);
//int way2(int num1, int num2);
//int way3(int num1, int num2);
//int way4(int num1, int num2);
//
//int main()
//{
//	/*
//	   定义加减乘除四个函数
//	   1：加
//	   2：减
//	   3：乘
//	   4：除
//
//	   用户键盘录入三个数字:前两个为计算的数字，后一个为调用的函数
//	
//	*/
//	  
//	//不使用指针函数//适用于函数比较少的情况
//
//
//	int a, b, choose;
//	//键盘录入三个数据
//	printf("请输入要计算的数字:\n");
//	scanf("%d %d", &a, &b);
//	printf("计算方式为：\n1：加\n2：减\n3：乘\n4：除\n");
//	scanf("%d", &choose);
//	////对应的函数
//
//	//if (c == 1)
//	//{
//	//	int num = way1(a, b);
//	//}
//	//else if (c == 2)
//	//{
//	//	int num = way2(a, b);
//	//}
//	//else if (c == 3)
//	//{
//	//	int num = way3(a, b);
//	//}
//	//else if (c == 4)
//	//{
//	//	int num = way4(a, b);
//	//}
//	//else
//	//{
//	//	printf("错误");
//	//}
//
//	////////使用函数指针数组////////
//	//注意：使用条件为形参相同都是a，b；返回值相同为函数返回数据类型一样
//
//	//使用一个数组装函数
//	int (*arr[4])(int, int) = { way1,way2,way3,way4 };
//
//	//调用
//	int num = arr[choose - 1](a,b);//简化很多不需要写太多if或switch
//
//	printf("结果为：%d\n", num);
//
//
//
//	return 0;
//}
//
//int way1(int num1,int num2)//定义函数
//{
//	return num1 + num2;
//}
//int way2(int num1, int num2)
//{
//	return num1 - num2;
//}
//int way3(int num1, int num2)
//{
//	return num1 * num2;
//}
//int way4(int num1, int num2)
//{
//	if (num2 != 0)
//	{
//		return num1 / num2;
//	}
//	printf("出错");
//
//}