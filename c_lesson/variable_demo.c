////#include<stdio.h>
////
//int main()
//{
//	//定义short,int,long,long long四种数据类型的变量
//	//数据类型 变量名=数据值
//
//	//short 短整型 windows 2个字节
//	short a =33;
//	printf("%d\n", a);
//
//	//int整数Windows 四个字节
//	int b = 20;
//	printf("%d\n", b);
//
//	//long长整型 windows 4个字节
//	//  Linux 32位 4个字节 64位 8个字节
//	long c = 1000L;
//	printf("%ld\n", c);
//
//	//longlong（C99）超长整型 windows 8个字节（19位数）
//	long long d = 10000000LL;
//	printf("%lld\n", d);
//
//	//2.利用sizeof测量每一种数据类型占用多少字节？
//	// sizeof（变量类型/数据类型）
//	//short
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(a));
//
//	//int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(b));
//
//
//	// long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(c));
//
//
//
//
//
//
//
////
////
//	return 0;
////}