//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//5.1把鞋码转换为英寸
//#define ADJUST  7.31//字符常量
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

//计算多个不同鞋码对应的脚长
//#define ADJUST 7.31
//int main()
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("Shoe size (men's)    foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5);//while循环开始 
//	{//块开始
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f   %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}//块结束
//	printf("If the shoe fits, wear it.\n");
//	return 0;
//}

//计算1~20的平方
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

//指数增长
//#define SQUARES 64 //棋盘中的方格数
//int main()
//{
//	const double CROP = 2E16; //世界小麦年产谷粒数
//	double current, total;
//	 
//	int  count = 1;
//
//	printf("square      granis        total      ");
//	printf("fraction of \n");
//	printf("              added           grains    ");
//	printf("world total\n");
//	total = current = 1.0;//从一颗谷粒开始
//	printf("%4d  %13.2e  %12.2e\n", count, current, total, total / CROP);
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;//下一个方格谷粒翻倍
//		total = total + current;//更新总数
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
//
//	}
//	printf("That's all.\n");
//
//	return 0;
//}

//优先级测试
//int main()
//{
//	int top, score;
//
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score =%d\n", top, score);
//
//	return 0;
//}

//使用sizeof运算符
//int main()
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof (int);
//	printf("n = %d, n has %u bytes;all ints have %u bytes.\n", n, sizeof n, intsize);
//	return 0;
//}

//把秒数转换为分和秒
//#define SEC_PER_MIN 60//一分钟60秒
//int main()
//{
//	int sec, min, left;
//
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<=0 to quit):\n");
//	scanf("%d", &sec);//读取秒数
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN; //截断分钟数
//		left = sec % SEC_PER_MIN;//剩下的秒数
//		printf("%d seconds is%d minutes,%d seconds.\n", sec, min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//	return 0;
//}

//递增：前缀和后缀
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

//前缀和后缀
//int main()
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;//后缀递增
//	pre_b = ++b;//前缀递增
//
//	printf("a   a_post  b   pre_b\n");
//	printf("%1d %5d %5d  %5d\n", a, a_post, b, pre_b);
//	
//	return 0;
//}

//递减运算符
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

//复合语块
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

//自动类型转换
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

//定义一个带一个参数的函数
// pound(int n);//ANSI函数原型说明
//int main()
//{
//	int times = 5;
//	char ch = '!';//ASCII码是33
//	float f = 6.0;
//
//	pound(times);//int类型参数
//	pound(ch);//同pound((int)ch)
//	pound(f);//同pound((int)f)
//
//	return 0;
//}
//
//pound(int n)//ANSI风格函数头
//{//表示函数接受一个int类型的参数
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}

//5.16 running
//const int S_PER_M = 60;//1分钟的秒数
//const int S_PER_H = 3600;//1小时的秒数
//const double M_PER_K = 0.62137;//1公里的英里数
//int main()
//{
//	double distk, distm;//跑过的距离（分别以公里和英里为单位）
//	double rate;//平均速度（以英里/小时为单位）
//	int min, sec;//跑步用时（以分钟和秒为单位）
//	int time;//跑步用时（以秒为单位）
//	double mtime;//跑1英里需要的时间，以秒为单位
//	int mmin, msec;//跑1英里需要的时间，以分钟和秒为单位
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
//	time = S_PER_M * min + sec;//把时间转换成秒
//	distm = M_PER_K * distk;//把公里转换成英里
//	rate = distm / time * S_PER_H;//英里/秒*秒/小时=英里/小时
//	mtime = (double)time / distm;//时间/距离 = 跑1英里所用的时间
//	mmin = (int)mtime / S_PER_M;//求出分钟数
//	msec = (int)mtime % S_PER_M;//求出剩余的秒数
//
//	printf("You can %1.2f km(%1.2f miles) in %d min, %d sec.\n"
//		,distk,distm,min,sec);
//	printf("That pace correcsponds  yo runing a mile in %d min,",mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);
//	
//	return 0;
//}

//练习题9
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

//编程练习1
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

//编程练习2
//int main()
//{
//	int a = 0;
//	int input = 0;
//	printf("请输入一个整数");
//	scanf("%d", &input);
//	while (a ++<11)
//	{
//		printf("%5d",input++);
//	
//	}
//	printf("\ndone!");
//	return 0;
//}

//编程练习3
//#define W_PER_D 7//一周七天
//int main()
//{
//	int day1 = 0;
//	int day2 = 0;
//	int week = 0;
//
//	printf("请输入天数");
//	scanf("%d", &day1);
//	while (day1> 0)
//	{
//		week = day1 / W_PER_D;
//		day2 = week % day1;
//		printf("%d days are %d weels, %d days", day1, week, day2);
//		printf("\n请输入天数");
//		scanf("%d",&day1);
//	}
//	printf("\ndone!");
//	return 0;
//}

//编程练习5、6
//int main()
//{
//	int count = 0;
//	int sum = 0;
//	int days = 0;
//	printf("输入你想要计算的天数\n");
//	scanf("%d",&days);
//
//	while (count++ < days)
//		sum = count *count + sum;
//	printf("%d天一共赚了%d元", days, sum);
//	return 0;
//}
//编程练习7

////编程练习9
//int Temperatures()
//int main()
//{
//double input;//华氏温度
//	
//	printf("请输入华氏摄氏度\n");
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
//	double Celsius;//摄氏温度
//	double open;//开式温度
//
//	Celsius = 5.0 / 9.0 *(input - 32.0);
//	open = Celsius + c;
//	printf("%.2f. fahrenheit,equal %.2f celsius,and %.2f kelvin\n", input, celsius, open);
//	return 0;
//}