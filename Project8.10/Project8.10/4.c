#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*#include <string.h>*///�ṩstrlen��������ԭ��
//#define DENSITY 62.4//�����ܶȣ���������Ӣ�ߣ�
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];//name��һ��������40���ַ�������
//
//	printf("Hi! What's your firs name?\n");
//	scanf("%s", name);
//	printf("%s,What's your weight in pounds?\n", name);
//	scanf("%f",&weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
//	printf("Also,your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);
////
//		return 0;
//}
//#include <string.h>
//#define PRAISE "You are an extraordinary being."
//int main()
//{
//	char name[40];
//
//	printf("What's your name?");
//	scanf("%s", name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	printf("Your name of %u letters occupies %u memory cells.\n",
//		strlen(name),sizeof name);
//	printf("The phrase of praise has %u letters", strlen(PRAISE));
//
//		return 0;
//}

//#define PI 3.14159
//int main()
//{
//	float area, circum, radius;
//	printf("What is the radius of your pizza?\n");
//	scanf("%f",&radius);
//	area = PI * radius * radius;
//	circum = 2.0 * PI *radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f,area = %1.2f\n", circum, area);
//	return 0;
//}

//ʹ��limit.h��floatͷ�ļ��ж������ʾ����
#include<limits.h>//��������
#include<float.h>//����������
int main()
{
	printf("Some number limits for this stystem:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest longlong: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smalleat normal float: %e\n",FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;
}