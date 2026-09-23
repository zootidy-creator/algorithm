#include<stdio.h>  
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>

//1.定义结构体
typedef struct Student
{
	char name[100];
	int id;
	float score;
}S;

void printAll(S stuArr[],int len);
void average(S stuArr[],int len);
int findTop(S stuArr[],int len);
void method(S* p);

int main()
{
	//要求：录入 5 个学生信息，写 3 个函数：printAll()、average()、findTop()（返回最高分学生）。
	S stu1 = { "小邹",1,60.0 };
	S stu2 = { "小吴",2,55.0 };
	S stu3 = { "小鹏",3,76.5 };
	S stu4 = { "小源",4,88.2 };
	S stu5 = { "小芸",5,99.5 };
	//利用数组储存所有信息
	S stuArr[5] = {stu1,stu2,stu3,stu4,stu5};
	//调用函数printAll
	printAll(stuArr,5);
	//调用average()
	average(stuArr,5);
	//调用method修改信息,如果改错分了,假设小芸实际是79.5
	method(&stuArr[4]);
	printAll(stuArr,5);
	//调用findTop()
	int max=findTop(stuArr,5);
	printf("第一名为:姓名%s，学号%d，分数%.1f\n", stuArr[max].name, stuArr[max].id, stuArr[max].score);
	return 0;
}

 void printAll(S stuArr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		S temp = stuArr[i];
		printf("五个学生的基本信息为:姓名%s，学号%d，分数%.1f\n", temp.name, temp.id, temp.score);
	}
}

 void average(S stuArr[],int len)
 {
	 float sum = 0;
	 
	 for (int i = 0; i < len; i++)
	 {
		 S temp = stuArr[i];
		 sum = sum + temp.score;
	 }
	 float avg = sum / len;
	 printf("平均分为%.2f\n", avg);
 }

 int findTop(S stuArr[], int len)
 {
	 int max = 0;//假定最大
	 for (int i = 0;i < len;i++)
	 {
		 S temp = stuArr[i];
		 S maxtemp = stuArr[max];
		 if (temp.score > maxtemp.score)
		 {
			 max = i;
		 }
	 }
	 return max;
 }
 //想要修改内容，需要使用指针进行传递
 void method(S*p)
 {
	 printf("请输入要修改的名字：\n");
	 scanf("%s", p->name);//（*p）.等价于p->name
	 printf("请输入要修改的分数：\n");
	 scanf("%f", &(p->score));
 }
