//#include<stdio.h> 
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
//
//
//void getMaxandMin(int arr[], int len, int* max, int* min);
//
//int main()
//{
//	//定义数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(int);//长度
//
//	// 调用函数getMaxandMin求取最大最小值
//	int max, min;//定义变量
//	getMaxandMin(arr, len, &max, &min);
//
//	printf("最大值为：%d\n", max);
//	printf("最小值为：%d\n", min);
//
//	return 0;
//}
//
//void getMaxandMin(int arr[], int len,int*max,int*min)//如果得出max和min不好使用函数，来返回，得出值，，可以使用指针来改变地址(思路）
//{
//	//定义数组
//	//求最大值
//	*max = arr[0];
//
//	for (int i = 1;i < len;i++)
//	{
//		if (arr[i] > *max)
//		{
//			//得出最大值
//			*max = arr[i];
//
//		}
//	}
//
//
//	//求最小值
//	*min = arr[0];//不可以再定义int *min=，已经定义过了，直接指针更值就好了
//	for (int i = 1;i < len;i++)
//	{
//		if (arr[i] < *min)
//		{
//			*min = arr[i];
//		}
//	}
//
//	//不需要retrun返回值
//
//}
//
//
