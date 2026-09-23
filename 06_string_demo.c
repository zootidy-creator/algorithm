//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	//键盘录入一个字符串，统计该字符串中大写字母，小写字母，数字的出现次数
//
//	//1，定义一个数组，录入字符串
//	char strArr[100];
//	printf("请输入字符串：\n");
//	scanf("%s", strArr);
//	
//	int Bigcount = 0;
//	int Smallcount = 0;
//	int Numbercount = 0;
//
//	//2,统计该字符串中大写字母，小写字母，数字的出现次数
//	for (int i = 0;i < strlen(strArr);i++)
//	{
//		char c = strArr[i];//临时变量接受
//		//进行判断
//		if (c >= 'a' && c <= 'z')
//		{
//			Smallcount++;
//		}
//		if (c >= 'A' && c <= 'Z')
//		{
//			Bigcount++;
//		}
//		if (c >= 'a' && c <= 'z')
//		{
//			Numbercount++;
//		}
//	}
//
//	printf("大写字母的个数为%d个\n", Bigcount);
//	printf("小写字母的个数为%d个\n", Smallcount);
//	printf("数字的个数为%d个\n", Numbercount);
//	return 0;
//}