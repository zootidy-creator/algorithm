//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	//需求：储存五个人的名字，并进行遍历
//	//1.利用二维字符串数组来储存名字
//
//	char name[5][1000] =
//	{
//		"aa",
//		"b",
//		"cc",
//		"ddd",
//		"eee"
//	};//储存五个名字
//
//	for (int i = 0;i < 5;i++)//利用循环遍历
//	{
//		char* nameArr1 = name[i];
//		printf("%s\n", nameArr1);
//		printf("%s\n", name[i]);
//		
//	}
//	
//	//2.利用指针数组来存储
//	char* nameArr2[5] =
//	{
//		"aaa",
//		"bbb",
//		"ccc",
//		"ddd",
//		"eee"
//	};
//
//	for (int i = 0;i < 5;i++)
//	{
//		char *tempname = nameArr2[i];
//		printf("%s\n", tempname);
//	}
//
//
//
//	return 0;
//}