//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//5.1��Ь��ת��ΪӢ��
//#define ADJUST  7.31//�ַ�����
//int main()
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's)    foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//
// 	return 0;
//}

//��������ͬЬ���Ӧ�Ľų�
//#define ADJUST 7.31
//int main()
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("Shoe size (men's)    foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5);//whileѭ����ʼ 
//	{//�鿪ʼ
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f   %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}//�����
//	printf("If the shoe fits, wear it.\n");
//	return 0;
//}

//����1~20��ƽ��
//int main()
//{
//	int num = 1;
//
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num);
//		num = num + 1;
//	}
//	return 0;
//}

//ָ������
//#define SQUARES 64 //�����еķ�����
//int main()
//{
//	const double CROP = 2E16; //����С�����������
//	double current, total;
//	 
//	int  count = 1;
//
//	printf("square      granis        total      ");
//	printf("fraction of \n");
//	printf("              added           grains    ");
//	printf("world total\n");
//	total = current = 1.0;//��һ�Ź�����ʼ
//	printf("%4d  %13.2e  %12.2e\n", count, current, total, total / CROP);
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;//��һ�������������
//		total = total + current;//��������
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//
//	}
//	printf("That's all.\n");
//
//	return 0;
//}

//���ȼ�����
//int main()
//{
//	int top, score;
//
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score =%d\n", top, score);
//
//	return 0;
//}

//ʹ��sizeof�����
//int main()
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof (int);
//	printf("n = %d, n has %u bytes;all ints have %u bytes.\n", n, sizeof n, intsize);
//	return 0;
//}

//������ת��Ϊ�ֺ���
//#define SEC_PER_MIN 60//һ����60��
//int main()
//{
//	int sec, min, left;
//
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<=0 to quit):\n");
//	scanf("%d", &sec);//��ȡ����
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN; //�ضϷ�����
//		left = sec % SEC_PER_MIN;//ʣ�µ�����
//		printf("%d seconds is%d minutes,%d seconds.\n", sec, min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//	return 0;
//}

//������ǰ׺�ͺ�׺
//int main()
//{
//	int ultra = 0, super = 0;
//	
//	while (super < 5)
//	{
//		super++;
//		++ultra;
//		printf("super = %d,ultra = %d \n", super, ultra);
//	}
//	return 0;
//}

//ǰ׺�ͺ�׺
//int main()
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;//��׺����
//	pre_b = ++b;//ǰ׺����
//
//	printf("a   a_post  b   pre_b\n");
//	printf("%1d %5d %5d  %5d\n", a, a_post, b, pre_b);
//	
//	return 0;
//}

//�ݼ������
//#define MAX 100
//int main()
//{
//	int count = MAX + 1;
//
//	while (--count > 0)
//	{
//		printf("%d bottles of sprinf water on the wall,"
//			"%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//
//	}
//	return 0;
//}

//�������
//int main()
//{
//	int index = 0;
//	int sam = 0;
//	while (index++ < 10)
//	{
//		sam = 10 * index + 2;
//		printf("sam = %d\n", sam);
//	}
//	return 0;
//}

//�Զ�����ת��
//int main()
//{
//	char ch;
//	int i;
//	float f1;
//
//	f1 = i = ch = 'C';
//	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
//	ch = ch + 1;
//	i = f1 + 2 * ch;
//	f1 = 2.0 *ch + i;
//	printf("ch = %c,i = %d,f1 = %2.2f\n", ch, i, f1);
//	ch =  2017;
//	printf("Now ch = %c\n", ch);
//	ch = 80.89;
//	printf("Now ch = %c\n", ch);
//
//	return 0;
//}

//����һ����һ�������ĺ���
// pound(int n);//ANSI����ԭ��˵��
//int main()
//{
//	int times = 5;
//	char ch = '!';//ASCII����33
//	float f = 6.0;
//
//	pound(times);//int���Ͳ���
//	pound(ch);//ͬpound((int)ch)
//	pound(f);//ͬpound((int)f)
//
//	return 0;
//}
//
//pound(int n)//ANSI�����ͷ
//{//��ʾ��������һ��int���͵Ĳ���
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}

