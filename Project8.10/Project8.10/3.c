#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<inttypes.h>//支持可移植类型
//int main()
//{
//	int32_t me32;//me32是一个32位有符号整型变量
//
//	me32 = 45933945;
//	printf("First, assume int32_t is int:");
//	printf("me32 =%d\n", me32);
//	printf("Next,let's not male any assumptions.\n");
//	printf("Inside,use a \"macro\" from inttypes.h:");
//	printf("me32 = %" PRId32 "\n", me32);
//	return 0;
//}

//以两种方式显示float类型的值
//int main()
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be writtrn %e\n", aboat,aboat);
//	//要求编译器支持C99
//	printf("And it's %a in hexadecimal, powers of 2 notation\n",aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//	return 0;
//}
////溢出
//int main()
//{
//	float toobig = 3.4E38 * 100.0f;
//	printf("%e\n", toobig);
//	return 0;
//}

//打印类型大小
//int main()
//{
//	//C99为类型大小提供%zd转换说明
//	printf("Type int has a size of %u bytes.\n",sizeof(int));
//	printf("Type char has a size of %u bytes.\n", sizeof(char));
//	printf("Type long has a size of %u bytes.\n", sizeof(long));
//	printf("Type long long has a size of %u bytes.\n", sizeof(long long));
//	printf("Type double has a size of %u bytes.\n", sizeof(double));
//	printf("Type long double has a size of %u bytes.\n", sizeof(long double));
//	return 0;
//}

//使用转义序列
//int main()
//{
//	float salary;
//
//	printf("\aEnter your desired mothly salary:");
//	printf("$_____\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.",salary,
//		salary * 12.0);
//	printf("\rGee!\n");
//	return 0;
//}

//第三章编程练习
//第一题
//int main()
//{
//	float a = .1e-10;
//	float b = a / 2.4e12;
//	printf("So b=%e\n", b);
//	return 0;
//}
//第二题
//int main()
//{
//	char a = 66;
//	printf("%c\n", a);
//	return 0;
//}
//第三题
//int main()
//{
//	printf("\aStartled by the suddenn sound,Sally shouted,\n");
//	printf("By thr Great Pumpkin,what was that!");
//		return 0;
//}
//第四题
//int main()
//{
//	float input;
//	input = 0;
//
//	printf("Enter a floating-point value:\n", input);
//	scanf("%f", &input);
//	printf("fixed-point notation:%f\n", input);
//	printf("exponential notation:%e\n", input);
//	printf("p notation:%a\n", input);
//	return 0;
//}
//第五题
//int main()
//{
//	int age;
//	float s;
//	printf("你今年多少岁？\n");
//	scanf("%d", &age);
//	s = age * 1.156e7;
//	printf("哦，你已经活了%f秒了哟", s);
//	return 0;
//}
//第六题
//int main()
//{
//	float water;
//	float shu;
//	printf("计算水分子的夸脱数，请将想计算的质量写下：_____g\b\b\b\b\b\b");
//	scanf("%f", &water);
//	shu = water * 950;
//	printf("答案是%f", shu);
//	return 0;
//}
