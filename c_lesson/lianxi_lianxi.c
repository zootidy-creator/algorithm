//#include<string.h>
//#include<stdio.h> 
//
//
//int main()
//{
//	//在范围里的质数，寻找一个范围里面的质数
//	// 拆分
//	// 1.一个数判断是否为质数
//	// 2.键盘录入一个范围
//	// 3.在范围里寻找
//	int a, b;//定义录入的两个数
//	printf("这可以判断有多少个质数\n");
//	printf("请输入两个数：\n");
//	scanf("%d %d", &a, &b);//键盘录入
//	int max = a > b ? a : b;//判断录入数字的大小
//	int min = a < b ? a : b;
//	int shu = 0;//总数
//	
//	for (int i = min;i <= max;i++)
//	{
//		if (i <= 0)//把小于零排除
//		{
//			printf("数据错误\n");
//		}
//		else if (i == 1)
//		{
//			continue;//1不是质数，直接跳过
//		}
//		//1.判断质数
//		
//		int count = 0;//总数
//		for (int j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				count++;//找到一个数可以满足条件
//				break;//只需要一个数即可
//			}
//
//		}
//		if (count == 0)
//		{
//			shu++;//有一个质数就加一
//		}
//		
//	}
//	printf("一共有%d个质数\n",shu);
//
//
//
//	return 0;
//}