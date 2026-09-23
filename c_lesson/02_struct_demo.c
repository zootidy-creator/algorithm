//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//
////定义结构体
//struct student
//{
//	char name[100];
//	int age;
//};
//
//int main()
//{
//	//存储三个学生的基本信息
//	struct student stu1 = { "小邹",18 };//直接初始化赋值，不需要用strcpy函数
//	struct student stu2 = { "小丰",18 };
//	struct student stu3 = { "小源",18 };
//
//	//利用数组存储三个学生的基本信息
//	struct student stuArr[3] = { stu1,stu2,stu3 };
//
//	//for循环进行遍历
//	for (int i = 0;i < 3;i++)
//	{
//		struct student temp = stuArr[i];
//		printf("学生的基本信息为：姓名%s,年龄%d\n", temp.name,temp.age);
//	}
//
//	return 0;
//}