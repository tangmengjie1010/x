#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<stdio.h>





//struct stu
//{
//	char name[10];
//	int age;
//	char sex[10];
//	char tele[20];
//
//};
//void  print(struct stu* ps)
//{
//	printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{ 
//	struct stu s = {"tang ",20,"nan","1111110" };
//	printf("%s %d %s %s\n", s.name ,s.age,s.sex,s.tele);
//	print(&s);
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//&a
//	//printf("%p", &a);
//	int* p = &a;
//	/*char ch = 'w';
//	char* pc = &ch;*/
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//#define NUM 100
//#define ADD(x,y) ((x)+(y))
//int  Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	/*printf("%d\n", NUM);
//	int a = NUM;
//	printf("%d\n", a);
//	int arr[NUM] = { 0 };*/
//	int a = 2;
//	int b = 3;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//extern int mang;
//int main()
//{
//	printf("%d", mang);
//	return 0;
//}
////extern int ta;
//// 
//int mian()
//{
//	printf("%d\n", ta);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//			
//	}
//	return 0;
//}
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int e = Add(2, 3);
//	return 0;
//}
//int msin()
//{
//	int arr[] = { 1,2,3,4,5,6, };
//	arr[3];
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int c = a > b ? a : b;
//	printf("%d", c);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a || b)
//	{
//		printf("哈\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 2;
//	if (a && b)
//	{
//		printf("哈\n");
//	}
//	return 0;
//}
////i/*nt main()
//{
//	int a = 3;
//	if (a ==1)
//	{
//		printf("hh\n");
//	}
//	return 0;
// }*/
//int main()
//{
//	/*int flag = 7;
//	if (!flag)
//	{
//		printf("hehe\n");
//	}*/
//	/*int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));*/
//	/*int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));*/
//	int a = 10;
//	//int b = a++;
//	int c = ++a;
//	printf("%d\n", a);
//	//printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a = 20;
//	a += 3;//a=a+3
//	a -= 3;//a=a-3
//
//
//	return 0;
//}
//////i/*nt main()
//{
//	float a = 7 / 2.0;
//	printf("%f\n", a);
//	int b = 7 % 2;
//	printf("%d\n", b);
//	return 0;*/
//}
//int main()
//{
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum); 
//	return 0;
//}
//
////int main()
//{
//	int line = 0;
//	printf("学习\n");
//	while (line<20000)
//	{
//		printf("写代码:%d\n",line);
//        line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好工作\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("上大学\n");
//	printf("要好好学习吗？（1/0）");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("好工作\n");
//	}
//	else
//	{
//		printf("回家\n");
//	}
//	return 0;
//}
//int main()
//{
////%d-打印整形 
////%c-打印字符
////%s-打印字符串 
////%f-打印float
////%lf-打印double
////%zu-打印sizeof的返回值
//
//	printf("%c\n",'\130');
//	return 0;
//}
////int main()
////{
////	char arr1[] = "abcdef";
////	char arr2[] = { 'a','b','c','d','e','f','\0'};
////	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#define max		1000
//int main()
//{
//	//字面常量
//	//const 修饰的常变量
//	//#define定义标识符常量
//	// 枚举常量
//	//const int a = 10;
//	////a = 22;
//	//const int n = 10;
//	//int arr[n] = { 0 };
//	///*printf("%d\n", a);*/
//	printf("%d\n", max);//%s 打印字符串
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	short a = 20;
//	printf("%d\n",a);
//	return 0;
//}
////int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long long)); 
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	char ch = 't';
//	char* pc = &ch;
//	*pc = 'm';
////	printf("ch = %c\n", ch);
//	printf("%d\n", sizeof(pc));
//	return 0;
//}
//int main()
//{
//	int a = 13;
//	int* p = &a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//
//	return 0;
// }
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max); 
//	return 0;
//}

//extern int add(int, int);

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//int main()
//{
//	extern int tmj;
//	printf("tmj = %d\n", tmj);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("上大学\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("回家种地\n");
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("上大学\n");
//
//	while (line < 200000)
//	{
//		printf("好好学习:%d\n",line);
//		line++;
//	}
//	if(line>=200000)
//	printf("好offer\n");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 34;
//	int b = 85;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else max = b;
//	printf("max = %d\n", max);
//	return 0;
//}
/*nt main()
{
	int arr[10] = { 0 };
	arr[4];
	return 0;
}*/
