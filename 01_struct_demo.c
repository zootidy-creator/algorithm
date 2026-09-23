//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//
//
//struct Girlfriend
//{
//	char name[100];
//	int age;
//	char gender;
//	double height;
//};
//
//int main()
//{
//	/*
//	   结构体的定义：
//	      自定义的数据类型
//		  就是由很多个数据组合成的一个整体
//		  每一个数据都是结构体的成员
//
//	   书写位置；
//	      函数里面：局部位置，只能在本函数中使用
//		  函数外面：全局位置，在所有的函数中都可以使用
//	
//	*/
//
//	struct Girlfriend gf1;
//	strcpy(gf1.name, "小诗诗");//name是一个数组，要用strcpy函数进行赋值，不能直接使用'='
//	gf1.age = 18;//基本的数据直接等号‘=’
//	gf1.gender = 'F';//一个字符，不是数组
//	gf1.height = 1.68;
//
//	printf("名字为：%s\n", gf1.name);
//	printf("年龄为：%d\n", gf1.age);
//	printf("性别为：%c\n", gf1.gender);
//	printf("身高为：%.2f\n", gf1.height);
//
//
//
//
//	return 0;
//}