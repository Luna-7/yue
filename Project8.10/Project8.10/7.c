#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////�ҳ�������µ�����ռ�������İٷֱ�
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


////����ַ��ǿհף�ԭ����ӡ�����򣬴�ӡԭ�ַ���ASCII��������һ���ַ�
//#define SPACE ' '//SPACE��ʾһ���ո�
//int main()
//{
//	char ch;
//
//	ch = getchar();//��ȡһ���ַ�
//	while (ch != '\n')//��һ��δ����ʱ
//	{
//		if (ch == SPACE)
//			putchar(ch);//���¿ո񣬸��ַ�����
//		else
//			putchar(ch + 1);
//			ch = getchar();
//	}
//	putchar(ch);//��ӡ���з�
//		return 0;
//}

////�滻�������ĸ������ĸ�ַ����ֲ���
//#include <ctype.h>
//int main()
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))//�����һ���ַ�
//			putchar(ch + 1);
//		else
//			putchar(ch);//ԭ����ʾ
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
//				break;//�����ڲ�ѭ��
//			scanf("%d", &q);
//		}
//		if (q > 100)
//			break;
//	}
//	return 0;
//}

////ʹ��switch
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
//		if (islower(ch))//ֻ����Сд��ĸ
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
//		}//switch����
//		else
//			printf("I recognize only lowercase letters.\n");
//		while (getchar() != '\n')
//			continue;//���������е�ʣ�ಿ��
//		printf("Please type another letter or a #.\n");
//	}
//	printf("Bye!\n");
//		
//	return 0;
//}

////ʹ�ö��ر�ǩ
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
//		}//switch����
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

//�����ϰһ

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
////�����ϰ��
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

//�����ϰ��
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
//	printf("����ż��������%d,ƽ����Ϊ%d,��������Ϊ%d��ƽ����Ϊ%.2f", os, m / os, js, n / js);
//	return 0;
//}

////�����ϰ��
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

////�����ϰ��
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
////�����ϰ��
//#define BASE 10.00;//�������ʣ���Ԫ/Сʱ��
//#define ADD 1.5//�Ӱ�һСʱ����1.5Сʱ
//#define TAX300 0.15//ǰ300��Ԫ˰��
//#define TAX150 0.2//��150��Ԫ˰��
//#define TAX3 0.25//���µ�˰��
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
//		total = hours *BASE;//�����������
//	}//�����ܼӰ�ʱ��
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

////�����ϰ��
//#define BASE1 8.75
//#define BASE2 9.33
//#define BASE3 10.00
//#define BASE4 11.20
//
//#define TIME  40
//#define ADD 1.5//�Ӱ�һСʱ����1.5Сʱ
//#define TAX300 0.15//ǰ300��Ԫ˰��
//#define TAX150 0.2//��150��Ԫ˰��
//#define TAX3 0.25//���µ�˰��
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
//		printf("*");//��һ��*��
//	printf("\nEnter the number corresponding to the desired pay rate or action:\n");
//	printf("1) $8.75/hr \t\t\t2) $9.33/hr\n");
//	printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
//	printf("5) quit\n");
//	for (num = 0; num <= LENGTH; num++)
//		printf("*");//�ڶ���*��
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
//			total = hours *base;//�����������
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

////�����ϰ��
//#define TAX 0.15//�涨����ڵ�˰��
//#define TAX2 0.28//�������ֵ�˰��
//#define RANK1 17850//��һ���ֽ�
//#define RANK2 23900//�ڶ����ֽ�
//#define RANK3 29750//�������ֽ�
//#define RANK4 14875//���ĸ��ֽ�
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
//			taxes = salary * TAX;//��һ�ֶ������ɵ�˰��
//		else
//			taxes = base *TAX + TAX2*(salary - base);
//		printf("\nYou need to pay $%lf in taxes.",taxes);
//	}
//	
//	return 0;
//}

//�����ϰʮһ
#define ARTICHOKE 2.05//�󼻵ļ۸�
#define BEET 1.15//��˵ļ۸�
#define CARROT 1.09//���ܲ��ļ۸�
#define RANK1 5 //�˷ѷֽ�һ
#define RANK2 20//�˷ѷֽ��
#define COUNT 100//���۷ֽ���
#define DISCOUNT 0.05//�ۿ�
#define SHIPPING1 6.5//�˷�һ
#define SHIPPING2 14//�˷Ѷ�
#define SHIPPING3 0.5//�����˷�
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
		printf("*");//�۸��
	
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
	}//ѡ��Ʒ��
	printf("Do you need more?(Y/N)\n");
	if ( (getchar()) !='N'&&(getchar()) !='\n')
	{	
		printf("\nHow many more pounds do you need?\n");
		scanf("%d", &more);
		pounds += more;
	}

	m = base *pounds;//�����۸�
	
	if (pounds <= RANK1)
		n = SHIPPING1;
	else if (pounds > RANK1&&pounds <= RANK2)
		n = SHIPPING2;
	else
		n = SHIPPING2 + (pounds - RANK2)*SHIPPING3;//��װ���˷�

	printf("\n\nItem price: $%.2lf\n",base);
	printf("Ordered weight (unit: pounds): %d\n", pounds);
	printf("Cost of ordered vegetables:%.2lf\n", m);
	printf("Total cost of the order:$%.2lf\n", m);
	printf("Whether to discount:  ");
	if (m >= COUNT)
	{
		m *= DISCOUNT;//���ۺ�����۸�
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