//5.16 running
//const int S_PER_M = 60;//1���ӵ�����
//const int S_PER_H = 3600;//1Сʱ������
//const double M_PER_K = 0.62137;//1�����Ӣ����
//int main()
//{
//	double distk, distm;//�ܹ��ľ��루�ֱ��Թ����Ӣ��Ϊ��λ��
//	double rate;//ƽ���ٶȣ���Ӣ��/СʱΪ��λ��
//	int min, sec;//�ܲ���ʱ���Է��Ӻ���Ϊ��λ��
//	int time;//�ܲ���ʱ������Ϊ��λ��
//	double mtime;//��1Ӣ����Ҫ��ʱ�䣬����Ϊ��λ
//	int mmin, msec;//��1Ӣ����Ҫ��ʱ�䣬�Է��Ӻ���Ϊ��λ
//
//	printf("This program converts your time for a metric race\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%1f", &distk);
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds,\n");
//	scanf("%d", &sec);
//
//	time = S_PER_M * min + sec;//��ʱ��ת������
//	distm = M_PER_K * distk;//�ѹ���ת����Ӣ��
//	rate = distm / time * S_PER_H;//Ӣ��/��*��/Сʱ=Ӣ��/Сʱ
//	mtime = (double)time / distm;//ʱ��/���� = ��1Ӣ�����õ�ʱ��
//	mmin = (int)mtime / S_PER_M;//���������
//	msec = (int)mtime % S_PER_M;//���ʣ�������
//
//	printf("You can %1.2f km(%1.2f miles) in %d min, %d sec.\n"
//		,distk,distm,min,sec);
//	printf("That pace correcsponds  yo runing a mile in %d min,",mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);
//	
//	return 0;
//}

//��ϰ��9
//#define G 103
//int main()
//{
//	char n = 'a' - 1;
//
//	while (n++ < G)
//		printf("%5c", n);
//	printf("\n");
//		return 0;
//}

//�����ϰ1
//#define M_PER_H 60
//int main()
//{
//	int input, hour, y;
//	input = 0;
//	scanf("%d", input);
//	while (input > 0)
//	{	hour = input / M_PER_H;
//	y = input % M_PER_H;
//	printf("%dh,%dmin\n", hour, y);
//	scanf("%d", &input);
//}
//	return 0;
//}

//�����ϰ2
//int main()
//{
//	int a = 0;
//	int input = 0;
//	printf("������һ������");
//	scanf("%d", &input);
//	while (a ++<11)
//	{
//		printf("%5d",input++);
//	
//	}
//	printf("\ndone!");
//	return 0;
//}

//�����ϰ3
//#define W_PER_D 7//һ������
//int main()
//{
//	int day1 = 0;
//	int day2 = 0;
//	int week = 0;
//
//	printf("����������");
//	scanf("%d", &day1);
//	while (day1> 0)
//	{
//		week = day1 / W_PER_D;
//		day2 = week % day1;
//		printf("%d days are %d weels, %d days", day1, week, day2);
//		printf("\n����������");
//		scanf("%d",&day1);
//	}
//	printf("\ndone!");
//	return 0;
//}

//�����ϰ5��6
//int main()
//{
//	int count = 0;
//	int sum = 0;
//	int days = 0;
//	printf("��������Ҫ���������\n");
//	scanf("%d",&days);
//
//	while (count++ < days)
//		sum = count *count + sum;
//	printf("%d��һ��׬��%dԪ", days, sum);
//	return 0;
//}
//�����ϰ7

////�����ϰ9
//int Temperatures()
//int main()
//{
//double input;//�����¶�
//	
//	printf("�����뻪�����϶�\n");
//	while (scanf("%1f", &input)==1)
//	{
//		Temperatures(input);
//		printf("Enter nect fahrenheit");
//	}
//	printf("done!\n");
//	return 0;
//}
//
//int Temperatures()
//{
//	const c = 273.16;
//	double Celsius;//�����¶�
//	double open;//��ʽ�¶�
//
//	Celsius = 5.0 / 9.0 *(input - 32.0);
//	open = Celsius + c;
//	printf("%.2f. fahrenheit,equal %.2f celsius,and %.2f kelvin\n", input, celsius, open);
//	return 0;
//}