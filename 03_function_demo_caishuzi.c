#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include<windows.h>
//
//int main()
//{
//	//猜数字1~100
//	//1，键盘录入数字，你来猜
//	//2，猜到结束游戏
//	
//	while (1)
//	{
//		int turn = 1;
//		system("cls");
//		srand(time(NULL));//随机数
//		int num = rand() % 100 + 1;//划定范围1~100
//		int guess;
//		printf("猜数字小游戏\n在1~100中猜一个数字\n");
//		printf("请输入您猜的数字：\n");
//		
//		while (1)
//		{
//			scanf("%d", &guess);//键盘录入
//			if (guess == num)
//			{
//				
//				printf("猜对啦！\n已尝试次数为%d\n", turn);
//				goto b;//跳出循环
//			}
//			else
//			{
//				int b;//定义变量录入数字
//				printf("猜错啦!已尝试次数%d\n", turn);
//				//判断大小
//				if (guess > num)
//				{
//					printf("您输入的数字大了\n");
//
//				}
//				else
//				{
//					printf("您输入的数字小了\n");
//				}
//			}
//			turn++;
//		}		
//		b:
//		printf("还想继续吗？按1继续,其他数字结束游戏\n");
//		int c;
//		scanf("%d", &c);
//		if (c == 1)
//		{
//			printf("倒计时三秒后，重新挑战！\n");
//			for (int i = 3;i >= 1;i--)
//			{
//				printf("%d\n", i);
//				Sleep(1000);
//			}
//			turn++;
//			continue;
//		}
//		else
//		{
//			printf("欢迎再次挑战！\n");
//			Sleep(1000);
//			break;
//		}
//	
//	}
//	printf("游戏结束！\n");
//
// return 0;
//}
