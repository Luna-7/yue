#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<inttypes.h>//֧�ֿ���ֲ����
//int main()
//{
//	int32_t me32;//me32��һ��32λ�з������ͱ���
//
//	me32 = 45933945;
//	printf("First, assume int32_t is int:");
//	printf("me32 =%d\n", me32);
//	printf("Next,let's not male any assumptions.\n");
//	printf("Inside,use a \"macro\" from inttypes.h:");
//	printf("me32 = %" PRId32 "\n", me32);
//	return 0;
//}

//�����ַ�ʽ��ʾfloat���͵�ֵ
//int main()
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be writtrn %e\n", aboat,aboat);
//	//Ҫ�������֧��C99
//	printf("And it's %a in hexadecimal, powers of 2 notation\n",aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//	return 0;
//}
////���
//int main()
//{
//	float toobig = 3.4E38 * 100.0f;
//	printf("%e\n", toobig);
//	return 0;
//}

//��ӡ���ʹ�С
//int main()
//{
//	//C99Ϊ���ʹ�С�ṩ%zdת��˵��
//	printf("Type int has a size of %u bytes.\n",sizeof(int));
//	printf("Type char has a size of %u bytes.\n", sizeof(char));
//	printf("Type long has a size of %u bytes.\n", sizeof(long));
//	printf("Type long long has a size of %u bytes.\n", sizeof(long long));
//	printf("Type double has a size of %u bytes.\n", sizeof(double));
//	printf("Type long double has a size of %u bytes.\n", sizeof(long double));
//	return 0;
//}

//ʹ��ת������
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

//�����±����ϰ
//��һ��
//int main()
//{
//	float a = .1e-10;
//	float b = a / 2.4e12;
//	printf("So b=%e\n", b);
//	return 0;
//}
//�ڶ���
//int main()
//{
//	char a = 66;
//	printf("%c\n", a);
//	return 0;
//}
//������
//int main()
//{
//	printf("\aStartled by the suddenn sound,Sally shouted,\n");
//	printf("By thr Great Pumpkin,what was that!");
//		return 0;
//}
//������
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
//������
//int main()
//{
//	int age;
//	float s;
//	printf("���������ꣿ\n");
//	scanf("%d", &age);
//	s = age * 1.156e7;
//	printf("Ŷ�����Ѿ�����%f����Ӵ", s);
//	return 0;
//}
//������
//int main()
//{
//	float water;
//	float shu;
//	printf("����ˮ���ӵĿ��������뽫����������д�£�_____g\b\b\b\b\b\b");
//	scanf("%f", &water);
//	shu = water * 950;
//	printf("����%f", shu);
//	return 0;
//}

////������˾����嵥
////�� 360kwh��	$0.13230/kwh
////��108kwh��	$0.15040/kwh
////��252kwh��	$0.30025/kwh
////���� 720kwh��	$0.34025/kwh
//#define RATE1		0.13230//�״�ʹ��360kwh�ķ���
//#define RATE2		0.15040
//#define RATE3		0.30025
//#define RATE4		0.34025
//#define BREAK1	360.0//���ʵĵ�һ���ֽ��
//#define BREAK2	468.0
//#define BREAK3	720.0
//#define BASE1	(RATE1 * BREAK1)//ʹ��360kwh�ķ���
//#define BASE2	(BASE1 +(RATE2 * (BREAK2 - BREAK1)))
//#define BASE3	(BASE2 +(RATE3 * (BREAK3 - BREAK2)))
//int main()
//{
//	double kwh;//ʹ�õ�ǧ��ʱ
//	double bill;//���
//
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh);
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2)//360~468kwh
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3)//468~720kwh
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else//����720kwh
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//
//	return 0;
//}

////ʹ��Ƕ��if�����ʾһ������Լ��
//#include<stdbool.h>
//int main()
//{
//	unsigned long num;//�����Ե���
//	unsigned long div;//���ܵ�Լ��
//	bool isPrime;//�������
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
//				isPrime = false;//������������
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

////ʹ���߼��������
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
////ͳ���ַ�����������������
//#include<ctype.h>//Ϊisspace���������ṩԭ��
//#include<stdbool.h>//Ϊbool��true��false�ṩ����
//#define STOP '|'
//int main()
//{
//	char c;//�����ַ�
//	char  prev;//�����ǰһ���ַ�
//	long n_chars = 0L;//�ַ���
//	int  n_lines = 0;//����
//	int  n_words = 0;//������
//	int p_lines = 0;//������������
//	bool inword = false;//���c�ڵ����У�inword����true
//
//	printf("Enter text to be analyzed(| to terminate):\n");
//	prev = '\n';//����ʶ����������
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;//ͳ���ַ�
//		if (c == '\n')
//			n_lines++;//ͳ����
//		if (!isspace(c) && !inword)
//		{
//			inword = true;//��ʼһ���µ���
//			n_words++;
//		}
//		if (!isspace(c) && inword)
//			inword = false;//�ﵽ���ʵ�ĩβ
//		prev = c;//�����ַ���ֵ
//	}
//
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld , words =%d,lines = %d,", 
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//	return 0;
//}

////��ƽ��Ӣ��������ÿ��������ˢ�������С����1
//#define COVERAGE 350//ÿ�������ˢ�������ƽ��Ӣ�ߣ�
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
////ʹ��continue��������ѭ��
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
//			continue;//��ת��whileѭ���Ĳ�������
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
////��break�˳�ѭ��(��һ��ѭ��������ε����������û���������֣��˳�����)
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
