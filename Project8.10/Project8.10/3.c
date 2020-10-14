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

////电力公司电费清单
////首 360kwh：	$0.13230/kwh
////续108kwh：	$0.15040/kwh
////续252kwh：	$0.30025/kwh
////超过 720kwh：	$0.34025/kwh
//#define RATE1		0.13230//首次使用360kwh的费率
//#define RATE2		0.15040
//#define RATE3		0.30025
//#define RATE4		0.34025
//#define BREAK1	360.0//费率的第一个分界点
//#define BREAK2	468.0
//#define BREAK3	720.0
//#define BASE1	(RATE1 * BREAK1)//使用360kwh的费用
//#define BASE2	(BASE1 +(RATE2 * (BREAK2 - BREAK1)))
//#define BASE3	(BASE2 +(RATE3 * (BREAK3 - BREAK2)))
//int main()
//{
//	double kwh;//使用的千瓦时
//	double bill;//电费
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)//360~468kwh
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)//468~720kwh
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else//超过720kwh
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}

////使用嵌套if语句显示一个数的约数
//#include<stdbool.h>
//int main()
//{
//	unsigned long num;//待测试的数
//	unsigned long div;//可能的约数
//	bool isPrime;//素数标记
//
//	printf("Please enter an integer for analysis;");
//	printf("Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; (div*div) <= num; div++)
//		{
//			if (num % div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and%lu.\n", num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n", num, div);
//				isPrime = false;//该数不是素数
//			}
//		}
//		if (isPrime)
//			printf("%lu is prime.\n", num);
//		printf("Please enter another integer for analysis;");
//		printf("Enter q to quit.\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}

////使用逻辑与运算符
//#define PERIDO '.'
//int main()
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar( )) != PERIDO)
//	{
//		if (ch != ' " '  && ch != '\' ')
//			charcount++;
//	}
//	printf("There are %d non-quote characters.\n", charcount);
//	return 0;
//}
////统计字符数、单词数、行数
//#include<ctype.h>//为isspace（）函数提供原型
//#include<stdbool.h>//为bool、true、false提供定义
//#define STOP '|'
//int main()
//{
//	char c;//读入字符
//	char  prev;//读入的前一个字符
//	long n_chars = 0L;//字符数
//	int  n_lines = 0;//行数
//	int  n_words = 0;//单词数
//	int p_lines = 0;//不完整的行数
//	bool inword = false;//如果c在单词中，inword等于true
//
//	printf("Enter text to be analyzed(| to terminate):\n");
//	prev = '\n';//用于识别完整的行
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;//统计字符
//		if (c == '\n')
//			n_lines++;//统计行
//		if (!isspace(c) && !inword)
//		{
//			inword = true;//开始一个新单词
//			n_words++;
//		}
//		if (!isspace(c) && inword)
//			inword = false;//达到单词的末尾
//		prev = c;//保存字符的值
//	}
//
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld , words =%d,lines = %d,", 
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//	return 0;
//}

////用平方英尺数除以每罐油漆能刷的面积，小数进1
//#define COVERAGE 350//每罐油漆可刷的面积（平方英尺）
//int main()
//{
//	int sq_feet;
//	int cans;
//
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//		printf("You need %d  %s of paint.\n", cans,
//			cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//	return 0;
//}
////使用continue跳过部分循环
//int main()
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//
//	printf("Enter the first score (q to quit):");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score <   MIN || score > MAX)
//		{
//			printf("%0.01f  is an invalid value. Try again:");
//			continue;//跳转至while循环的测试条件
//		}
//		printf("Accepting  %0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score ( q to quit ):");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.1f.\n", n, total / n);
//		printf("Low = %0.1f, high = %0.1f\n", min, max);
//	}
//	else
//		printf("No vaild scores were enterd.\n");
//	return 0;
//}
////用break退出循环(用一个循环计算矩形的面积，如果用户输入非数字，退出程序)
//int main()
//{
//	float length, width;
//
//	printf("Enter the length of the rectangle:\n");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f:\n", length*width);
//	}
//	printf("Done.\n");
//	return 0;
//}
