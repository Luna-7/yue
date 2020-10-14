#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////根据用户键入的整数求和
//int main()
//{
//	long num;
//	long sum = 0L;//把sum初始化为0
//	int status;
//
//	printf("Please enter an integer to be summed");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit):");
//		status = scanf("%d" , &num);
//	}
//	printf("Those integers sum to %d.\n", sum);
//
//	return 0;
//}
////何时退出循环
//int main()
//{
//	int n = 5;
//
//	while (n < 7)
//	{
//		printf("n = %d\n", n);
//		n++;
//		printf("Now n = %d\n",n);
//	}
//	printf("The loop has finished.\n");
//	return 0;
//}

////浮点数比较
//#include <math.h>
//int main()
//{
//	const double ANSWER = 3.14159;
//	double response;
//
//	printf("What is the value of pi?\n");
//	scanf("%lf",&response);
//	while (fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//	return 0;
//}
////C中的真和假的值
//int main()
//{
//	int true_val, false_val;
//
//	true_val = (10 > 2);//关系为真的值
//	false_val = (10 == 2); //关系为假的值
//	printf("true = %d; false = %d\n", true_val, false_val);
//	return 0;
//}
////哪些值为真
//int main()
//{
//	int n = 3;
//
//	while (n)
//		printf("%2d is true \n", n--);
//	printf("%2d is fals\n", n);
//
//	n = -3;
//	while (n)
//		printf("%2d is true\n", n++);
//	printf("%2d is false\n");
//
//	return 0;
//}
////使用_Bool类型的变量variable(不确定循环）
//int main()
//{
//	long  num;
//	long sum = 0L;
//	_Bool input_is_good;
//
//	printf("Please enter an integer to be summed");
//	printf("(q to quit):");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit):");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//	return 0;
//}
////计数循环
//int main()
//{
//	const int NUMBER = 22;
//	int count = 1;
//
//	while (count <= NUMBER)
//	{
//		printf("Be my  Valentine!\n");
//		count++;
//	}
//	return 0;
//}
////使用for循环的计数循环
//int main()
//{
//	const int NUMBER = 22;
//	int count;
//
//	for (count = 1; count <= NUMBER; count++)
//		printf("Be my Valentine!\n");
//		return 0;
//}
////使用for循环创建一个立方表
//int main()
//{
//	int num;
//
//	printf("    n  n  cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %5d\n", num, num*num*num);
//	return 0; 
//}
//int main()
//{
//	int num = 0;
//
//	for (printf("Keep entering  numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one i want");
//	return 0;
//}
////一类邮资
//int main()
//{
//	const int FIRST_OZ = 46;//2013邮资
//	const int NEXT_OZ = 20;
//	int ounces, cost;
//
//	printf(" ounces  cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
//		printf("%5d   $%4.2f\n", ounces, cost / 100.0);
//	return 0;
//}
////求序列的和
//int main()
//{
//	int t_ct;//项计数
//	double time, power_of_2;
//	int limit;
//
//	printf("Enter the number of terms yu want:");
//	scanf("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
//		t_ct++, power_of_2 *= 20)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//	return 0;
//}
//出口条件循环
//int main()
//{
//	const int secret_code = 13;
//	int code_entered;
//
//	do
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number:");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulations! You are cured!\n");
//
//	return 0;
//}
////嵌套循环
//#define ROWS 6
//#define CHARS 10
//int main()
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	
//	}
//	return 0;
//}
////依赖外部循环的嵌套循环
//int main()
//{
//	const int ROWS = 6;
//	const int CHARS = 6;
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row ++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}
////使用循环处理数组
//#define SIZE 10
//#define PAR 72
//int main()
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf score:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);//读取10个分数
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//	{
//		printf("%5d", score[index]);//验证输入
//		printf("\n");
//		sum = sum + score[index];//求总分数
//		average = (float)sum / SIZE;//求平均分
//	}
//		printf("Sum of score = %d, average = %.2f\n", sum, average);
//		printf("That's a handicap of %.0f.\n", average - PAR);
//	
//		return 0;
//}
////计算数的整数幂
//double power(double n, int p);//ANSI函数原型
//int main()
//{
//	double x, xpow;
//	int exp;
//
//	printf("Enter a number and the positive integer power");
//	printf(" to which\n the number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf  %d", &x, &exp) == 2)
//	{
//		xpow = power( x, exp);//函数调用
//		printf("%.3g to the power %d is %.5g \n", x, exp, xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//
//	return 0;
//}
//
//double power(double n, int p)//函数定义
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return  pow;//返回pow值
//}

