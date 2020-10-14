#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////找出零度以下的天数占总天数的百分比
//int main()
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d days total:%.1f%% were below freezing.\n", all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//	return 0;
//}


////如果字符是空白，原样打印，否则，打印原字符在ASCII序列中下一个字符
//#define SPACE ' '//SPACE表示一个空格
//int main()
//{
//	char ch;
//
//	ch = getchar();//读取一个字符
//	while (ch != '\n')//当一行未结束时
//	{
//		if (ch == SPACE)
//			putchar(ch);//留下空格，该字符不变
//		else
//			putchar(ch + 1);
//			ch = getchar();
//	}
//	putchar(ch);//打印换行符
//		return 0;
//}

////替换输入的字母，非字母字符保持不变
//#include <ctype.h>
//int main()
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))//如果是一个字符
//			putchar(ch + 1);
//		else
//			putchar(ch);//原样显示
//	}
//	putchar(ch);
//	return 0;
//}
//int main()
//{
//	int p, q;
//	scanf("%d", &p);
//	while (p > 0)
//	{
//		printf("%d\n", p);
//		scanf("%d", &q);
//		while (q > 0)
//		{
//			printf("%d\n", p*q);
//			if (q > 100)
//				break;//跳出内层循环
//			scanf("%d", &q);
//		}
//		if (q > 100)
//			break;
//	}
//	return 0;
//}

////使用switch
//#include<ctype.h>
//int main()
//{
//	char ch;
//
//	printf("Give me a letter of the alphabet, and i will give");
//	printf(" an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if (islower(ch))//只接受小写字母
//			switch (ch)
//		{
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			case'b':
//				printf("babirusa, a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case'd':
//				printf("desman, aquatic, molelike citter\n");
//				break;
//			case'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//		}//switch结束
//		else
//			printf("I recognize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;//跳过输入行的剩余部分
//		printf("Please type another letter or a #.\n");
//	}
//	printf("Bye!\n");
//		
//	return 0;
//}

////使用多重标签
//int main()
//{
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//	a_ct = e_ct = i_ct = o_ct = u_ct=0;
//
//	printf("Enter some text;enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case 'a':
//		case'A':a_ct++;
//			break;
//		case'e':
//		case'E':e_ct++;
//			break;
//		case 'i':
//		case'I':i_ct++;
//			break;
//		case 'u':
//		case'U':u_ct++;
//			break;
//		default:
//			break;
//		}//switch结束
//	}
//	printf("number of vowels:    A     E     I     O      U\n");
//	printf("                  %4d  %4d  %4d  %4d   %4d\n"
//		, a_ct, e_ct, i_ct, o_ct, u_ct); 
//	return 0;
//}

//int main()
//{
//	int n;
//	while (scanf("%d", &n) ==1)
//	{
//		switch (n)
//		{
//		case 1:
//		case 2 : printf("Darn tootin!\n"); break;
//		case 3: printf("Quite right!\n");
//		case 4: printf("Good show!\n"); break;
//		default: printf("Have a nice day.\n");
//		}
//		
//	}
//	printf("done");
//	return 0;
//}

//编程练习一

//int main()
//{
//	int kg , hh , qt ;
//	kg = hh = qt=0;
//	char ch;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch ==' ')
//			kg++;
//		else if (ch == '\n')
//			hh++;
//		else
//			qt++;
//	}
//	printf(" Contains the number of spaces, line breaks, and other letters, ");
//	printf("respectively,%d , %d , %d.\n", kg, hh, qt);
//	return 0;
//}
////编程练习二
//int main()
//{
//	char ch;
//	int num = 0;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		printf("%c-%d", ch, ch);
//		num++;
//		if (num%8==0)
//			printf(" \n");
//		
//	}
//	
//	return 0;
//}

//编程练习三
//int main()
//{
//	int num;
//	int os = 0;
//	int js = 0;
//	int m, n;
//	m = n = 0;
//	
//	printf("Enter some integers(0 to quit):");
//	scanf("%d", &num);
//	while (num !=0)
//	{
//		if (num % 2 == 0)
//		{
//			os++;
//			m = m + num;
//		}
//		else
//		{
//			js++;
//			n = n + num;
//		}
//		scanf("%d", &num);
//	}
//	printf("其中偶数个数有%d,平均数为%d,基数个数为%d，平均数为%.2f", os, m / os, js, n / js);
//	return 0;
//}

