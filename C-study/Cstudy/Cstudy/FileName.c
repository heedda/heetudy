


//#include <stdio.h>
//int main() {
//	//���� �����ϱ�
//	char ch = 9;
//	int inum = 1052;
//	double dnum = 3.141592;
//	//������ ũ�� ���ϱ�
//	printf("���� ch�� ũ��� :%d\n", sizeof(ch));
//	printf("���� inum�� ũ��� :%d\n", sizeof(inum));
//	printf("���� dnum�� ũ��� :%d\n", sizeof(dnum));
//	//������� ũ�� ���ϱ�
//	printf("char�� ũ��: %d\n", sizeof(char));
//	printf("int�� ũ��: %d\n", sizeof(int));
//	printf("double�� ũ��: %d\n", sizeof(double));
//	printf("float�� ũ��: %d\n", sizeof(float));
//	printf("long�� ũ��: %d\n", sizeof(long));
//	printf("long long�� ũ��: %d\n", sizeof(long long));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int num, num1, num2;
//    printf("�� ���� ������ �Է��ϼ��� : ");
//    scanf("%d %d %d", &num, &num1, &num2);
//    if ((num > num1 && num < num2)||(num > num2 && num < num1)) {
//        printf("%d�� �ι�°�� ū �� �Դϴ�.", num);
//    }
//    else if ((num1 > num && num1 < num2) || (num1 > num2 && num1 < num)) {
//        printf("%d�� �ι�°�� ū �� �Դϴ�.", num1);
//    }
//    else if ((num2 > num && num2 < num1) || (num2 > num1 && num2 < num)) {
//        printf("%d�� �ι�°�� ū �� �Դϴ�.", num2);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int sam1, sam2, sam3;
//    printf("�ﰢ���� �� ���� �Է��ϼ��� : ");
//    scanf("%d %d %d", &sam1, &sam2, &sam3);
//    if ((sam1 > sam2) && (sam1 > sam3)) {
//        if (sam1 <= sam2 + sam3) {
//            printf("\n�Ұ���");
//        }
//        else {
//            printf("\n����");
//        }
//        
//    }
//    if ((sam2 > sam1) && (sam2 > sam3)) {
//        if (sam2 <= sam1 + sam3) {
//            printf("\n�Ұ���");
//        }
//        else {
//            printf("\n����");
//        }
//
//    }
//    if ((sam3 > sam2) && (sam3 > sam1)) {
//        if (sam3 <= sam2 + sam1) {
//            printf("\n�Ұ���");
//        }
//        else {
//            printf("\n����");
//        }
//
//    }
//    return 0;
//   
//}

//#include <stdio.h>
//int main() {
//    int year;
//    printf("�⵵�� �Է��ϼ���.");
//    scanf("%4d", &year);
//    if (year % 4 == 0 && (year % 100 != 0||year%400==0)) {
//        printf("�����Դϴ�.");
//    }
//    else {
//        printf("������ �ƴմϴ�.");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int rol1, rol2, rol3;
//    printf("�� ���� �ֻ��� ���� �Է��ϼ��� : ");
//    scanf("%d %d %d", &rol1, &rol2, &rol3);
//    if (rol1 == rol2 && rol1 == rol3) {
//        prrintf("%d��", 10000 + rol1*100);
//    }
//    if (rol1 == rol2 || rol1 == rol3 || rol2 || rol3) {
//        if (rol1 == rol2) {
//            printf("%d��", 1000 + rol1 * 100);
//        }
//        if (rol3 == rol2) {
//            printf("%d��", 1000 + rol3 * 100);
//        }
//        if (rol1 == rol3) {
//            printf("%d��", 1000 + rol1 * 100);
//        }
//    }
//    else {
//        if (rol1 > rol2 && rol1 > rol3) {
//            printf("%d��", rol1 * 100);
//        }
//        if (rol2 > rol1 && rol2 > rol3) {
//            printf("%d��", rol2 * 100);
//        }
//        if (rol3 > rol2 && rol3 > rol1) {
//            printf("%d��", rol3 * 100);
//        }
//    }
//}

