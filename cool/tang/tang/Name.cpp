#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 1, j = 1, k = 2;
//	if ((j++ || k++) && i++)
//		printf("%d,%d,%d", i, j, k);
//	return 0;
//}
//int main()
//{
//	int weigh = 0;
//	int high = 0;
//	scanf("%d %d", &weigh, &high);
//	float bmi = weigh / ((high/100.0) *(high/100.0));
//	printf("%.2f", bmi);
//	return 0;
//}
//int main()
//{
//	//int arr[4] = { 0 };
//	int i = 1;
//	int max = 0;
//	int n = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);// &arr[i]);   
//		if(n>max)
//			max = n;
//		i++;
//	}
//	/*int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}*/
//	printf("%d\n", max);
//	return 0;
//}
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}

//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}
//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n); 
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	printf("NO. %d is %.2f,%.2f,%.2f.", id, c, math, eng);
//	return 0;
//}
//int main()
//{
//	int year=0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("yaer=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);  
//	return 0;
//}
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sum = sizeof(arr) / sizeof(arr[0]);
//	while (i < sum)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	/*printf("%c\n", 97);
//	printf("%c\n", 'a');*/
//	return 0;
//}

//#define PI 3.1415926
//int main()
//{   
//	float r, h;
//	scanf("%f %f", &r, &h);
//	float l = 2 * PI * r;
//	float s = PI * r * r;
//	float v = s * h;
//	printf("%.2f %.2f %.2f\n", l, s, v);
//	return 0;
//}



//int main()
//{
//	int n, x1, x2, x3, y;
//	printf("please input number n:");
//	scanf("%3d", &n);
//	x1 = n / 100;
//	x2 = n / 10 % 10;
//	x3 = n % 10;
//	y = x3 * 100 + x2 * 10 + x1;
//	printf("y=%d\n", y);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//scanf("%2d%3d%*2d%3d", &a,&b,&c);
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//}
//int main()
//{
//	int sum = 0; int n = 20;
//	for (int i = 1; i <= 20; i++)
//	{
//		sum += i;
//		
//	}
//	printf("s=%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i <= 20; i++;)
//	{
//		sum += i;
//	}
//	printf("s=%d", sum);
//	
//	return 0;
//}



//void main()
// 
//{
//	int c;
//	c = getchar();
//	c >= 'a' && c <= 'z' ? putchar(c + 'A' - 'a'):putchar(c);
//
//}

//#define PI 3.1415926
//int main()
//{
//	float r;
//	double   area, vol;
//	scanf("%f",&r );
//	area = 4 * r * r * PI;
//	vol = 4 / 3 * PI * r * r * r;
//	printf("%lf %lf", area, vol);
//
//		return 0;
//}
//int main()
// 
//{
//	double PI = 3.1415926;
//	double area, vol;
//	double r = 0;
//	scanf("%lf", &r);
//	area =  4* PI * r^2;
//	vol = 4 / 3 *( PI * r * r * r);
//	printf("%lf %lf", area, vol);
//
//	return 0;
//}

//static int mang = 2020;
//int  Add(int x, int y)
//{
//	return x + y;
//}
//#include <stdio.h>