////编程练习四
//int main()
//{
//	int num = 0;
//	char ch;
//
//	printf("Please input aome integers(# to quit)");
//	while ((ch = getchar()) == '#')
//	{
//		if (ch == '.')
//		{
//			ch = '!';
//			num++;
//		}
//		else if (ch == '!')
//		{
//			printf("!");
//			num++;
//		}
//		printf("%c",ch);
//	}
//	printf("A total of %d replacements", num);
//	return 0;
//}

////编程练习五
//int main()
//{
//	char ch;
//	int num = 0;
//
//	 printf("Please input some integers(# to quit)");
//	 while ((ch = getchar()) != '#')
//	 {
//		 switch (ch)
//		 {
//		 case'.':ch = '!';
//			 num++;
//			 break;
//		 case'!':printf("!");
//			 num++;
//		 
//		 default:
//			 break;
//		 }
//		 printf("%c", ch); 
//	 }
//	 printf("\nA total of %d replacements", num);
//	return 0;
//}
////编程练习七
//#define BASE 10.00;//基本工资（美元/小时）
//#define ADD 1.5//加班一小时等于1.5小时
//#define TAX300 0.15//前300美元税率
//#define TAX150 0.2//续150美元税率
//#define TAX3 0.25//余下的税率
//#define BREAK1 300
//#define BREAK2 450
//#define TIME  40
//int main()
//{
//	double hours, total, tax;
//
//	printf("Please enter the number of hours worked in a week:");
//	scanf("%lf", &hours);
//	if (hours > TIME)
//	{
//		hours = (hours - TIME)*ADD + hours;
//		total = hours *BASE;//计算基本工资
//	}//计算总加班时间
//	else
//		total = hours *BASE;
//	
//	if (total <= BREAK1)
//		tax = total *TAX300;
//
//	else if (total >= BREAK1 && total <= BREAK2)
//		tax = BREAK1*TAX300 + (total - BREAK1)*TAX150;
//		
//	else  
//		tax = BREAK1 * TAX300 + (BREAK2 - BREAK1)* TAX150 + (total - BREAK2)*TAX3;
//	
//	printf("\nYour weekly salary is $%.2lf\n taxes are $%.2lf\n and net income is $%.2lf.",total, tax, total - tax);
//		return 0;
//}

////编程练习八
//#define BASE1 8.75
//#define BASE2 9.33
//#define BASE3 10.00
//#define BASE4 11.20
//
//#define TIME  40
//#define ADD 1.5//加班一小时等于1.5小时
//#define TAX300 0.15//前300美元税率
//#define TAX150 0.2//续150美元税率
//#define TAX3 0.25//余下的税率
//#define BREAK1 300
//#define BREAK2 450
//int main(void)
//{
//	double hours,total,tax,base;
//	hours = total = tax = base = 0;
//	const LENGTH = 65;
//	int num;
//	int select = 0;
//	for (num = 0; num <= LENGTH; num++)
//		printf("*");//第一行*号
//	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
//	printf("1) $8.75/hr \t\t\t2) $9.33/hr\n");
//	printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
//	printf("5) quit\n");
//	for (num = 0; num <= LENGTH; num++)
//		printf("*");//第二行*号
//
//	printf("\n");
//	while ((scanf("%d", &select) == 1))
//	{
//		switch (select)
//		{
//		case 1:base = BASE1;
//			break;
//		case 2:base = BASE2;
//			break;
//		case 3:base = BASE3;
//			break;
//		case 4:base = BASE4;
//			break;
//		case 5:printf("quit");
//			return 0;
//		default:printf("Please enter another letter");
//			break;
//		}
//		break;
//	}
//
//		printf("Please enter the number of hours worked in a week:");
//		scanf("%lf", &hours);
//		if (hours > TIME)
//		{
//			hours = (hours - TIME)*ADD + hours;
//			total = hours *base;//计算基本工资
//		}
//		else
//			total = hours *base;
//		
//		if (total <= BREAK1)
//			tax = total *TAX300;
//	
//		else if (total >= BREAK1 && total <= BREAK2)
//			tax = BREAK1*TAX300 + (total - BREAK1)*TAX150;
//			
//		else  
//			tax = BREAK1 * TAX300 + (BREAK2 - BREAK1)* TAX150 + (total - BREAK2)*TAX3;
//		
//		printf("\nYour weekly salary is $%.2lf\n taxes are $%.2lf\n and net income is $%.2lf.",total, tax, total - tax);
//	return 0;
//}

