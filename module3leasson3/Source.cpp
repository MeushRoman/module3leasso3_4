#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <locale.h>

void main()
{
	int num = 1;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

start3:

	printf("n = ");
	scanf("%d", &num);

	switch (num)
	{
	case 1: {
		printf("1.	��������� ���������� �� ������. ������������ ������ ���������� ����� ��� ������ � � ���� �� ������ ������������, ��, ��� ������������� �� ���� ����.\n");

		int n = 1;
	start:
		printf("���� ������ = \n");
		scanf("%d", &n);

		switch (n)
		{
		case 1: printf("1\n2\n3\n");
			break;
		case 2: printf("2\n3\n6\n");
			break;
		case 3: printf("6\n7\n8\n");
			break;
		case 4:
		case 5: printf("last day xD\n");
			break;
		case 6:
		case 7: printf("yahoo!\n");
			break;

		default:
		{
			printf("7 days\n");
			goto start;
		}
		break;
		}
	}
			break;
	case 2: {
		printf("2.	���� ����� ����� �� 1 �� 365. ����������, ����� ���� ������ �������� �� ��� �����, ���� 1 ������ � �����������.\n");

		int day;

		printf("day = ");
		scanf("%d", &day);

		switch (day % 7)
		{
		case 0: printf("vs\n");
			break;
		case 1: printf("pn\n");
			break;
		case 2: printf("vt\n");
			break;
		case 3: printf("sr\n");
			break;
		case 4: printf("cht\n");
			break;
		case 5: printf("pt\n");
			break;
		case 6: printf("sb\n");
			break;

		default:
			break;
		}
	}
			break;
	case 3: {
		printf("3.	���� ����������� �����. ����������: \na.�������� �� ����� ��� ���� ����������� ������;\nb.�������� �� ������������ ��� ���� ����������� ������\n\n");

		int a, a1, a2, a3, z, z1;

	start2:

		printf("3-ex zna4noe 4islo = ");
		scanf("%d", &a);

		if (a > 99 && a < 1000)
		{
			a1 = a % 10;
			a2 = a / 100 % 10;
			a3 = a / 100;

			z = a1 + a2 + a3;

			((z >= 10) && (z <= 99)) ? printf("�����������!\n") : printf("false\n");

			z1 = a1*a2*a3;

			((z1 >= 100) && (z1 <= 999)) ? printf("true\n") : printf("false\n");

		}
		else
		{
			printf("3-ex zna4noe 4islo!!!\n");
			goto start2;
		}
	}
			break;
	case 4: {
		/*	4.	������� ��������� �������� ��������� ��� ����������� � ������������ ������������ ������� ������ �� �������,
				���������� �� ����������� ����� ������ �� �������������, ������� ����� : ��� ����� � 1, ������ 2 ��� � 13,
				�� 2 �� 5 ��� � 16. ��������� ��������� ������� �������� ��� �������� ������� ����� �������(�� 3 �� 5) �
				������� ��������� � ������ � ������������ ��� ��������� ����� 45.*/

		int s, sb, r;


		printf("srednii bal deploma (3-5) = ");
		scanf("%d", &sb);

		printf("vaw staj = ");
		scanf("%d", &s);

		if (s == 0)
			r = sb * 1;
		else if (s < 2)
			r = sb * 2;
		else if (s >= 2 && s <= 5)
			r = sb * 15;
		else if (s > 5)
			r = sb * 20;

		(r >= 45) ? printf("prohodnoi bal nabran\n") : printf("ne prowel\n");


	}
			break;
	case 5: {
		printf("5.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 20 ��������� � ���� ����� *�����* � ���������� �����. ��������, 1 �����, 2 �����, 5 ������\n");

	}
			break;
	case 6: {

		int date, dayM = 31, pl, nl;

		printf("��������� ���������� ���� 27 �������\n");

		printf("day 1-31 = ");
		scanf("%d", &date);

		nl = abs(dayM - 27 - 14);
		pl = abs(dayM - 27 - 28);




		if (date < nl) printf("��������� ��������� %d\n ��������", nl);
		else if (date > nl && date < pl) printf("��������� ���������� %d ��������\n ", pl);
		else if (date == nl) printf("��������� ��������� �������. %d ��������\n", nl);
		else if (date == pl) printf("��������� ���������� �������. %d ��������\n", pl);
		else if (date > pl) {
			printf("���������� ���� � ������� ������ = ");
			scanf("%d", &dayM);
			nl = abs(dayM - 27 - 14);
			printf("��������� ��������� %d �������\n", nl);
		}
	}
			break;
	case 7:	{
		//1.	�������� ���������, ������� �� ���� ������ � ������������ ����������� ��������� �� ��������� � ��������� ������� �� �����: 
		//	������-��� 7272, 25�����; �������-��� 7252, 18�����; ������-��� 7172 13�����; �����-��� 7292, 11�����.
		int code, time, sum;

		printf("������� ��� ������ = ");
		scanf("%d", &code);

		printf("time = ");
		scanf("%d", &time);

		switch (code)
		{
		case 7272: {
			sum = time * 25;
			printf("��� ����� ������. ��������� ��������� = %d ��\n", sum);
		}
				   break;
		case 7252: {
			sum = time * 18;
			printf("��� ����� �������. ��������� ��������� = %d ��\n", sum);
		}
				   break;
		case 7172: {
			sum = time * 13;
			printf("��� ����� ������. ��������� ��������� = %d ��\n", sum);
		}
				   break;
		case 7292: {
			sum = time * 11;
			printf("��� ����� �����. ��������� ��������� = %d ��\n", sum);
		}
				   break;
		default:
			printf("ya ne znau takogo goroda xDDD\n");
			break;
		}
	}
			break;
	case 8:	{
		float scV;

		printf("2.	�������� ���������, ������� � ����������� �� ��������� ����� ������ ��������� � ��� �������� �� 1�� 4 �/� - ������ (1); �� 5-10 �/c ��������� (2); �� 9-18 �/c - ������� (3); ������ 19 �/c - ��������� (4).\n");
		printf("scorost' vetra m/s = ");
		scanf("%f", &scV);

		if (scV >= 1 && scV <= 4) printf("������\n"); else if (scV > 4 && scV < 10) printf("���������\n"); else if (scV > 9 && scV <= 18) printf("�������\n"); else if (scV > 19) printf("���������\n");

	}
	break;
	case 9:	{
		/*3.	�������� ������� ���������� ��������������� �������� �� ��� ����(1����������, 2 - � ���� ��������, 3 - � ���� ��������� ���������)
			� ���� ���������(a, b, c) �� ���� 2 �����.������ � ���������� ����� ����, �������, � ������ ������(5, 10, 20 �����).
			������ ������ ��������(���������, ��������: �����������, ������� �, � ����� �����(�������� 1, 2, 5, 10)
			� ���� ���������, ��������, �2�� + 1��.������������� ��������� ������������� ������ ��� ��������.*/

		int tema, price, tn;
		float tg;
		char var;

		printf("1 - ���������� \n2 - � ���� �������� \n3 - � ���� ��������� ��������� � ������� a/b/c\n ");
		scanf("%d %c", &tema, &var);
		printf("������� ����� ����� = \n");
		scanf("%d", &price);

		tg = abs(2 - price);
		//tn = abs((2 - price) % 10);


		switch (tema)
		{
		case 1: {
			printf("���������� ��������!\n");

		}
				break;
		case 2: {
			printf("�������� � ���� ��������!\n");
		}
				break;
		case 3: {
			printf("�������� � ���� ��������� ���������!\n");
		}
				break;

		default:
			break;
		}

		if (var = 'a') printf("������� �, ���� ����� = %.0f �� 0 ��\n", tg);
		else if (var = 'b') printf("������� b, ���� ����� = %.0f �� 0 ��\n", tg);
		else if (var = 'c') printf("������� c, ���� ����� = %.0f �� 0 ��\n", tg);

	}
	break;
	case 10:	{
		int i = 0, a, b, result, r1 = 0, r2 = 0;
		for (i = 1; i <= 10; i++)
		{
			a = 0 + rand() % 9;
			b = 0 + rand() % 9;
			printf("%d * %d = ", a, b);
			scanf("%d", &result);
			if (result == a*b) r1 = r1 + 1; else r2 = r2 + 1;
		}
		printf("vernyh = %d\nne vernyh = %d\n\n", r1, r2);
	}
	break;
	case 11:
	{
		/*4.	�������� ���������, ������� �� ���� ��������(���� d ����� n) ���������� ���� ������� :
		� 22 ����� �� 21 ������ - ����(4); � 22 ������ �� 21 ��� - �����(5); � 22 ��� �� 21 ���� - ��������(6);
		� 22 ���� �� 21 ���� - ���(7); � 22 ���� �� 21 ������� - ���(8); � 22 ������� �� 21 �������� - ����(9);
		22 �������� �� 21 ������� - ����(10); � 22 ������� �� 21 ������ - ��������(11); � 22 ������ �� 21 ������� -
		�������(12); � 22 ������� �� 21 ������ - �������(1); 22 ������ �� 21 ������� - �������(2);
		� 22 ������� �� 21 ����� - ����(3).*/

		int day, me;

		printf("������� ���� = ");
		scanf("%d", &day);

		printf("� ����� �������� = ");
		scanf("%d", &me);

		if ((day >= 22 && me == 3) || (day <= 21 && me == 4)) printf("Oven\n"); 
		else if  ((day >= 22 && me == 4) || (day <= 21 && me == 5)) printf("telec\n");
		else if  ((day >= 22 && me == 5) || (day <= 21 && me == 6)) printf("bliznecy\n");
		else if  ((day >= 22 && me == 6) || (day <= 21 && me == 7)) printf("rak\n");		
		else if  ((day >= 22 && me == 7) || (day <= 21 && me == 8)) printf("lev\n");
		else if  ((day >= 22 && me == 8) || (day <= 21 && me == 9)) printf("deva\n");
		else if  ((day >= 22 && me == 9) || (day <= 21 && me == 10)) printf("vesy\n");
		else if  ((day >= 22 && me == 10) || (day <= 21 && me == 11)) printf("scorpion\n");
		else if  ((day >= 22 && me == 11) || (day <= 21 && me == 12)) printf("strelec\n");
		else if  ((day >= 22 && me == 12) || (day <= 21 && me == 1)) printf("kozerog\n");
		else if ((day >= 22 && me == 1) || (day <= 21 && me == 2)) printf("vodolei\n");
		else if ((day >= 22 && me == 2) || (day <= 21 && me == 3)) printf("ryba\n");
	}
	break;

	default:
		break;
	}
	goto start3;


}