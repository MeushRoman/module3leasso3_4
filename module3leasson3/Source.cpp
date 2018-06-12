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
		printf("1.	Составить расписание на неделю. Пользователь вводит порядковый номер дня недели и у него на экране отображается, то, что запланировано на этот день.\n");

		int n = 1;
	start:
		printf("день недели = \n");
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
		printf("2.	Дано целое число от 1 до 365. Определить, какой день недели выпадает на это число, если 1 января – понедельник.\n");

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
		printf("3.	Дано трехзначное число. Определить: \na.является ли сумма его цифр двухзначным числом;\nb.является ли произведение его цифр трехзначным числом\n\n");

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

			((z >= 10) && (z <= 99)) ? printf("двухзначное!\n") : printf("false\n");

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
		/*	4.	Рейтинг бакалавра заочного отделения при поступлении в магистратуру определяется средним баллом по диплому,
				умноженным на коэффициент стажа работы по специальности, который равен : нет стажа – 1, меньше 2 лет – 13,
				от 2 до 5 лет – 16. Составить программу расчета рейтинга при заданном среднем балле диплома(от 3 до 5) и
				вывести сообщение о приеме в магистратуру при проходном балле 45.*/

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
		printf("5.	Написать программу, которая при вводе числа в диапазоне от 1 до 20 добавляет к нему слово *рубль* в правильной форме. Например, 1 рубль, 2 рубля, 5 рублей\n");

	}
			break;
	case 6: {

		int date, dayM = 31, pl, nl;

		printf("последнее полнолуние было 27 августа\n");

		printf("day 1-31 = ");
		scanf("%d", &date);

		nl = abs(dayM - 27 - 14);
		pl = abs(dayM - 27 - 28);




		if (date < nl) printf("Следуещее новолуние %d\n сентября", nl);
		else if (date > nl && date < pl) printf("Следующте полнолуние %d сентября\n ", pl);
		else if (date == nl) printf("Следующте новолуние сегодня. %d сентября\n", nl);
		else if (date == pl) printf("Следующте полнолуние сегодня. %d сентября\n", pl);
		else if (date > pl) {
			printf("Количество дней в текущем месяце = ");
			scanf("%d", &dayM);
			nl = abs(dayM - 27 - 14);
			printf("Следуещее новолуние %d октября\n", nl);
		}
	}
			break;
	case 7:	{
		//1.	Написать программу, которая по коду города и длительности переговоров вычисляет их стоимость и результат выводит на экран: 
		//	Алматы-код 7272, 25тенге; Шымкент-код 7252, 18тенге; Астана-код 7172 13тенге; Актау-код 7292, 11тенге.
		int code, time, sum;

		printf("Введите код города = ");
		scanf("%d", &code);

		printf("time = ");
		scanf("%d", &time);

		switch (code)
		{
		case 7272: {
			sum = time * 25;
			printf("Ваш город Алматы. Стоимость разговора = %d тг\n", sum);
		}
				   break;
		case 7252: {
			sum = time * 18;
			printf("Ваш город Шымкент. Стоимость разговора = %d тг\n", sum);
		}
				   break;
		case 7172: {
			sum = time * 13;
			printf("Ваш город Астана. Стоимость разговора = %d тг\n", sum);
		}
				   break;
		case 7292: {
			sum = time * 11;
			printf("Ваш город Актау. Стоимость разговора = %d тг\n", sum);
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

		printf("2.	Написать программу, которая в зависимости от характера ветра выдает сообщение о его скорости от 1до 4 м/с - слабый (1); от 5-10 м/c умеренный (2); от 9-18 м/c - сильный (3); больше 19 м/c - ураганный (4).\n");
		printf("scorost' vetra m/s = ");
		scanf("%f", &scV);

		if (scV >= 1 && scV <= 4) printf("слабый\n"); else if (scV > 4 && scV < 10) printf("умеренный\n"); else if (scV > 9 && scV <= 18) printf("сильный\n"); else if (scV > 19) printf("ураганный\n");

	}
	break;
	case 9:	{
		/*3.	Почтовый автомат предлагает поздравительные открытки на три темы(1Новогодние, 2 - С Днем Рождения, 3 - С Днем Защитника Отечества)
			в трех вариантах(a, b, c) по цене 2 тенге.Ввести с клавиатуры номер темы, вариант, и купюру оплаты(5, 10, 20 тенге).
			Выдать нужную открытку(сообщение, например: «Новогодние, вариант с», а также сдачу(купюрами 1, 2, 5, 10)
			с виде сообщения, например, «2тн + 1тн».Предусмотреть обработку неправильного номера или варианта.*/

		int tema, price, tn;
		float tg;
		char var;

		printf("1 - Новогодние \n2 - С Днем Рождения \n3 - С Днем Защитника Отечества и вариант a/b/c\n ");
		scanf("%d %c", &tema, &var);
		printf("Введите сумму денег = \n");
		scanf("%d", &price);

		tg = abs(2 - price);
		//tn = abs((2 - price) % 10);


		switch (tema)
		{
		case 1: {
			printf("Новогодняя открытка!\n");

		}
				break;
		case 2: {
			printf("Открытка С Днем Рождения!\n");
		}
				break;
		case 3: {
			printf("Открытка С Днем Защитника Отечества!\n");
		}
				break;

		default:
			break;
		}

		if (var = 'a') printf("вариант а, ваша сдача = %.0f тг 0 тн\n", tg);
		else if (var = 'b') printf("вариант b, ваша сдача = %.0f тг 0 тн\n", tg);
		else if (var = 'c') printf("вариант c, ваша сдача = %.0f тг 0 тн\n", tg);

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
		/*4.	Написать программу, которая по дате рождения(день d месяц n) определяет знак Зодиака :
		с 22 марта по 21 апреля - Овен(4); с 22 апреля по 21 мая - Телец(5); с 22 мая по 21 июня - Близнецы(6);
		с 22 июня по 21 июля - Рак(7); с 22 июля по 21 августа - Лев(8); с 22 августа по 21 сентября - Дева(9);
		22 сентября по 21 октября - Весы(10); с 22 октября по 21 ноября - Скорпион(11); с 22 ноября по 21 декабря -
		Стрелец(12); с 22 декабря по 21 января - Козерог(1); 22 января по 21 февраля - Водолей(2);
		с 22 февраля по 21 марта - Рыбы(3).*/

		int day, me;

		printf("введите день = ");
		scanf("%d", &day);

		printf("и месяц рождения = ");
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