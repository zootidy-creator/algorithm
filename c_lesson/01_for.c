//#include<string.h>
//#include<stdio.h> 
//
//int main()
//{
//	///*   for（初始化语句；条件判断语句；条件控制语句）
//	//     { 
//	//	    循环体语句
//	//	 }
//	//*/
//	////打印
//	//for (int i = 1;i <= 5;i++)
//	//{
//	//	printf("哈哈你好呀！\n");
//
//	//}
//
//	//int c;
//	//printf("希望我说多少遍：");
//	//scanf("%d", &c);//键盘录入
//
//	//for (int i = 1;i <= c;i++)
//	//{
//	//	printf("人机\n");
//	//}
//
//	////案例一
//	//for (int number1 = 1;number1 <= 5;number1++)
//	//{
//	//	printf("%d\n", number1);
//	//}
//
//	////案例二
//	//for (int number2 = 5;number2 >= 1;number2--)
//	//{
//	//	printf("%d\n", number2);
//	//}
//	////案例三
//	//int sum = 0;//定义一个变量进行求和
//
//
//	//for (int i = 1; i <= 5; i++)
//	//{
//	//	
//	//	sum = i + sum;
//	//	
//	//}
//
//	//printf("%d\n", sum);
//	////案例四：获取1~100的偶数和
//	//int ouhe=0;//定义一个变量
//	//int jihe = 0;//奇数的和
//	//for (int number=1;number <= 100;number++)//循环
//	//{
//	//	if (number % 2 == 0)//获取偶数
//	//	{
//	//		ouhe = number + ouhe;//偶数求和
//	//	}
//	//	else
//	//	{
//	//		jihe = number + jihe;
//	//	}
//	//}
//	//printf("%d\n%d\n", ouhe,jihe);
//
//
//	//键盘录入两个数，表示范围，统计这个范围中既能被6整除，又能被8整除的数字有多个？
//	int shu = 0;//总数
//	printf("请输入两个数：");
//	int s1, s2;//输入的两个数
//	scanf("%d %d", &s1, &s2);
//	int min = s1 < s2 ? s1 : s2;
//	int max = s1 > s2 ? s1 : s2;
//	
//		for (int i = min;i <= max;i++)
//		{
//			if (i % 6 == 0 && i % 8 == 0)
//			{
//				shu++;
//			}
//		}
//
//
//	
//	
//		
//	
//	printf("%d\n",shu);
//	return 0;
//}