//#include <stdio.h>
//int main() {
//	int num, num1;
//	char x;
//	printf("���ڿ� �����ڸ� �����ϼ��� : ");
//	scanf("%d%c%d", &num,&x,&num1);
//	//switch ����.
//	switch (x)
//	{
//	case '+':
//		printf("%d%c%d=%d�Դϴ�.", num, x, num1, num + num1);
//		break;
//	case '-':
//		printf("%d%c%d=%d�Դϴ�.", num, x, num1, num - num1);
//		break;
//	case '*':
//		printf("%d%c%d=%d�Դϴ�.", num, x, num1, num * num1);
//		break;
//	case '/':
//		printf("%d%c%d=%d�Դϴ�.", num, x, num1, num / num1);
//		break;
//	case '%':
//		printf("%d%c%d=%d�Դϴ�.", num, x, num1, num % num1);
//		break;
//	default:
//		printf("ERROR ��������ڰ� �ƴմϴ�");
//		break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int num, num2, num3,sco,ruf;
//	printf("�� ���� �Է��ϼ��� : ");
//	scanf("%d %d %d", &num, &num2, &num3);
//	sco = (num > num2) ? num : num2;
//	ruf = (sco > num3) ? sco : num3;
//	printf("�� ���� ���� ū ���� %d�Դϴ�.", ruf);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int time, cook, min;
//	scanf("%d %d %d", &time, &min, &cook);
//	if ((time > 24 || min > 60)||(time>24&&min>60)) {
//			printf("�ð��� �ٽ� �Է��ϼ���");
//	}
//	else {
//		time = (time + (min + cook) / 60) % 24;
//			min = (min + cook) % 60;
//			printf("%d:%d\n%d", time, min, cook);
//	}
//	
//	
//}

