#define _CRT_SECURE_NO_WARNINGS 1
<<<<<<< HEAD
//#include <stdio.h>
/*#include <string.h>*///Ìá¹©strlen£¨£©º¯ÊıÔ­ĞÍ
//#define DENSITY 62.4//ÈËÌåÃÜ¶È£¨°õ¡¢Á¢·½Ó¢³ß£©
=======
#include <stdio.h>
/*#include <string.h>*///æä¾›strlenï¼ˆï¼‰å‡½æ•°åŸå‹
//#define DENSITY 62.4//äººä½“å¯†åº¦ï¼ˆç£…ã€ç«‹æ–¹è‹±å°ºï¼‰
>>>>>>> 5be1ea4b4e5905337b835cb3a4eb6f1f920b01d6
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];//nameæ˜¯ä¸€ä¸ªå¯å®¹çº³40ä¸ªå­—ç¬¦çš„æ•°ç»„
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

<<<<<<< HEAD
////Ê¹ÓÃlimit.hºÍfloatÍ·ÎÄ¼şÖĞ¶¨ÒåµÄÃ÷Ê¾³£Á¿
//#include<limits.h>//ÕûĞÍÏŞÖÆ
//#include<float.h>//¸¡µãĞÍÏŞÖÆ
//int main()
//{
//	printf("Some number limits for this stystem:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest longlong: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smalleat normal float: %e\n",FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//
//	return 0;
//}

//×Ö¶Î¿í¶È
=======
//ä½¿ç”¨limit.hå’Œfloatå¤´æ–‡ä»¶ä¸­å®šä¹‰çš„æ˜ç¤ºå¸¸é‡
#include<limits.h>//æ•´å‹é™åˆ¶
#include<float.h>//æµ®ç‚¹å‹é™åˆ¶
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
//å­—æ®µå®½åº¦
>>>>>>> 5be1ea4b4e5905337b835cb3a4eb6f1f920b01d6
//#define PAGES 959
//int main()
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n",PAGES);
//
//	return 0;
//}

<<<<<<< HEAD
//¸¡µãĞÍĞŞÊÎ·ûµÄ×éºÏ
//int main()
//{
//	const double RENT = 3825.99;//const±äÁ¿
=======
//æµ®ç‚¹å‹ä¿®é¥°ç¬¦çš„ç»„åˆ
//int main()
//{
//	const double RENT = 3825.99;//constå˜é‡
>>>>>>> 5be1ea4b4e5905337b835cb3a4eb6f1f920b01d6
//
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT); 
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//	return 0;
//}


//int main()
//{
//	char NAME [40];
//	double cash = 77.87;
//	scanf("%s", &NAME);
//	printf("The %s family just may be %c%.1f dollars richer!\n",NAME,'$',cash);
//
//		return 0;
//}

<<<<<<< HEAD
//´òÓ¡½Ï³¤µÄ×Ö·û´®
//int  main()
//{
//	printf("Here's one way to print  a");
//	printf("long string.\n");//µÚÒ»ÖÖ·½·¨
//	printf("Here's another way to print  a  \
//long string.\n");//µÚ¶şÖÖ·½·¨
//	printf("Here's the newest way to print a"
//		"long string.\n");//µÚÈıÖÖ·½·¨
=======
//æ‰“å°è¾ƒé•¿çš„å­—ç¬¦ä¸²
//int  main()
//{
//	printf("Here's one way to print  a");
//	printf("long string.\n");//ç¬¬ä¸€ç§æ–¹æ³•
//	printf("Here's another way to print  a  \
//long string.\n");//ç¬¬äºŒç§æ–¹æ³•
//	printf("Here's the newest way to print a"
//		"long string.\n");//ç¬¬ä¸‰ç§æ–¹æ³•
>>>>>>> 5be1ea4b4e5905337b835cb3a4eb6f1f920b01d6
//	return 0;
//}

//int main()
//{
//	int  age;
//	float  assets;
//	char  pet[30];
//
//	printf("Enter your age, assets,and favourote pet.\n");
//	scanf("%d %f ",&age,&assets);
//	scanf("%s", pet);
//	printf("%d  $%.2f %s\n", age, assets, pet);
//		return 0;
//}