//int main()
//{
//	char ch;
//
//	scanf("%c", &ch);
//	while (ch != 'g');
//	{
//		printf("%c", ch);
//		scanf("%c", &ch);
//	}
//	return 0;
//}
//int main()
//{
//	char ch = '$';
//	int a,b;
//	for (a = 0; a <4; ++a)
//	{
//		for (b = 0; b < 8; ++b)
//		printf("$", ch);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n,m;
//	printf("\n***\n");
//	for (n = 2,m = 6 ; n < m; n  *= 2, m += 2)
//		printf("%d %d\n", m,n);
//	return 0;
//}
////编程练习一
//int main()
//{
//	char alphabet[26];
//	int num = 0;
//	char ch = 'a';
//	for (num = 0; num < 26; num++, ch++)
//		alphabet[num] = ch;//for循环的循环更新部分，更新了下标和字母表
//	for (num = 0; num < 26; num++)
//		printf("%c", alphabet[num]);
//	return 0;
//}

////编程练习二
//int main()
//{
//	int a, b;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 0; b < a; b++)
//			printf("$");
//		printf("\n");
//	}
//	return 0; 
//}

////编程练习三
//int  main()
//{
//	char ch = 'F';
//	int num = 1;
//	int ber = 0;
//
//	for (num = 1; num <= 6; num++)
//	{
//		for (ch = 'F', ber = 0; ber < num; ch--, ber++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

//编程练习四
//int main()
//{
//	char ch = 'A';
//	int m, n;
//	for (m = 1; m <= 6; m++)
//	{
//		for (n = 0 ; n < m; n++,ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}

////编程练习五
//int main()
//{
//	char  c  ;
//	int m, n , num;
//	
//	printf("Please input an alphabet: ");
//	char ch = 'A';
//	scanf("%c",&c);
//	num = c - 'A' + 1;//行数
//	for (m = 1; m <= num; m++)
//	{
//		for (n = 0; n < num - m; n++)
//			printf(" ");
//	
//	for (ch = 'A'; n < num; n++)
//		printf("%c", ch++);
//	
//	for (n = 1, ch -= 2; n < m; n++,ch--)
//		printf("%c", ch);
//	printf("\n");
//	}
//	return 0;
//}
////编程练习六
//int main(void)
//{
//	int  upper , lower ,num1,num2;
//	printf("Please enter the upper and lower limits of the form.\n");
//	printf("upper:");
//	scanf("%d", &upper);
//
//	printf(" lower:");
//	scanf("%d", &lower);
//	//printf("upper: %d , lower: %d\n", &upper, &lower);
//	
//	for (lower ; lower  <= upper ; lower++)
//	{
//		printf("%d\t", lower);
//		num1= lower *lower;
//		printf("%d\t", num1);
//		num2 = lower *lower *lower;
//		printf("%d\t",num2);
//		printf("\n");
//		
//	}
//	return 0;
//}
////编程练习七
//#include<string.h>
//int main()
//{
//	int n;
//	char word [40];
//	
//	printf("Please enter a word:");
//	scanf("%s", word);
//	n = strlen(word);
//	for (n ; n >= 0; n--)
//		printf("%c", word[n]);
//		printf("\n");
//
//	return 0;
//}
////编程练习八
//int main()
//{
//	float m, n,num1;
//	printf("Enter two float:");
//	while ( scanf("%f %f", &m, &n) == 2)
//	{
//		num1 = (m - n) / (m * n);
//			
//		printf("The result of number is%lf\n",num1);
//	}
//	return 0;
//}

////编程练习十
//int main()
//{
//	int m, n,num1;
//	printf("Enter lower and upper integer limits:");
//	scanf("%d%d",&m,&n);
//
//	while (m > n)
//	{
//		
//		for (m, n,num1; n <= m; n++)			
//			num1 = n + n*n;
//		
//		printf("The sums of the squares from%d to%d is %d.\n",n*n,m*m,num1);
//		printf("Enter next set of limits:");
//		scanf("%d%d", &m,&n);
//	}
//	printf("Done");
//	return 0;
//}
////编程十三
//int main()
//{
//	int data[8] ;
//	data[0] = 2;
//	for (int i = 1; i < 8; i++)
//		data[i] = data[i - 1] * 2;
//	int i = 0;
//	do{
//		printf("%d \n",data[i++]);
//		
//	} while (i <= 7);
//		return 0;
//}
////编程十四
//int main()
//{
//	double data1[8];
//	double data2[8];
//	int m, n;
//	printf("Please enter eight numbers:");
//	for (n = 0; n < 8; n++)
//		scanf("%lf", &data1[n]);
//
//	data2[0] = data1[0];
//	for (n = 1; n < 8; n++)
//	{
//		data2[n] = data1[n - 1] + data1[n];
//	}
//	for (n = 0; n < 8; n++)
//	{
//		printf("%12lf\n", data1[n]);
//	}
//	for (n = 0; n < 8; n++)
//	{
//		printf("%12lf\n", data2[n]);
//	}
//	return 0;
//}
////编程十七
//int main()
//{
//	double m;
//	int n;
//	for (m = 100, n = 1; m > 0; n++)
//		m = (m + 0.08*m) - 10;
//	printf("%d", n);
//	return 0;
//}
////编程十八
//int main()
//{
//	int x, n;
//	for (x = 5, n = 1; x < 150; n++)
//	{
//		x = (x - n) * 2;
//		printf("The first week doctor have %d friends.\n",x);
//	}
//	return 0;
//}