//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	//用户登录系统
////已知正确的账号和密码，模拟用户登录，有三次机会，登录之后，给出提示
//
//	//1.利用数组存储账号和密码
//	char* signup[2] =
//	{
//		"zoufengyuan",
//		"123456"
//	};//账号和密码
//
//	for(int i=1;i<=3;i++)
//	{
//		
//		char name[100];
//		char password[100];
//		printf("--------登录界面-------\n");
//		printf("请输入您的账号：\n");//提示输入账号和密码
//		scanf("%s", name);//键盘录入账号和密码
//		printf("请输入您的密码：\n");
//		scanf("%s", password);
//
//		int check1 = strcmp(signup[0], name);//进行比较
//		int check2 = strcmp(signup[1], password);
//
//		if (check1 == 0 && check2 == 0)
//		{
//			printf("登录成功\n");
//			Sleep (3000);
//			break;
//		}
//		else
//		{
//			printf("账号或密码错误，请重试\n");
//			Sleep(1000);
//			
//			if (i == 3)//超过三次退出
//			{
//				printf("已超过尝试次数\n");
//				Sleep(3000);
//				break;
//			}
//			
//			
//		}
//		printf("可尝试次数为%d次\n", 3-i);
//		Sleep(3000);
//		system("cls");
//	}
//
//}