#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	//for (;;)
		//printf("hehe\n");
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++);
		printf("hehe	");
	}
	return 0;
}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)//ֻ��ӡ����
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//int ch = 0;
//	//while (getchar())
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//getchar();
//	int ch = 0;
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)��>");
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	 {
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{ 
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	/*if (1 == day)
//		printf("����һ");
//	else if (2 == day)
//		printf("���ڶ�");
//	else if (3 == day)
//		printf("������");
//	else if (4 == day)
//		printf("������");
//	else if (5 == day)
//		printf("������");*/
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("����\n");
//		break;
//	}
//		return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}



//int text()
//{
//	int a = 3;
//	if (a == 3) 
//		return 1;
//	return 0;
//	
//}
//int main()
//{
//	int r = text();
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	if (3 == 5)
//		printf("hehe\n");
//	int age = 70;
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age < 100)
//		printf("����\n");
//	else
//		printf("������\n");
//
//	return 0;
//}