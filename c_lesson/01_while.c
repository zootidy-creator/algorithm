//#include<string.h>
//#include<stdio.h> 
//
//int main()
//{
//	////案例一
//	//int n;//整数n
//	//printf("%请输入您要检验的数字：\n");
//	//scanf("%d", &n);//键盘录入一个数
//	//while (n > 1 && n % 2 == 0)
//	//{
//	//	n = n / 2;
//	//}
//	//if (n = 1)
//	//{
//	//	printf("yes!");
//	//}
//	//else
//	//{
//	//	printf("no!");
//	//}
//	////案例二
//
//	//int number = 0;//定义一个总数
//	//double i=0.1;//高度
//	//while (i < 8844430.0)//继续循环的条件
//	//{
//	//	i=i * 2;
//	//	number++;//折叠一次加1
//	//}
//	//printf("%d", number);//最终打印
//
//	////案例三
//	////把数字倒过来排列123——321
//	//int number = 123;
//	//int rev = 0;//定义两个变量
//	//while (number != 0)
//	//{
//	//	int temp = number % 10;//获取个位
//	//	number = number / 10;//去掉刚获取的数字
//	//	rev = rev * 10 + temp;//相加倒叙
//
//	//}
//	//printf("%d\n", rev);
//
//	////案例四
//
//	////计算数的算术平方根
//	//int number = 4;
//	//int i = 1;
//	//while (i *i<= number)
//	//{
//	//	
//	//	i++;
//	//}
//	//printf("%d", i-1);
//
//	////案例五
//	////回文数训练，从左往右和从右往左读都是一样的数
//	//int number = 121;
//	//int rev = 0;//定义两个变量
//	//int a = number;
//	//while (a != 0)
//	//{
//	//	int temp = a % 10;//提取个位
//	//	a = a / 10;//去除个位
//	//	rev = rev * 10 + temp;//得到换位
//
//	//}
//	//if (rev == number)
//	//{
//	//	printf("这个数字是回文数！");
//	//}
//	//else
//	//{
//	//	printf("这个不是回文数！");
//	//}
//
//
//	////练习一：打印五行五列*
//	//for (int i = 1;i <= 5;i++)
//	//{
//	//	for (int i = 1;i <= 5;i++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//	////练习二：打印五行五列的三角形*
//	//int a = 5;
//	//for (int i = 1;i <= 5;i++)
//	//{
//
//	//	
//	//	for(int j=1;j<=a;j++)
//	//	{
//	//		
//	//		printf("*");
//	//		
//	//	}
//	//	a--;
//	//	printf("\n");
//
//
//	//}
//
//	////B方案
//	//for (int i = 1;i <= 5;i++)
//	//{
//	//	for (int j = i;j <= 5;j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//
//
//
//
//	////练习三：正的三角
//	//int b = 1;
//	//for (int i = 1;i <= 5;i++)
//	//{
//
//
//	//	for (int i = 1;i <= b;i++)
//	//	{
//
//	//		printf("*");
//
//	//	}
//	//	b++;
//	//	printf("\n");
//
//
//	//}
//	////B方案
//	//for (int i = 1;i <= 5;i++)
//	//{
//	//	for (int j = 1;j <= i;j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
////九九乘法表
//for (int i = 1;i <= 9;i++)
//{
//	for (int j = 1;j <= i;j++)
//	{
//		printf("%d * %d = %d\t", i, j, i * j);//   \t制表符
//	}
//	printf("\n");
//}
//
//printf("name\t\tage\tgender\thobby\t\n");
//printf("zhangsan\t23\t男\t篮球\t\n");
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}