////编程练习九
//#define TAX 0.15//规定金额内的税金
//#define TAX2 0.28//超出部分的税金
//#define RANK1 17850//第一个分界
//#define RANK2 23900//第二个分界
//#define RANK3 29750//第三个分界
//#define RANK4 14875//第四个分界
//int main(void)
//{
//	int type;
//	double taxes,base,salary;
//
//	printf("Please specify the type of tax payment:\n");
//	printf("1.Single\t2. head of household,\n3.married co-owner\t4. married divorced\n");
//	while ((scanf("%d", &type)) == 1)
//	{
//		switch (type)
//		{
//		case 1:base = RANK1;
//			break;
//		case 2:base = RANK2;
//			break;
//		case 3:base = RANK3;
//			break;
//		case 4:base = RANK4;
//			break;
//		default:printf("Input error");
//			break;
//		}
//		printf("Please enter your salary:");
//		scanf("%lf", &salary);
//		if (salary <= base)
//			taxes = salary * TAX;//第一分段所缴纳的税金
//		else
//			taxes = base *TAX + TAX2*(salary - base);
//		printf("\nYou need to pay $%lf in taxes.",taxes);
//	}
//	
//	return 0;
//}

//编程练习十一
#define ARTICHOKE 2.05//洋蓟的价格
#define BEET 1.15//甜菜的价格
#define CARROT 1.09//胡萝卜的价格
#define RANK1 5 //运费分界一
#define RANK2 20//运费分界二
#define COUNT 100//打折分界线
#define DISCOUNT 0.05//折扣
#define SHIPPING1 6.5//运费一
#define SHIPPING2 14//运费二
#define SHIPPING3 0.5//叠加运费
int main(void)
{
	int num;
	char ch,s;
	s = 0;
	int pounds, more, judgment;
	pounds = more = judgment= 0;
	double base,m,n,total;
		base= m = n=total=0;

	for (num = 0; num <= 35; num++)
		printf("*");
	printf("\nArtichoke      Beet      Carrot");
	printf("\n     a           b          c");
	printf("\nq to quit\n");
	for (num = 0; num <= 35; num++)
		printf("*");//价格表
	
	printf("\nPlease choose the variety you want to buy:\n");
	ch = getchar();
	switch (ch)
	{
	case 'a':printf("How many pounds of artichokes do you need?");
		scanf("%d", &pounds);
		base = ARTICHOKE;
			break;
	case'b':printf("How many pounds of beet do you need?");
		scanf("%d", &pounds);
		base = BEET;
			break;
	case'c':printf("How many pounds of carrort do you need?");
		scanf("%d", &pounds);
		base = CARROT;
			break;
	case'q':return 0;
	default:printf("Input error");
		break;
	}//选择品种
	printf("Do you need more?(Y/N)\n");
	if ( (getchar()) !='N'&&(getchar()) !='\n')
	{	
		printf("\nHow many more pounds do you need?\n");
		scanf("%d", &more);
		pounds += more;
	}

	m = base *pounds;//基础价格
	
	if (pounds <= RANK1)
		n = SHIPPING1;
	else if (pounds > RANK1&&pounds <= RANK2)
		n = SHIPPING2;
	else
		n = SHIPPING2 + (pounds - RANK2)*SHIPPING3;//包装加运费

	printf("\n\nItem price: $%.2lf\n",base);
	printf("Ordered weight (unit: pounds): %d\n", pounds);
	printf("Cost of ordered vegetables:%.2lf\n", m);
	printf("Total cost of the order:$%.2lf\n", m);
	printf("Whether to discount:  ");
	if (m >= COUNT)
	{
		m *= DISCOUNT;//打折后基础价格
		judgment++;
	}
	if (judgment == 1)
		printf("Yes");
	else
		printf("No");
	printf("\nShipping and packaging fees:$%.2lf",n);
	printf("\nTotal cost:$%.2lf", m + n);
	return 0;
}

