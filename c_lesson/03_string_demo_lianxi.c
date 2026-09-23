//#include<stdio.h>
//#include<stdlib.h>
//
///*
//	需求：定义一个数组存储无数个学生的名字并进行遍历
//
//	注意：C语言里“无数个”是做不到的，数组长度必须是编译期就能确定的常量，
//	      所以需要用宏定义一个上限。
//*/
//
//#define MAX_STUDENTS 100	//最多能存多少个学生的名字
//#define MAX_NAME_LEN 32		//每个名字最多占多少个字节（1个汉字在GBK下占2个字节）
//
//int main()
//{
//	//1.创建一个数组存储
//	//   要存“多个名字”，必须用二维字符数组：
//	//   namestr[0] 是第1个名字，namestr[1] 是第2个名字……每个名字都有自己独立的空间
//	char namestr[MAX_STUDENTS][MAX_NAME_LEN];
//
//	//2.键盘录入名字
//	//   i 既表示“已经录入了几个名字”，也是“新名字要存放的下标”
//	int i = 0;
//
//	while (1)
//	{
//		system("cls");
//
//		if (i >= MAX_STUDENTS)//数组已经存满，不能再录入了
//		{
//			printf("已经存满%d个名字，不再录入\n", MAX_STUDENTS);
//			break;
//		}
//
//		printf("请输入名字：");
//
//		//细节1：namestr[i] 本身就是一个字符串（类型 char* ），
//		//       所以不需要再写 &namestr[i]；写 &namestr[i] 类型会变成 char(*)[32]
//		//细节2：%31s 表示最多读31个字节，给 '\0' 留位置，防止越界
//		scanf("%31s", namestr[i]);//键盘录入名字
//
//		printf("第%d个名字已经录入成功,名字为：%s\n", i + 1, namestr[i]);
//		i++;
//
//		int choose;//选择
//		printf("是否继续录入名字，0为结束，1为继续：");
//		scanf("%d", &choose);
//		if (choose == 0)
//		{
//			break;//结束
//		}
//		//输入1或者其它内容都当作继续
//	}
//
//	//3.遍历：把录入过的名字全部打印出来（原来的代码少了这一步）
//	printf("\n======= 录入的所有名字 =======\n");
//	for (int j = 0; j < i; j++)
//	{
//		printf("第%d个名字：%s\n", j + 1, namestr[j]);
//	}
//	printf("一共录入了%d个名字\n", i);
//
//	return 0;
//}
