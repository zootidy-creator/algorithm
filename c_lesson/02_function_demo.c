//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	/*
//	        随机数<stdlib.h>    standard library
//			srand()  设置种子
//			rand()  获取随机数
//	
//	1.两个小弊端  种子一定数一定，要用不断变化的数time(NULL)
//	2.随机数的范围   0~32767
//
//	    任意范围之内获取一个数字7~23
//
//		技巧：
//		1，把这个范围变成包头不包尾，包左不包右的7~24
//		2，拿着尾巴-开头 24-7=17
//		3，修改代码
//	
//	*/
//	//1.设置种子
//	//初始值
//	srand(time(NULL));
//	for (int i = 1;i <= 10;i++)
//	{
////2.获取随机数
//		int num = rand() % 17 + 7;
//	//3.输出打印
//
//	printf("%d\n", num);
//
//
//	}
//	
//
//
//
//
//	return 0;
//}
//
//
//
