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
