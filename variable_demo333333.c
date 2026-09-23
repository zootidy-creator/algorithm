//#include<stdio.h>
//
//
//int main()
//{
//	//1.定义float，double，long double数据类型的变量
//	//float 单精度小数（精确度小数点后6位）windows占4个字节（38位）
//	float a = 3.14F;
//	printf("%.2f\n", a);
//
//	//double 双精度小数（精确度小数点后15位）  windows占8个字节（308位）
//	double b = 1.78;
//	printf("%.2lf\n", b);
//
//	//long double 高精度小数（精确度小数点后18~19位）windows占8个字节 其他（12，16）
//	long double c = 3.1415926L;
//	printf("%.2lf\n", c);
//
//	//利用sizeof测量每一种数据类型占用多少字节？
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(a));
//
//
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(b));
//
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(c));
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}