//int main()
//{
//	unsigned width,  precision;
//	int number = 256;
//	double weight = 242.5;
//
//
//	printf("Enter a filed width:\n");
//	scanf("%d", &width);
//	printf("The number is :%d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width,precision,weight);
//	printf("Done!\n");
//	return  0;
//}
<<<<<<< HEAD

//#define BOOK "War and peace"
//int main()
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of\"%s \"sells for %c%.2f.\n", BOOK, '$', cost);
//	printf("This is %g %cof list", percent,' %');
//	return 0;
//}

//µÚÒ»Ìâ
//int main()
//{
//	char name[20];
//	char surname[20];
//
//	printf("What's your last name and first name?\n");
//	scanf("%s %s", name, surname);
//		return 0;
//}

//µÚ¶şÌâ
//int main()
//{
//	char name[40];
//	printf("What's your name?\n");
//	scanf("%s", name);
//	printf("Hi!\"%s\"\n",name);
//	printf("Hi!\"%20s\"\n", name);
//	printf("Hi!\"%-20s\"\n", name);
//
//	int a = strlen(name)+3;
//	printf("Hi!%*s\n", a, name);
//		return 0;
//}

//µÚÈıÌâ
//int main()
//{
//	 float a = 21.3f;
//	 printf("The input is %2.1f or %2.3e\n", a, a);
//	 printf("The input is %+2.3f or %1.3e\n",a,a);
//	 return 0;
//}

//µÚËÄÌâ
//int main()
//{
//	char name[40];
//	float tall;
//
//	printf("Äã½ĞÊ²Ã´Ãû×Ö£¬Éí¸ß¶àÉÙ£¿\n");
//	printf("ĞÕÃû");
//	scanf("%s", name);
//	printf("Éí¸ß _____cm\b\b\b\b\b\b\b");
//	scanf("%f", &tall);
//	printf("\n%s,you are%3.0fcm tall.", name, tall);
//	return 0;
//}

//µÚÁùÌâ
//int main()
//{
//	char last[40];
//	char first[40];
//	printf("what's your last name?\n");
//	scanf("%s ", last,sizeof(last));
//	printf("what's your first name?\n");
//	scanf(" %s", first,sizeof(first));
//	printf("%s %s\n", last, first);
//
//	printf("%*d ", strlen(last),strlen( last));
//	printf("%*d", strlen( first),strlen(first));
//	return 0;
//}

//µÚÆßÌâ
//#include <float.h>
//int main()
//{
//	float a, b;
//	a = 1.0f;  b = 3.0f;
//	double c, d;
//	c = 1.0; d = 3.0;
//	printf("%.6f,%.6f\n", a, b);
//	printf("%.6f,%.6f\n", c, d);
//
//	printf("%.12f,%.12f\n", a, b);
//	printf("%.12f,%.12f\n", c, d);
//
//	printf("%.16f,%.16f\n", a, b);
//	printf("%.16f,%.16f\n", c, d);
//
//	printf("%f", FLT_DIG);
//	printf("%f", DBL_DIG);
//
//	return 0;
//}

//µÚ°ËÌâ
//int main()
//{
//	const  float rise = 3.785;//Ò»¼ÓÂØ=1.785Éı
//	const float  kilometre = 1.609;//Ò»Ó¢Àï=1.609¹«Àï
//
//	float  gallon = 0;
//	float 	mile = 0;
//
//	printf("Please input the amount of gas consumed_____(gallon)\b\b\b\b\b\n");
//	scanf("%f",&gallon);
//	printf("Please input the mileage_____\b\b\b\b\b\n");
//	scanf("%f",& mile);
//
//	float a = gallon / mile;
//	printf("Miles per gallon %.1f\n", a);
//
//	float  b = gallon * rise;
//	float c = mile*kilometre;
//	float d = b / c;
//	printf("rise/kilometers %.1f", d);
//	return 0;
//}
=======
>>>>>>> 5be1ea4b4e5905337b835cb3a4eb6f1f920b01d6
