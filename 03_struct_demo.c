//#include<stdio.h>  
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//#include<string.h>
//
////1，定义结构体
//typedef struct Character
//{
//	char name[100];
//	int ATK;
//	int Defense;
//	int HP;
//}Crt;
//
//
//int main()
//{
//	/*
//	   结构体起别名：
//	     typedef struct 名
//		 {
//		   ....;
//	     }别名，例如GF
//	   后面可以直接使用  （别名）  代替  （struct student ）  
//	*/
//
//	/*
//	    需求：定义一个结构体表示游戏人物
//	          属性：姓名，攻击力，防御力，血量
//	    把三个游戏人物放入数组中，并遍历数组
//	*/
//	    //存入三个角色    
//	Crt hero1 = { "猪猪侠",20,50,100 };
//	Crt hero2 = { "菲菲",15,40,90 };
//	Crt hero3 = { "超人强",30,60,120 };
//	//进行遍历
//	Crt heroArr[3] = { hero1,hero2,hero3 };//数组
//	for (int i = 0;i < 3;i++)
//	{
//		Crt temp = heroArr[i];
//		printf("角色的基本信息：姓名%s，攻击力%d，防御力%d，血量%d\n", temp.name, temp.ATK, temp.Defense, temp.HP);
//	}
//
//	return 0;
//}