//#include <stdio.h>
//int main() {
//	int H, M;
//	scanf("%d %d", &H, &M);
//	if ((H > 24 || M > 60) || (H > 24 && M > 60)) {//           �̿ϼ�
//		printf("�ð��� �ٽ� �Է��ϼ���");
//	}
//	else if (H < 24 && M < 60) {
//		if ((M - 45) >= 0) {
//			printf("%d:%d", H, M - 45);
//		}
//		else if(M-45<0) {
//			H - 1;
//			M +60;
//			printf("%d:%d", H, M-45);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int dd,num=1,kk;
//	kk = num;
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &dd);
//	while (num<=dd)
//	{
//		num++;
//		kk = kk + num;
//
//		if (num >= dd) {
//			printf("\n1���� %d������ �� :%d ",dd, kk);
//			break;
//		}
//		
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d, e;
//	scanf("%d %d", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a < b) ? a : b;
//	e = d;
//	while (d<=c)
//	{
//		printf("%d\t", d);
//		++d;
//		if (d > c) {
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	char a, b,c,d,e;
//	scanf("%c %c", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a < b) ? a : b;
//	e = d;
//	while (d <= c)
//	{
//		printf("%c ", d);
//		++d;
//		if (d > c) {
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a=0;
//	scanf("%d", &a);
//	while (1)
//	{
//		if (a >= 80 && 100 >= a) {
//			printf("�հ�\n");
//			scanf("%d", &a);
//		}
//		else if (a < 80 && a >= 0) {
//			printf("���հ�\n");
//			scanf("%d", &a);
//		}
//		else {
//			printf("�̿��� ���ڸ� �Է��ϼ̽��ϴ�.");
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0,num=1;
//	scanf("%d", &a);
//	while (1)
//	{
//		if (a <= 100) {
//			b += a;
//			num++;
//			scanf("%d", &a);
//		}
//		else {
//			printf("%.1lf",(double)b/--num);
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= 23 && b <= 59) {
//		if (b + c >=60) {
//			a += (b + c) / 60;
//			b += c;
//			b %= 60;
//			if (a >= 24) {
//				a = a % 24;
//				printf(" %d %d\n%d", a, b, c);
//			}
//			else {
//				printf("%d %d\n%d", a, b, c);
//			}
//		}
//		else {
//			printf("%d %d\n%d", a, b + c, c);
//		}
//	}
//	else {
//		printf("����");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a <= 23 && b <= 59) {
//		if (b >= 45) {
//			printf("%d %d", a, b-45);
//		}
//		else {
//			printf("%d %d", a - 1, (b + 60) - 45);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	for (num;num>=0;num--) {
//		printf("%d ", num);
//	}
//	printf("\n\n���α׷� ����\n");
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, c = 0;
//	scanf("%d", &a);
//	for (int b = 1;b <= a;b++) {
//		c += b;
//	}
//	printf("1���� %d������ �� %d", a, c);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int b = 1;b <= 9;b++) {
//		printf("\n%d*%d=%d", a, b, a * b);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, b=0;
//	scanf("%d", &a);
//	for (int num=1;num<=9;++num ) {
//		scanf("%d", &a);
//		if (a % 2 == 0) {
//			b += a;
//		}
//
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int s, f, g = 0;
//	printf("����s(���ۼ�)�� f(�� ��)�Է�(s<=f) : ");
//	scanf("%d %d", &s, &f);
//	for (int num = s;num <= f;num++) {
//		if (num % 4 == 0) {
//			g += num;
//		}
//	}
//	printf("%d", g);
//}

//#include <stdio.h>
//int main() {
//	int a, num, b = 0;
//	scanf("%d", &a);
//	for (num = 1; 1;num++) {
//		if (b <= a) {
//			b += num;
//		}
//		if (b > a) {
//			break;
//		}
//	}
//	printf("\n%d\n%d",num,b);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, b=0, c = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b) {
//		c = a;
//		a = b;
//		b = c;
//	}
//	printf("�Է¹��� �� �߿� ū ���� %d�Դϴ�.", a);
//	printf("\n�Է¹��� �� �߿� ���� ���� %d�Դϴ�.",b);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", b + 100 - a);
//	if (b + 100 - a>0) {
//		printf("\n��");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	char b;
//	scanf("%c %d", &b, &a);
//	if (b == 'M') {
//		if (a > 20) {
//			printf("MAN");
//		}
//		else {
//			printf("BOY");
//		}
//
//	}
//	else if(b=='F') {
//		if (a > 20) {
//			printf("WOMEN");
//		}
//		else {
//			printf("GIRL");
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d", &a); //������ ���� ���ϱ�
//	for (int num = 1;num <= a;num++) {
//		scanf("%d", &b);//������ �Է�
//		if (b > c) {//�����Ͱ� �ִ밪���� ���ϱ�
//			c = b;//�ִ밪�̶�� �ִ밪������ int b�Է�
//		}
//	}
//	printf("%d", c);//�ִ밪 ���
//}

//#include <stdio.h>
//int main() {
//	int a;
//	char b = 'k';
//	scanf("%d", &a);
//	for (int num = 1;num <= a;num++) {
//		if (a % num == 0 && (num != 1 && num != a) && num!=2) {
//			b = 'F';
//		}
//	}
//	if (b == 'F') {
//		printf("�Ҽ��� �ƴմϴ�.");
//	}
//	else {
//		printf("�Ҽ��Դϴ�.");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d", &a);
//	printf("%d\n���ڸ� �Է��ϼ��� : ", a);
//	for (int num = 0;a > num;num++) {
//		scanf("%d", &b);
//		if (num == 0 || num == a-1 || num == a / 2) {
//			printf("%d ", b);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	do {
//		printf("\n�ڿ����� �Է��ϼ��� : ");
//		scanf("%d", &a);
//		if (a % 2 == 0 && a != 0) {
//			printf("¦��");
//		}
//		else if(a!=0){
//			printf("Ȧ��");
//		}
//	} while (a != 0);
//	printf("���α׷��� �����մϴ�.");
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	do {
//		printf("\n�� ���� ���� ������ �ݺ��ϴ� ���α׷�");
//		printf("\na : ");
//		scanf("%d", &a);
//		printf("b : ");
//		scanf("%d", &b);
//	} while (a != b);
//	printf("\n�� ���� �����ϴ�.");
//}

//#include <stdio.h>
//int main() {
//	int yy, mm, dd, y1, m1, d1, y2, y3 = 0, last, la1;
//	scanf("%d %d %d",&yy,&mm,&dd);//          �����Է¹޾Ƽ� ���� ����ϱ� �̿ϼ�
//	switch (mm)//m1 ������ ���� �� ���ϱ�
//	{
//	case 1:
//	case 10:
//		m1 = 0;
//		break;
//	case 5:
//		m1 = 1;
//		break;
//	case 8:
//		m1 = 2;
//		break;
//	case 2:
//	case 3:
//	case 11:
//		m1 = 3;
//		break;
//	case 6:
//		m1 = 4;
//		break;
//	case 9:
//	case 12:
//		m1 = 5;
//		break;
//	case 4:
//	case 7:
//		m1 = 6;
//		break;
//	default:
//		printf("����");
//		break;
//	}
//	d1 = dd + m1;//d1 ���� ���ϴ� ���� ���ϱ�
//	d1 %= 7;
//	y1 = yy;
//	y2 = yy;
//	switch (y1/100)
//	{
//	case 20:
//		y1 = 0;
//		for (;y2 > 7;) {
//			y2 -= 7;
//			y3 = y2;
//		}
//		y2 /= 4;
//		break;
//	case 19:
//		y1 = 1;
//		for (;y2 > 7;) {
//			y2 -= 7;
//			y3 = y2;
//		}
//		y2 /= 4;
//		break;
//	case 17:
//		y1 = 5;
//		for (;y2 > 7;) {
//			y2 -= 7;
//			y3 = y2;
//		}
//		y2 /= 4;
//		break;
//	case 16:
//		y1 = 0;
//		for (;y2 > 7;) {
//			y2 -= 7;
//			y3 = y2;
//		}
//		y2 /= 4;
//		break;
//	default:
//		y1 = 3;
//		for (;y2 > 7;) {
//			y2 -= 7;
//			y3 = y2;
//		}
//		y2 /= 4;
//		break;
//	}
//	la1 = y1 + y2 + y3;
//	last = la1 + d1;
//	if (last > 7) {
//		while (last>7)
//		{
//			last -= 7;
//		}
//	}
//	if (((yy % 400 == 0) || (yy % 4 == 0 && yy % 100 != 0))&&(mm==2||mm==1)) {
//		last -= 1;
//	}
//	if (yy >= 2000) {
//		last -= 1;
//	}
//	switch (last)//                         2000��뿡 +1�� ���� ��µǴ� ���� ������
//	{
//	case 1:
//		printf("�Ͽ���");
//		break;
//	case 2:
//		printf("������");
//		break;
//	case 3:
//		printf("ȭ����");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("�����");
//		break;
//	case 6:
//		printf("�ݿ���");
//		break;
//	case 0:
//		printf("�����");
//	default:
//		printf("����\n%d", last);
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int zellerCongruence(int year, int month, int day) {
//    int q = day;
//    int m = month;
//    int K = year % 100;
//    int J = year / 100;
//    int h;
//
//    // Zeller's Congruence ���
//    h = (q + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + 5 * J) % 7;
//
//    return h;
//}
//
//int main() {
//    int year, month, day;
//    char* weekdays[] = { "�����", "�Ͽ���", "������", "ȭ����", "������", "�����", "�ݿ���" };
//
//    printf("�� �� ���� �Է��ϼ��� : ");
//    scanf("%d %d %d", &year, &month, &day);
//
//    int dayIndex = zellerCongruence(year, month, day);
//    printf("%d�� %d�� %d���� %s�Դϴ�.\n", year, month, day, weekdays[dayIndex]);
//
//    return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0, d;
//	scanf("%d", &a);
//	d = a;
//	while (1)
//	{
//		if (d <= 4) {
//			b = -1;
//			break;
//		}
//		else if (a % 5 == 0) {
//			b += a / 5;
//			break;
//		}
//		else if (a - 3 >= 0) {
//			a -= 3;
//			b++;
//			if (a != 0) continue;
//			break;
//		}
//		else if (a <= 0) break;
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	for (a = 1;a <= 5;a++) {
//		for (b = 1;b <= 5;b++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &c);
//	for (a = 1;a <= c;a++) {
//		for (b = 1;b <= c;b++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	for (a = 1;a <= 9;a++) {
//		printf("%d��\n", a);
//		for (b = 1;b <= 9;b++) {
//			printf("%d*%d=%d\n", a, b, a * b);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &a);
//	for (b = 1;b <= a;b++) {
//		for (c = 1;c <= b;c++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &a);
//	for (b = a;b >= 1;b--) {
//		for (c = 1;c <= b;c++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a, b, c, d = 0;
//	scanf("%d", &a);
//	for (b = 1;b <= a * 2;b++) {
//		if (b <= a) {
//			d++;
//		}
//		else if (b > a+1) {
//			d--;
//		}
//		for (c = 1;c <= d;c++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a, b, c, d = 0;
//	scanf("%d", &a);
//	d = a + 1;
//	for (b = 1;b <= a * 2;b++) {
//		if (b <= a) {
//			d--;
//		}
//		else if (b > a + 1) {
//			d++;
//		}
//		for (c = 1;c <= d;c++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &a);
//	int i = a, j = 1;
//	for (b = 1;b <=a ;b++) {
//		for (c = i;c > 0;c--) {
//			printf(" ");
//		}
//		i--;
//		for (c = 1;c <= j;c++) {
//			printf("*");
//		}
//		j++;
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &a);
//	int i = a, j = 1;
//	for (b = 1;b <= a;b++) {
//		for (c = i;c > 0;c--) {
//			printf("*");
//		}
//		i--;
//		for (c = 1;c <= j;c++) {
//			printf(" ");
//		}
//		j++;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &a);
//	int i = a, j = 1;
//	for (b = 1;b <= a;b++) {
//		for (c = i;c > 0;c--) {
//			printf(" ");
//		}
//		i--;
//		for (c = 1;c <= j;c++) {
//			printf("*");
//		}
//		j += 2;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d", &a);
//	int i = a, j = 0;
//	for (b = 1;b <= a;b++) {
//		for (c = 0;c <= j;c++) {
//			printf(" ");
//		}
//		j ++;
//		for (c = 1;c <= (i * 2) - 1;c++) {
//			printf("*");
//		}
//		i --;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, k, i = 1, j;
//	scanf("%d", &a);
//	k = a;
//	for (i = 1;i <= a;i++) {
//		for (j = k;j >= 1;j--) {
//			printf(" ");
//		}
//		k--;
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	k = a;
//	for (i = 1;i < a;i++) {
//		for (j = 1;j <= i+1;j++) {
//			printf(" ");
//		}
//		for (j = k-1;j > 0;j--) {
//			printf("*");
//		}
//		k--;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, k;
//	scanf("%d", &a);
//	k = a;
//	int q = 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = k;j > 0;j--) {
//			printf(" ");
//		}
//		k--;
//		for (int j = 1;j <= q;j++) {
//			printf("*");
//		}
//		q += 2;
//		printf("\n");
//	}
//	k = 2;
//	q = a * 2 - 3;
//	for (int i = 1;i <= a-1;i++) {
//		for (int j = k;j > 0;j--) {
//			printf(" ");
//		}
//		k++;
//		for (int j = 1;j <= q;j++) {
//			printf("*");
//		}
//		q -= 2;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, k;
//	scanf("%d", &a);
//	k = 1;
//	int q = a * 2 - 1;
//	for (int i = 1;i <= a - 1;i++) {
//		for (int j = k;j > 0;j--) {
//			printf(" ");
//		}
//		for (int j = 1;j <= q;j++) {
//			printf("*");
//		}
//		k++;
//		q -= 2;
//		printf("\n");
//	}
//	k = a;
//	q = 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = k;j > 0;j--) {
//			printf(" ");
//		}
//		for (int j = 1;j <= q;j++) {
//			printf("*");
//		}
//		k--;
//		q += 2;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	int q = a - 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		for (int j = 1;j <= (q * 2);j++) {
//			printf(" ");
//		}
//		q--;
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	q = a - 1;
//	int k = 2;
//	for (int i = 1;i <= a - 1;i++) {
//		for (int j = q;j > 0;j--) {
//			printf("*");
//		}
//		for (int j = 1;j <= k;j++) {
//			printf(" ");
//		}
//		k += 2;
//		for (int j = q;j > 0;j--) {
//			printf("*");
//		}
//		q--;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		if (i % 2 == 1) {
//			for (int j = 1;j <= a;j++) {
//				printf("*");
//				printf(" ");
//			}
//		}
//		if (i % 2 == 0) {
//			for (int j = 1;j <= a;j++) {
//				printf(" ");
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//// int z;//��������
//int main()
//{
//	//stack int z;//�������� ->���������� ����� ���´�.
//	int first, second, sum;
//	printf("Enter two input integers.\n");//                                   ��ǻ�ͱ���
//	scanf("%d %d", &first, &second);
//	sum = add(first, second);
//	printf("The sum is %d.\n", sum);
//	return 0;//void main() �� ���� return;���� �� �ش�.
//}
//
//int add(int f, int s) {
//	int total;
//	total = f + s;
//	return total;//�̰��� add�Լ����ٰ� ��ȯ�� �� �شٴ� ���̴�.
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1;j <= a - (a / 2);j++) {
//			printf("* ");
//		}
//		printf("\n");
//		for (int j = 0;j < (a / 2);j++) {
//			printf(" *");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 1,c;
//	scanf("%d", &a);
//	c = a - 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= c;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= b;j++) {
//			printf("* ");
//		}
//		c--;
//		b++;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d", &a);
//	b = a - 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= b;j++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int j = 1;j < c;j++) {
//			printf(" ");
//		}
//		if (i != 1) {
//			printf("*");
//		}
//		b--;
//		c += 2;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d", &a);
//	b = a;
//	for (int i = 1;i < a;i++) {
//		for (int j = 1;j < b;j++) {
//			printf(" ");
//		}
//		printf("*");
//		for (int j = 1;j < c;j++) {
//			printf(" ");
//		}
//		if (i != 1) {
//			printf("*");
//		}
//		b--;
//		c += 2;
//		printf("\n");
//	}
//	for (int j = 1;j <= a * 2 - 1;j++) {
//		printf("*");
//	}
//}



//#include <stdio.h>
//int main(void) {
//	for (int i = 1;i <= 5;i++) {
//		for (int j = 1;j <= 5;j++) {
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for (int i = 1;i <= 5;i++) {
//		for (int j = 1;j <= 5;j++) {
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	for (int i = 1;i <= 5;i++) {
//		for (int j = 1;j <= 5;j++) {
//			printf("%d ", i + j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	for (int i = 1;i <= 9;i++) {
//		for (int j = 2;j <= 4;j++) {
//			printf("%d * %d = %2d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	for (int i = 2;i <= 4;i++) {
//		for (int j = 1;j <= 5;j++) {
//			printf("%d * %d = %2d   ", i, j, j * i);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		printf("JUNGOL\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a < b) ? a : b;
//	for (int i = d;i <= c;i++) {
//		printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		if (i % 5 == 0) {
//			b += i;
//			printf("%d\n", b);
//		}
//	}
//	printf("\n\n%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0, c;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		scanf("%d", &c);
//		b += c;
//	}
//	printf("%.2f", (float)b / a);
//}

//#include <stdio.h>
//int main() {
//	int a, even = 0, odd = 0;
//	for (int i = 1;i <= 10;i++) {
//		scanf("%d", &a);
//		if (a % 2 == 0) {
//			even++;
//		}
//		if (a % 2 == 1) {
//			odd++;
//		}
//	}
//	printf("even : %d\nodd : %d", even, odd);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d, sum = 0, sumNum = 0;
//	scanf("%d %d", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a < b) ? a : b;
//	for (int i = d;i <= c;i++) {
//		if (i % 3 == 0 || i % 5 == 0) {
//			sum += i;
//			sumNum++;
//		}
//	}
//	printf("sum : %d\navg : %.1f", sum, (float)sum / sumNum);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = a;i <= a * 10;i += a) {
//		printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= b;j++) {
//			printf("%d ", i * j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= 4;i++) {
//		for (int j = 1;j <= 4;j++) {
//			printf("(%d,%2d) ", i, j);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b=0, i;
//	scanf("%d", &a);
//	for (i = 1;1;i++) {
//		b += i;
//		if (b > a) {
//			break;
//		}
//	}
//	printf("%d %d", i, b);
//}

//#include <stdio.h>
//int main() {
//	int a, i, b = 0, c = 0;
//	scanf("%d", &a);
//	for (i = 1;1;i++) {
//		if (b >= a) {
//			break;
//		}
//		if (i % 2 == 1) {
//			b += i;
//			c++;
//		}
//	}
//	printf("%d %d", c, b);
//}

//#include <stdio.h>
//int main() {
//	for (int i = 1;i <= 3;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	for (int i = 1;i <= 3;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 3;i >= 1;i--) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	for (int i = 3;i >= 1;i--) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 1;i <= 3;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a - i;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j < i;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= a - i + 1;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a - i;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= i * 2 - 1;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	int k = a * 2 - 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j < i;j++) {
//			printf(" ");
//		}
//		for (int j = k;j >= 1;j--) {
//			printf("*");
//		}
//		k -= 2;
//		
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 1;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("%2d ", b);
//			b++;
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	char b = 'A';
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = a - i + 1;j > 0;j--) {
//			printf("%c", b);
//			b++;
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a = 1;
//	char b = 'a';
//	for (int i = 1;i <= 4;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("%c ", b);
//			b++;
//		}
//		for (int j = 1;j <= 5 - i;j++) {
//			printf("%d ", a++);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	int p = 1;
//	char b = 'A';
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a + 1 - i;j++) {
//			printf("%d ", p++);
//		}
//		for (int j = 1;j <= i;j++) {
//			printf("%c ", b);
//			b++;
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0, c = 0;
//	for (int i = 1;i <= 20;i++) {
//		scanf("%d", &a);
//		if (a != 0) {
//			b += a;
//			c++;
//		}
//		if (a == 0) {
//			break;
//		}
//	}
//	printf("%d %d", b, b / c);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i<=100;i++) {
//		if (i % a == 0) {
//			printf("%d ", i);;
//		}
//		if (i % a == 0 && i % 10 == 0) {
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 1;i < a;i++) {
//		for (int j = 1;j <= a-i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}