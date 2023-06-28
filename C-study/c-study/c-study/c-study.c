
//#include <stdio.h>
//int main() {
//	//변수 정의하기
//	char ch = 9;
//	int inum = 1052;
//	double dnum = 3.141592;
//	//변수의 크기 구하기
//	printf("변수 ch의 크기는 :%d\n", sizeof(ch));
//	printf("변수 inum의 크기는 :%d\n", sizeof(inum));
//	printf("변수 dnum의 크기는 :%d\n", sizeof(dnum));
//	//쟈료형의 크기 구하기
//	printf("char의 크기: %d\n", sizeof(char));
//	printf("int의 크기: %d\n", sizeof(int));
//	printf("double의 크기: %d\n", sizeof(double));
//	printf("float의 크기: %d\n", sizeof(float));
//	printf("long의 크기: %d\n", sizeof(long));
//	printf("long long의 크기: %d\n", sizeof(long long));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int num, num1, num2;
//    printf("새 개의 정수를 입력하세요 : ");
//    scanf("%d %d %d", &num, &num1, &num2);
//    if ((num > num1 && num < num2)||(num > num2 && num < num1)) {
//        printf("%d가 두번째로 큰 수 입니다.", num);
//    }
//    else if ((num1 > num && num1 < num2) || (num1 > num2 && num1 < num)) {
//        printf("%d가 두번째로 큰 수 입니다.", num1);
//    }
//    else if ((num2 > num && num2 < num1) || (num2 > num1 && num2 < num)) {
//        printf("%d가 두번째로 큰 수 입니다.", num2);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int sam1, sam2, sam3;
//    printf("삼각형의 세 변을 입력하세요 : ");
//    scanf("%d %d %d", &sam1, &sam2, &sam3);
//    if ((sam1 > sam2) && (sam1 > sam3)) {
//        if (sam1 <= sam2 + sam3) {
//            printf("\n불가능");
//        }
//        else {
//            printf("\n가능");
//        }
//        
//    }
//    if ((sam2 > sam1) && (sam2 > sam3)) {
//        if (sam2 <= sam1 + sam3) {
//            printf("\n불가능");
//        }
//        else {
//            printf("\n가능");
//        }
//
//    }
//    if ((sam3 > sam2) && (sam3 > sam1)) {
//        if (sam3 <= sam2 + sam1) {
//            printf("\n불가능");
//        }
//        else {
//            printf("\n가능");
//        }
//
//    }
//    return 0;
//   
//}

//#include <stdio.h>
//int main() {
//    int year;
//    printf("년도를 입력하세요.");
//    scanf("%4d", &year);
//    if (year % 4 == 0 && (year % 100 != 0||year%400==0)) {
//        printf("윤년입니다.");
//    }
//    else {
//        printf("윤년이 아닙니다.");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int rol1, rol2, rol3;
//    printf("세 개의 주사위 수를 입력하세요 : ");
//    scanf("%d %d %d", &rol1, &rol2, &rol3);
//    if (rol1 == rol2 && rol1 == rol3) {
//        prrintf("%d원", 10000 + rol1*100);
//    }
//    if (rol1 == rol2 || rol1 == rol3 || rol2 || rol3) {
//        if (rol1 == rol2) {
//            printf("%d원", 1000 + rol1 * 100);
//        }
//        if (rol3 == rol2) {
//            printf("%d원", 1000 + rol3 * 100);
//        }
//        if (rol1 == rol3) {
//            printf("%d원", 1000 + rol1 * 100);
//        }
//    }
//    else {
//        if (rol1 > rol2 && rol1 > rol3) {
//            printf("%d원", rol1 * 100);
//        }
//        if (rol2 > rol1 && rol2 > rol3) {
//            printf("%d원", rol2 * 100);
//        }
//        if (rol3 > rol2 && rol3 > rol1) {
//            printf("%d원", rol3 * 100);
//        }
//    }
//}

//#include <stdio.h>
//int main() {
//	int num, num1;
//	char x;
//	printf("숫자와 연산자를 선택하세요 : ");
//	scanf("%d%c%d", &num,&x,&num1);
//	//switch 시작.
//	switch (x)
//	{
//	case '+':
//		printf("%d%c%d=%d입니다.", num, x, num1, num + num1);
//		break;
//	case '-':
//		printf("%d%c%d=%d입니다.", num, x, num1, num - num1);
//		break;
//	case '*':
//		printf("%d%c%d=%d입니다.", num, x, num1, num * num1);
//		break;
//	case '/':
//		printf("%d%c%d=%d입니다.", num, x, num1, num / num1);
//		break;
//	case '%':
//		printf("%d%c%d=%d입니다.", num, x, num1, num % num1);
//		break;
//	default:
//		printf("ERROR 산술연산자가 아닙니다");
//		break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int num, num2, num3,sco,ruf;
//	printf("세 수를 입력하세요 : ");
//	scanf("%d %d %d", &num, &num2, &num3);
//	sco = (num > num2) ? num : num2;
//	ruf = (sco > num3) ? sco : num3;
//	printf("세 수중 가장 큰 수는 %d입니다.", ruf);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int time, cook, min;
//	scanf("%d %d %d", &time, &min, &cook);
//	if ((time > 24 || min > 60)||(time>24&&min>60)) {
//			printf("시간을 다시 입력하세요");
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
//	if ((H > 24 || M > 60) || (H > 24 && M > 60)) {//           미완성
//		printf("시간을 다시 입력하세요");
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
//	printf("정수를 입력하세요 : ");
//	scanf("%d", &dd);
//	while (num<=dd)
//	{
//		num++;
//		kk = kk + num;
//
//		if (num >= dd) {
//			printf("\n1부터 %d까지의 합 :%d ",dd, kk);
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
//			printf("합격\n");
//			scanf("%d", &a);
//		}
//		else if (a < 80 && a >= 0) {
//			printf("불합격\n");
//			scanf("%d", &a);
//		}
//		else {
//			printf("이외의 숫자를 입력하셨습니다.");
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
//		printf("오류");
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
//	printf("\n\n프로그램 종료\n");
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a, c = 0;
//	scanf("%d", &a);
//	for (int b = 1;b <= a;b++) {
//		c += b;
//	}
//	printf("1부터 %d까지의 합 %d", a, c);
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
//	printf("정수s(시작수)와 f(끝 수)입력(s<=f) : ");
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
//	printf("입력받은 수 중에 큰 수는 %d입니다.", a);
//	printf("\n입력받은 수 중에 작은 수는 %d입니다.",b);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", b + 100 - a);
//	if (b + 100 - a>0) {
//		printf("\n비만");
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
//	scanf("%d", &a); //데이터 개수 정하기
//	for (int num = 1;num <= a;num++) {
//		scanf("%d", &b);//데이터 입력
//		if (b > c) {//데이터가 최대값인지 구하기
//			c = b;//최대값이라면 최대값변수에 int b입력
//		}
//	}
//	printf("%d", c);//최대값 출력
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
//		printf("소수가 아닙니다.");
//	}
//	else {
//		printf("소수입니다.");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d", &a);
//	printf("%d\n숫자를 입력하세요 : ", a);
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
//		printf("\n자연수를 입력하세요 : ");
//		scanf("%d", &a);
//		if (a % 2 == 0 && a != 0) {
//			printf("짝수");
//		}
//		else if(a!=0){
//			printf("홀수");
//		}
//	} while (a != 0);
//	printf("프로그램을 종료합니다.");
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	do {
//		printf("\n두 수가 같을 때까지 반복하는 프로그램");
//		printf("\na : ");
//		scanf("%d", &a);
//		printf("b : ");
//		scanf("%d", &b);
//	} while (a != b);
//	printf("\n두 수가 같습니다.");
//}

//#include <stdio.h>
//int main() {
//	int yy, mm, dd, y1, m1, d1, y2, y3 = 0, last, la1;
//	scanf("%d %d %d",&yy,&mm,&dd);//          날자입력받아서 요일 출력하기 미완성
//	switch (mm)//m1 연산을 위한 수 정하기
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
//		printf("오류");
//		break;
//	}
//	d1 = dd + m1;//d1 요일 정하는 공식 정하기
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
//	switch (last)//                         2000년대에 +1로 값이 출력되는 오류 수정중
//	{
//	case 1:
//		printf("일요일");
//		break;
//	case 2:
//		printf("월요일");
//		break;
//	case 3:
//		printf("화요일");
//		break;
//	case 4:
//		printf("수요일");
//		break;
//	case 5:
//		printf("목요일");
//		break;
//	case 6:
//		printf("금요일");
//		break;
//	case 0:
//		printf("토요일");
//	default:
//		printf("오류\n%d", last);
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
//    // Zeller's Congruence 계산
//    h = (q + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + 5 * J) % 7;
//
//    return h;
//}
//
//int main() {
//    int year, month, day;
//    char* weekdays[] = { "토요일", "일요일", "월요일", "화요일", "수요일", "목요일", "금요일" };
//
//    printf("년 월 일을 입력하세요 : ");
//    scanf("%d %d %d", &year, &month, &day);
//
//    int dayIndex = zellerCongruence(year, month, day);
//    printf("%d년 %d월 %d일은 %s입니다.\n", year, month, day, weekdays[dayIndex]);
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
//		printf("%d단\n", a);
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

//#include <stdio.h>
//int main() {
//	int  nArr[5] = { 1,2,3,4,5 };
//	int a[5] = {0};
//	for (int i = 0;i < 5;i++) {
//		a[i] = nArr[i];
//	}
//	for (int i = 0;i < 5;i++) {
//		printf("a[%d] = %d\n", i, a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[18] = "Nice to see you!";
//	printf("%s\n", a);
//	/*맨 마지막에는 아무것도 없다. \0으로 표현되어 있는데 이것은 공백과는 달리 '비어있다' 라는 뜻이다. 
//	그럼 왜 비어있다를 쓰는가 하면 컴퓨터가 문자의 끝을 인식하게 하기 위해서 이다. 그래서 문자열을 배열로 초기화하디 위해서는 항상
//	배열을 한칸 더 잡아줘야 한다.*/
//
//	//배열값을 꽉 차게 잡는다면?
//	char b[3] = "abc";
//	printf("%s", b);
//}

//#include <stdio.h>
//int main() {
//	char nArr[18] = "Nice to meet you";
//	printf("nArr의 크기 %d\n", sizeof(nArr));//18
//	printf("NULL의 문자형 출력 %c\n", nArr[17]);//아무것도 출력되지 않는다.
//	printf("NULL의 문자 정수형 출력 %d\n",nArr[17]);//0
//
//	nArr[16] = '?';
//	printf("nArr : %s", nArr);// nice to meet you?
//}

//#include<stdio.h>
//int main()
//{
//	char nu = '\0';	// 널 문자 저장
//	char sp = ' ';	// 공백 문자 저장
//	printf("null값의 아스키코드 값은 : %d\n", nu);
//	printf("공백의 아스키코드 값은 : %d\n", sp);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a[6];
//	for (int i = 0;i < 5;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 5;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[6];
//	for (int i = 0;i < 5;i++) {
//		scanf(" %c", &a[i]);
//	}
//	for (int i = 0;i < 5;i++) {
//		printf("%c ", a[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int cnt = 0; // 이름의 길이를 세는 변수
//	char sName[100], sNum[10]; // 이름과 학번을 문자열로 저장하는 배열
//	printf("이름을 영어로 입력하세요 : ");
//	scanf("%s", sName); // 이름을 문자열로 입력받기
//
//	while (sName[cnt] != '\0')
//	{
//		cnt++;
//	}
//
//	printf("%d", cnt);
//	return 0;
//}

/*중괄호를 블록스코프라고 한다.
swich case문
else if나 if문에서 참이냐 거짓이냐로 판단을 할 수 있다는 것을 기억해야 한다.
배열을 초기화 하지 않고 몇몇만 초기화를 하면 나머지의 값은 0이 된다.
배열은 항상 0부터 시작한다. 즉 int a[10]을 했으면 0부터 9까지의 배열이 만들어진 것이다.
*/

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a;i++) {
//		for (int j = 1;j <= a;j++)
//			printf("*");
//		printf("\n");
//	}
//}

//#include <stdio.h>//             과학 주기율표
//int main() {
//	int i;
//	//scanf("%d", &i);
//	for (int i = 1; i <= 20; i++) {
//		switch (i)
//		{
//		case 1:
//			printf("H                  ");
//			break;
//		case 2:
//			printf("He\n");
//			break;
//		case 3:
//			printf("Li ");
//			break;
//		case 4:
//			printf("Be  ");
//			break;
//		case 5:
//			printf("B  ");
//			break;
//		case 6:
//			printf("C ");
//			break;
//		case 7:
//			printf("N ");
//			break;
//		case 8:
//			printf("O  ");
//			break;
//		case 9:
//			printf("F ");
//			break;
//		case 10:
//			printf("Ne\n");
//			break;
//		case 11:
//			printf("Na ");
//			break;
//		case 12:
//			printf("Ma ");
//			break;
//		case 13:
//			printf("Al ");
//			break;
//		case 14:
//			printf("Si ");
//			break;
//		case 15:
//			printf("P ");
//			break;
//		case 16:
//			printf("S ");
//			break;
//		case 17:
//			printf("Cl ");
//			break;
//		case 18:
//			printf("Ar\n");
//			break;
//		case 19:
//			printf("K  ");
//			break;
//		case 20:
//			printf("Ca ");
//			break;
//		default:
//			printf("어쩔");
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	long long int a, b, c, d = 0;
//	int i = 1;
//	scanf("%ld %ld %ld", &a, &b, &c);
//	for (i = 1;1;i++) {
//		d += a + b * i;
//		c *= i;
//		if (c > d) {
//			break;
//		}
//	}
//	printf("%d", i);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	int b = a*2;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= b;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= i*2-1;j++) {
//			printf("*");
//		}
//		printf("\n");
//		b -= 2;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	int b = a;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= b;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= i;j++) {
//			printf("%d",j);
//		}
//		printf("\n");
//		b --;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, c = 0;
//	scanf("%d", &a);
//	int b = a;
//	char t='A';
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= b;j++) {
//			printf("%c ",t++);
//		}
//		for (int j = 1;j < i;j++) {
//			printf("%d ",c++);
//		}
//		printf("\n");
//		b --;
//	}
//}

//#include <stdio.h>
//int main (){
//	int a, b = 1,c;
//	scanf("%d", &a);
//	c = a;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j < i;j++) {
//			printf("  ");
//		}
//		for (int j = 1;j <= c;j++) {
//			printf("%2d", b++);
//		}
//		c--;
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a; 
//	scanf("%d", &a);
//	int b = a - 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("#");
//		}
//		printf("\n");
//	}
//	for (int i = 1;i <= a - 1;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= b;j++) {
//			printf("#");
//		}
//		printf("\n");
//		b--;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 1;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a;j++) {
//			printf("%d ", b);
//			b += 2;
//			b %= 10;
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 11:
//	case 12:
//	case 13:
//		printf("%dth", a);
//		return 0;
//	default:
//		break;
//	}
//	switch (a % 10)
//	{
//	case 1:
//		printf("%dst", a);
//		break;
//	case 2:
//		printf("%ded", a);
//		break;
//	case 3:
//		printf("%drd", a);
//		break;
//	default:
//		printf("%dth", a);
//		break;
//	}
//}

//#include <stdio.h>
//int main() {
//	double c, a, b, d, e, f;
//	scanf("%lf %lf", &a, &b);
//	e = a;
//	f = b;
//	for (int i = 1;i < b;i++) {
//		e *= a;
//	}
//	for (int i = 1;i < a;i++) {
//		f *= b;
//	}
//	c = (a + b > a - b) ? a + b : a - b;
//	d = (c > b - a) ? c : b - a;
//	c = (d > a * b) ? d : a * b;
//	d = (c > a / b) ? c : a / b;
//	c = (d > b / a) ? d : b / a;
//	d = (c > e) ? c : e;
//	c = (d > f) ? d : f;
//	printf("%.6lf", c);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//
//	if (a % b == 0 && a >= b) {
//		c = a / b;
//		printf("%d*%d=%d", b, c, a);
//	}
//	else if (b % a == 0 && b >= a) {
//		c = b / a;
//		printf("%d*%d=%d", a, c, b);
//	}
//	else printf("none");
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	switch (a+b+c+d)
//	{
//	case 0:
//		printf("모");
//		break;
//	case 1:
//		printf("도");
//		break;
//	case 2:
//		printf("개");
//		break;
//	case 3:
//		printf("걸");
//		break;
//	case 4:
//		printf("윷");
//		break;
//	default:
//		break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	switch (a)
//	{
//	case 1:
//		c = 400;
//		break;
//	case 2:
//		c = 340;
//		break;
//	case 3:
//		c = 170;
//		break;
//	case 4:
//		c = 100;
//		break;
//	case 5:
//		c = 70;
//		break;
//	default:
//		break;
//	}
//	switch (b)
//	{
//	case 1:
//		d = 400;
//		break;
//	case 2:
//		d = 340;
//		break;
//	case 3:
//		d = 170;
//		break;
//	case 4:
//		d = 100;
//		break;
//	case 5:
//		d = 70;
//		break;
//	default:
//		break;
//	}
//	if (c + d > 500) printf("angry");
//	else printf("no angry");
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d, e, f, g;
//	scanf("%d %d %d", &a, &b, &c);
//	d = (a > b) ? a : b;
//	e = (d > c) ? d : c;//최댓값
//	d = (a < b) ? a : b;
//	f = (d < c) ? d : c;//최솟값
//	g = (a + b + c) - (f + e);//중간값
//	if (e < f + g) printf("yes");
//	else printf("no");
//}

//#include <stdio.h>
//int main() {
//	int a, yy;
//	scanf("%d %d", &yy, &a);
//	switch (a)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		printf("31");
//		return 0;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("30");
//		return 0;
//	default:
//		break;
//	}
//	if ((yy % 400 == 0 || yy % 4 == 0 && yy % 100 != 0) && a == 2) {
//		printf("29");
//	}
//	else printf("28");
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b - c) printf("advertise");
//	else if (a > b - c) printf("do not advertise");
//	else printf("does not matter");
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d, e, f, g;
//	scanf("%d %d %d", &a, &b, &c);
//	d = (a > b) ? a : b;
//	e = (d > c) ? d : c;//최댓값
//	d = (a < b) ? a : b;
//	f = (d < c) ? d : c;//최솟값
//	g = (a + b + c) - (f + e);//중간값
//	if (e >= f + g) {
//		printf("삼각형 아님");
//		return 0;
//	}
//	if (a == b && b == c) {
//		printf("정삼각형");
//	}
//	else if (a * a + b * b == c * c) {
//		printf("직각삼각형");
//	}
//	else if (a == b || b == c || a == c) {
//		printf("이등변삼각형");
//	}
//	else {
//		printf("삼각형");
//	}
//}

//#include <stdio.h>
//int main() {
//	int time, one, two;
//	scanf("%d %d %d", &time, &one, &two);
//	for (int i = time;i < 90;i += 5) {
//		one++;
//	}
//	if (one > two) printf("win");
//	else if (one == two) printf("same");
//	else printf("lose");
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0, c = 0;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		if (a % i == 0 && i != 1 && i != a) {
//			b = 1;
//			printf("%d로 나누어 떨어집니다.\n", i);
//			c++;
//		}
//	}
//	if (b == 0) printf("소수입니다.");
//	else printf("\n소수가 아닙니다.\n%d번 나누어 떨어집니다.", c);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a[5];
//	for (int i = 0;i < 5;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 5;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[6];
//	for (int i = 0;i <= 4;i++) {
//		scanf(" %c", &a[i]);
//	}
//	for (int j = 0;j <= 4;j++) {
//		printf("%c ", a[j]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int cnt = 0; // 이름의 길이를 세는 변수
//	char sName[100], sNum[10]; // 이름과 학번을 문자열로 저장하는 배열
//	printf("이름을 영어로 입력하세요 : ");
//	scanf("%s", sName); // 이름을 문자열로 입력받기
//	printf("학번을 입력하세요 : ");
//	scanf("%s", sNum);
//
//	while (sName[cnt] != '\0')
//	{
//		cnt++;
//	}
//
//	printf("당신의 이름은%s(%d글자)이고 학번은 %s입니다.", sName, cnt, sNum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[100] = "I love C programming!"; // str 배열에 문자열로 초기화
//	printf("저장된 문자열 : %s\n", str); // str 배열 값 출력
//
//	str[10] = '\0'; // 인덱스 값 10인 str 배열 값에 null값 저장
//	printf("null값 전까지 문자열 : %s\n", str);
//
//	str[7] = '\0'; // 인덱스 값 7인 str 배열 값에 null값 저장
//	printf("null값 전까지 문자열 : %s\n", str);
//
//	str[3] = '\0'; // 인덱스 값 3인 str 배열 값에 null값 저장
//	printf("null값 전까지 문자열 : %s\n", str);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num[10];
//	for (int i = 0; i < 10; i++) {
//		num[i] = i + 1;
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num[10], a = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//		a += num[i];
//	}
//	printf("입력한 수의 합계%d\n입력한 수의 평균%d", a, a / 10);
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	int a[123] = { 0 }, i = 0;
//	do
//	{
//		scanf("%d", &a[i]);
//		i++;
//	} while (a[i - 1] != 0);
//
//	for (int j = i - 2;j >= 0;j--) {
//		printf("%d ", a[j]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10], num = 0;
//	for (int i = 0;i <= 9;i++) {
//		scanf("%d", &a[i]);
//		num = (num > a[i]) ? num : a[i];
//	}
//	printf("%d", num);
//}

//#include <stdio.h>
//int main() {
//	char a[11];
//	for (int i = 0;i < 10;i++) {
//		scanf(" %c", &a[i]);
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%c", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[27];
//	for (int i = 0;i < 26;i++) {
//		a[i] = 'A' + i;
//	}
//	for (int i = 0;i < 26;i++) {
//		printf("%c ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10];
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10];
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("%d %d %d", a[2], a[4], a[9]);
//}

//#include <stdio.h>
//int main() {
//	char a[10];
//	for (int i =0;i < 10;i++) {
//		scanf(" %c", &a[i]);
//	}
//	printf("%c %c %c", a[0], a[3], a[6]);
//}

//#include <stdio.h>
//int main() {
//	int a[100] = { 0 }, i = 0, b;
//	for (i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 0) break;
//	}
//	b = i;
//	for (int i = 0; i < b;i++) {
//		if (i % 2 == 0) continue;
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[100], i, j;
//	for (i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 0) break;
//	}
//	for (int j = i - 1;j >= 0;j--) {
//		printf("%d ", a[j]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int year, month, day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	scanf("%d %d", &year, &month);
//	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) day[2] = 29;
//	if (month <= 0 || month >= 13) {
//		printf("잘못입력하셨습니다."); 
//		return 0;
//	}
//	printf("%d", day[month]);
//}

//#include <stdio.h>
//int main() {
//	float a[7] = { 0,85.6, 79.5, 83.1, 80.0, 78.2 ,75.0 }, b = 0;
//	int c, d, e;
//	scanf("%d %d", &c, &d);
//	printf("%.1f", a[c] + a[d]);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		b = (b > a[i]) ? b : a[i];
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		b = (b < a[i]) ? b : a[i];
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0, c = 0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] % 2 == 0) b = (b > a[i]) ? b : a[i];
//		else c = (c < a[i]) ? c : a[i];
//	}
//	printf("%d %d", b, c);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0, c = 0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		if (c == 0 && a[i] > 100) c = a[i];
//		if (a[i] < 100) b = (b > a[i]) ? b : a[i];
//		else  c = (c < a[i]) ? c : a[i];
//	}
//	printf("%d %d", b, c);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0, i;
//	for (i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		b += a[i];
//	}
//	printf("총점 : %d\n평균 : %.1f", b, (float)b / i);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0, c = 0, i;
//	for (i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		if (i % 2 == 1) b += a[i];
//		else c += a[i];
//	}
//	printf("합계 : %d\n평균 : %.1f", b, (float)c / (i / 2));
//}

//#include <stdio.h>
//int main() {
//	int a[5] = { 95, 75,85,100,50 }, b = 0;
//	for (int i = 0;i < 4;i++) {
//		for (int j = i + 1;j < 5;j++) {
//			if (a[i] > a[j]) {
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//	for (int i = 0;i < 5;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10], b = 0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 9;i++) {
//		for (int j = i + 1;j < 10;j++) {
//			if (a[i] < a[j]) {
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[10], i;
//	for (i = 0;i < 10;i++) {
//		scanf(" %c", &a[i]);
//	}
//	for (int j = i-1;j >= 0;j--) {
//		printf("%c ", a[j]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[5];
//	for (int i = 0;i < 5;i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("%d", a[0] + a[2] + a[4]);
//}

//#include <stdio.h>
//int main() {
//	int a[10], b;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 9;i++) {
//		for (int j = i + 1;j < 10;j++) {
//			if (a[i] < a[j]) {
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a[10], odd = 0, even = 0;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//		if (i % 2 == 0)odd += a[i];
//		else even += a[i];
//	}
//	printf("odd : %d\neven : %d", odd, even);
//}

//#include <stdio.h>
//int main() {
//	int a[100] = { 0 }, i;
//	for (i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == -1) break;
//	}
//	for (int j = i - 3;j < i;j++) {
//		printf("%d ", a[j]);
//	}
//}

//#include <stdio.h>
//int 
// () {
//	float a[6], b = 0;
//	for (int i = 0;i < 6;i++) {
//		scanf("%f", &a[i]);
//		b += a[i];
//	}
//	printf("%.1f", b / 6);
//}

//#include <stdio.h>
//int main() {
//	char a[7] = { "JUNGOL" }, b;
//	int o = 0;
//	scanf("%c", &b);
//	for (int i = 0;i < 7;i++) {
//		if (b == a[i]) {
//			printf("%d", i);
//			return 0;
//		}
//	}
//	printf("none");
//}
//

//#include <stdio.h>
//int main() {
//	int a[100], big = -999, small = 999;
//	for (int i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 999) break;
//		big = (big > a[i]) ? big : a[i];
//		small = (small < a[i]) ? small : a[i];
//	}
//	printf("%d\n%d", big, small);
//}

//#include <stdio.h>
//int main() {
//	int a[100], b = 0, c = 0;
//	for (int i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 0) break;
//		if (a[i] % 5 == 0) {
//			b += a[i];
//			c++;
//		}
//	}
//	printf("5의 배수 : %d\n합계 : %d\n평균 : %.1f", c, b, (float)b / c);
//}

//#include <stdio.h>
//int main() {
//	int a[100], b = 0, i;
//	for (i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 0) break;
//		b++;
//	}
//	for (int j = 0;j < i;j++) {
//		if (a[j] % 2 == 0) printf("%d ", a[j] / 2);
//		else printf("%d ", a[j] * 2);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b[999], c = 0;
//	scanf("%d", &a);
//	for (int i = 0;i < a;i++) {
//		scanf("%d", &b[i]);
//	}
//	for (int i = 0;i < a - 1;i++) {
//		for (int j = i + 1;j < a;j++) {
//			if (b[i] <= b[j]) {
//				c = b[i];
//				b[i] = b[j];
//				b[j] = c;
//			}
//		}
//	}
//	for (int i = 0;i < a;i++) {
//		printf("\n%d", b[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[100], b = 1001;
//	for (int i = 0;i < 100;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] >= 1000) break;
//		b = (b < a[i]) ? b : a[i];
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b = 0, c = 10001;
//	for (int i = 0;i < 1000;i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 0) break;
//		if (a[i] % 2 == 0) b = (b > a[i]) ? b : a[i];
//		else c = (c < a[i]) ? c : a[i];
//	}
//	printf("짝수의 가장 큰 수 : %d\n홀수의 가장 작은 수 : %d", b, c);
//}

//#include <stdio.h>
//int main() {
//	int a[5] = { 99,78,62,3,100 }, b = 0;
//	for (int i = 0;i < 4;i++) {
//		for (int j = i + 1;j < 5;j++) {
//			if (a[i] > a[j]) { //내림차순으로 정리할려면 부호만 반대로 뒤집으면 된다.
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//	for (int i = 0;i < 5;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a;
//	int b[26] = { 0 };
//	for (int i = 0;i < 10000;i++) {
//		scanf(" %c", &a);
//		if (a <= 96 || a >= 122) break;
//		else b[a - 97]++;
//	}
//	for (int i = 0;i < 26;i++) {
//		if (b[i]!=0)
//			printf("%c:%d\n", i + 97, b[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	char e;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	a *= d;
//	c *= b;
//	e = (a > c) ? '>' : (c > a) ? '<' : '=';
//	printf("%c", e);
//}

//#include <stdio.h>
//int main() {
//	int a[7], b[6], c = 0, d = 0;
//	for (int i = 0;i < 7;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 6;i++) {
//		scanf("%d", &b[i]);
//	}
//	for (int i = 0;i < 6;i++) {
//		for (int j = 0;j < 6;j++) {
//			if (a[i] == b[j]) {
//				c++;
//			}
//			if (a[6] == b[j]) {
//				d = 1;
//			}
//		}
//	}
//	switch (c)
//	{
//	case 6:
//		if (d == 0) {
//			printf("1");
//		}
//		break;
//	case 5:
//		if (d == 1) {
//			printf("2");
//		}
//		else {
//			printf("3");
//		}
//		break;
//	case 4:
//		printf("4");
//		break;
//	case 3:
//		printf("5");
//		break;
//	default:
//		printf("0");
//		break;
//	}
//}

//#include <stdio.h>
//int main() {
//	double a, b, c, d;
//	scanf("%lf %lf", &a, &b);
//	d = (a - 100) * 0.9;
//	c = (b - d) *100 / d;
//	if (c <= 10) printf("정상");
//	else if (c > 10 && c <= 20) printf("과체중");
//	else if (c > 20) printf("비만");
//}

//#include <stdio.h>
//int main() {
//	int a[1000] = { 0 }, b, c = 0;
//	while (1)
//	{
//		scanf("%d", &b);
//		if (b == 0) break;
//		a[b % 10]++;
//	}
//	for (int i = 0;i < 1000;i++) {
//		if (a[i] != 0) {
//			printf("일의 자리 숫자 %d : %d\n", i, a[i]);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[1000] = { 0 }, b;
//	while (1)
//	{
//		scanf("%d", &b);
//		if (b == 0) break;
//		a[b / 10]++;
//	}
//	for (int i = 0;i < 1000;i++) {
//		if (a[i] != 0) {
//			printf("십의 자리 숫자 %d : %d\n", i, a[i]);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[1000] = { 0 }, b, i;
//	a[0] = 50;
//	scanf("%d", &a[1]);
//	for (i = 2;;i++) {
//		a[i] = a[i - 2] - a[i - 1];
//		if (a[i] < 0) {
//			break;
//		}
//	}
//	for (i = 0;1;i++) {
//		printf("%d ", a[i]);
//		if (a[i] < 0) break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b, c;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {//미완성
//		scanf("%d", a[i]);
//	}
//	for (int i = 0;i < b;i++) {
//		prinf("%d",a[])
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[11] = { 0 }, b;
//	while (1)
//	{
//		scanf("%d", &b);
//		if (b < 1 || b>10) break;;
//		a[b]++;
//	}
//	for (int i = 1;i < 11;i++) {
//		if (a[i] != 0) {
//			printf("%d : %d\n", i, a[i]);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[26] = { 0 };
//	char b;
//	while (1)
//	{
//		scanf(" %c", &b);
//		if (b < 65 || b>90) break;
//		a[b - 65]++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (a[i] != 0) printf("%c : %d\n", i + 65, a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[40] = { 1,1 }, b;
//	for (int i = 2;i < 40;i++) {
//		a[i] = a[i - 2] + a[i - 1];
//	}
//	scanf("%d", &b);
//	printf("파보나치 수열%d항 : %d", b, a[b - 1]);
//}

//#include <stdio.h>
//int main() {
//	int a[100] = { 0 };
//	a[0] = 100;
//	scanf("%d", &a[1]);
//	for (int i = 2;i < 100;i++) {
//		a[i] = a[i - 2] - a[i-1];
//		if (a[i] < 0) break;
//	}
//	for (int i = 0;i < 100;i++) {
//		printf("%d ", a[i]);
//		if (a[i] < 0) break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[6] = { 0 }, b;
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &b);
//		a[b - 1]++;
//	}
//	for (int i = 0;i < 6;i++) {
//		printf("%d : %d\n", i + 1, a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10] = { 0 }, b;
//	while (1)
//	{
//		scanf("%d", &b);
//		if (b == 0) break;
//		a[b / 10 - 1]++;
//	}
//	for (int i = 0;i < 10;i++) {
//		if (a[i] != 0) {
//			printf("%d : %d\n", (i + 1) * 10, a[i]);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10], b;
//	scanf("%d %d", &a[0], &a[1]);
//	for (int i = 2;i < 10;i++) {
//		a[i] = (a[i - 2] + a[i - 1]) % 10;
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	double a, b, c, d;
//	scanf("%lf %lf", &a, &b);
//	if (a < 150) c = a - 100;
//	else if (a >= 150 && a < 160) c = (a - 150) / 2 + 50;
//	else if (a >= 160) c = (a - 100) * 0.9;
//	d = (b - c) * 100 / c;
//	if (d <= 10) printf("정상");
//	if (d > 10 && d <= 20) printf("과체중");
//	if (d > 20) printf("비만");
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a - 170) < 1) {
//		printf("CRASH %d", a);
//		return 0;
//	}
//	if ((b - 170) < 1) {
//		printf("CRASH %d", b);
//		return 0;
//	}
//	if ((c - 170) < 1) {
//		printf("CRASH %d", c);
//		return 0;
//	}
//	else printf("PASS");
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	char c;
//	scanf("%d%c%d", &a, &c, &b);
//	switch (c)
//	{
//	case '+':
//		printf("%d", a + b);
//		break;
//	case '-':
//		printf("%d", a - b);
//		break;
//	case '*':
//		printf("%d", a * b);
//		break;
//	case '/':
//		printf("%.2f", (float)a / b);
//		break;
//	default:
//		break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//scan:
//	scanf("%d", &a);
//	if (a != 0) {
//		printf("%d\n", a);
//		goto scan;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d", &a);
//scan:
//	scanf("%d", &b);
//	if (a-- != 0) {
//		printf("%d\n", b);
//		goto scan;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a = 1;
//	while (a != 0)
//	{
//		scanf("%d", &a);
//		if (a != 0) {
//			printf("%d\n", a);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = a;i >= 1;i--) {
//		printf("%d\n", a--);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	while (a!=0)
//	{
//		printf("%d\n", --a);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a, b = 'a';
//	scanf("%c", &a);
//	do
//	{
//		printf("%c ", b++);
//	} while (a >= b);
//}

//#include <stdio.h>
//int main() {
//	
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", arr + 2);
//	printf("%p\n", arr + 3);
//	printf("%p\n", arr + 4);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 0;i <= a;i++) {
//		printf("%d\n", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0;
//	scanf("%d", &a);
//	for (int i = 0;i <= a;i++) {
//		if (a % 2 == 0) {
//			b += i;
//		}
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	char a[1000];
//	for (int i = 0;1;i++) {
//		scanf(" %c", &a[i]);
//		if (a[i] == 'q') break;
//	}
//	for (int i = 0;1;i++) {
//		printf("%c\n", a[i]);
//		if (a[i] == 'q') break;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, i = 0;
//	scanf("%d", &a);
//	while (a>=b)
//	{
//		i++;
//		b += i;
//	}
//	printf("%d", i);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		if (i % 3 == 0) printf("X ");
//		else printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0, i;
//	scanf("%d", &a);
//	for (i = 1;1;i++) {
//		b += i;
//		if (b >= a) break;
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i < a;i++) {
//		if (i % 3 == 0) continue;
//		printf("%d", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, e = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	e = a;
//	for (int i = 1;i < c;i++) {
//		e += b;
//	}
//	printf("%d", e);
//}

//#include <stdio.h>
//int main() {
//	long long int a, b, c, e = 0;
//	scanf("%lld %lld %lld", &a, &b, &c);
//	e = a;
//	for (int i = 1;i < c;i++) {
//		e *= b;
//	}
//	printf("%lld", e);
//}

//#include <stdio.h>
//int main() {
//	long long int a, b, c, d, e = 0;
//	scanf("%lld %lld %lld %lld", &a, &b, &d, &c);
//	e = a;
//	for (int i = 1;i < c;i++) {
//		e *= b;
//		e += d;
//	}
//	printf("%lld", e);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, i;
//	scanf("%d %d %d", &a, &b, &c);
//	for (i = 1;1;i++) {
//		if (i % a == 0 && i % b == 0 && i % c == 0) break;
//	}
//	printf("%d", i);
//}

//#include <stdio.h>
//int main() {
//	for (int i = 1;i <= 100;i++) {
//		printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d;
//	scanf("%d %d", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a + b) - c;
//	for (int i = d;i <= c;i++) {
//		printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	char a, b, c, d;
//	scanf("%c %c", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a + b) - c;
//	for (char i = d;i <= c;i++) {
//		printf("%c ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	double a, b, c, d;
//	scanf("%lf %lf", &a, &b);
//	c = (a > b) ? a : b;
//	d = (a + b) - c;
//	for (double i = d;i <= c+0.01;i+=0.01) {
//		printf("%.2lf ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		printf("*");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = a;i <= b;i++) {
//		if (i % 2 == 1) printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		b += i;
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a;i <= b;i++) {
//		if (i % 3 == 0) c += i;
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	int a[10] = { 0 };
//	for (int i = 0;i < 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < 10;i++) {
//		if (a[i] % 5 == 0) {
//			printf("%d", a[i]);
//			return 0;
//		}
//	}
//	printf("0");
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= 9;i++) {
//		printf("%d*%d=%d\n", a, i, i * a);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b, c = 0;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < b;i++) {
//		c += a[i];
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b, c = 0;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < b;i++) {
//		if (a[i] % 2 == 1) c++;
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d, e = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	for (int i = 1;i < d;i++) {
//		a = a * b + c;
//	}
//	printf("%d", a);
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		if (i % 10 == 1) b++;
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a[1000] = { 0 }, c = 0, b;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//		c = (c > a[i]) ? c : a[i];
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	//int b, c;
//	//scanf("%d %d", &b, &c);
//	int a[3][4];
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 4;j++) {
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10][10];
//	for (int i = 2;i < 10;i++) {
//		for (int j = 1;j < 10;j++) {
//			a[i][j] = i * j;
//		}
//	}
//	for (int i = 2;i < 10;i++) {
//		for (int j = 1;j < 10;j++) {
//			printf("%2d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5][5] = {
//		{1,2,3,4,5},
//		{6,7,8,9},
//		{10,11,12},
//		{13,14},
//		{15}
//	};
//	for (int i = 0;i < 5;i++) {
//		for (int j = 0;j < 5;j++) {
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][3];
//	int cnt = 0;
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			arr[i][j] = ++cnt;
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a[5][4], b[5] = { 0 }, c = 0;
//	for (int i = 0;i < 5;i++) {
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &a[i][j]);
//			b[i] += a[i][j];
//		}
//		b[i] /= 4;
//	}
//	for (int i = 0;i < 5;i++) {
//		if (b[i] >= 80) {
//			printf("pass\n");
//			c++;
//		}
//		else printf("fighting\n");
//	}
//	printf("합격한 사람 수 : %d", c);
//}

//#include <stdio.h>
//int main() {
//	int a[10000000] = { 0 }, b, c, d, e = 1, f = 1;
//	scanf("%d %d", &b, &c);
//	d = (b > c) ? b : c;
//	c = (b + c) - d;
//	b = d;
//	for (int i = 0;i < b;i++) {
//		if (i % 2 == 0) {
//			a[i] = e++;
//		}
//		else a[i] = 10 * f++;
//	}
//	printf("%d", a[b-1] + a[c-1]);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		if (a % i == 0) printf("%d ", i);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 2;i < a;i++) {
//		if (a % i == 0) {
//			printf("not prime");
//			return 0;
//		}
//	}
//	printf("prime");
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	c = a;
//	if (b == 0) {
//		printf("1");
//		return 0;
//	}
//	for (int i = 1;i < b;i++) {
//		a *= c;
//	}
//	printf("%d", a);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d", &a);
//	b = a;
//	while (b!=1)
//	{
//		a *= --b;
//	}
//	printf("%d", a);
//}

//#include <stdio.h>
//int main() {
//	int a, b[100];
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		scanf("%d", &b[i]);
//	}
//	printf("%d %d %d", b[1], b[a / 2 + 1], b[a]);
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0;
//	scanf("%d", &a);
//	for (int i = 1;;i*=10) {
//		b++;
//		if (a / i >= 10) continue;
//		break;
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a;i <= b;i++) {
//		if (i % 2 == 0) {
//			c -= i;
//		}
//		else {
//			c += i;
//		}
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a;i <= b;i++) {
//		if (i % 2 == 0) {
//			c -= i;
//			printf("%d", -i);
//		}
//		else {
//			c += i;
//			printf("+%d", i);
//		}
//	}
//	printf("=%d", c);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a;i <= b;i++) {
//		if (i % 2 == 0) {
//			c -= i;
//			printf("%d", -i);
//		}
//		else if (i ==a) {
//			c += i;
//			printf("%d", i);
//		}
//		else {
//			c += i;
//			printf("+%d", i);
//		}
//	}
//	printf("=%d", c);
//}

//#include<stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 0;;i++) {
//		for (int j = 0;j<=a;j++) {
//			if (j * j == a) {
//				printf("%d %d", i, j);
//				return 0;
//			}
//		}
//		a--;
//	}
//}

//#include<stdio.h>
//#include <math.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 0;;i++) {
//		if ((int)sqrt(a) * (int)sqrt(a) == a) {
//			printf("%d %d", i, (int)sqrt(a));
//			return 0;
//		}
//		a--;
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[3][4], b[3][4], c[3][4];
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 4;j++) {
//			c[i][j] = a[i][j] * b[i][j];
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 4;j++) {
//			printf("%d\t", c[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[4][4];
//	for (int i = 0;i < 4;i++) {
//		for (int j = 0;j < 4;j++) {
//			scanf(" %c", &a[i][j]);
//		}
//	}
//	for (int i = 0;i < 4;i++) {
//		for (int j = 0;j < 4;j++) {
//			printf("%c\t", a[i][j] + 32);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[3][3];
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j] == 0) a[i][j] = 1;
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == ' ') break;
//	}
//	for (int j = 0;j < i;j++) {
//		if (a[j] >= 65 && a[j] <= 90) {
//			printf("%c", a[j] + 32);
//		}
//		if (a[j] >= 97 && a[j] <= 122) {
//			printf("%c", a[j] - 32);
//		}
//		if (a[j] >= 48 && a[j] <= 57) {
//			printf("%d", a[j] - 48);
//		}
//	}
//}

//#inclde <stdio.h>
//int main() {
//	char a[10000];
//	int b = 0;
//	for (int i = 0;i < 10000;i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == ' ') break;
//		b += a[i] - 48;
//	}
//	if (b % 3 == 0) printf("1");
//	else printf("0");
//}

//#include <stdio.h>
//int main() {
//	int a[100][100], n, k = 1;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < n;j++) {
//			a[i][j] = k++;
//			printf("%2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[100][100], b;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		for (int j = 0;j < b;j++) {
//			a[i][j] = ((i + 1) * b) - j;
//		}
//	}
//	for (int i = 0;i < b;i++) {
//		for (int j = 0;j < b;j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[100][100], b;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		for (int j = 0;j < b;j++) {
//
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	char a;
//	scanf("%c", &a);
//	printf("%c", a + 1);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a / b);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a % b);
//}

//#include <stdio.h>
//int main() {
//	long long int a;
//	scanf("%lld", &a);
//	printf("%lld", ++a);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	printf("%d\n", a % b);
//	printf("%.2f\n", (float)a / (float)b);
//}

//#include <stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", (a + b + c));
//	printf("%.1f", (float)(a + b + c) / 3);
//}

//#include <stdio.h>
//int main() {
//	int a[3][3] = { {3,5,4},{2,6,7},{8,10,1} };
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[3][5] = { {5,8,10,6,4},{11,20,1,13,2},{7,9,14,22,3} };
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 5;j++) {
//			printf("%2d   ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[3][3], b[3][3], c[3][3];
//	for (int i = 0;i < 3;i++) {
//		printf("첫번째 배열의 %d행", i + 1);
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		printf("두번째 배열의 %d행", i + 1);
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			c[i][j] = a[i][j] + b[i][j];
//			printf("%2d ", c[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[2][4], b[2][4], c[2][4];
//	for (int i = 0;i < 2;i++) {
//		printf("첫번째 배열의 %d행", i + 1);
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0;i < 2;i++) {
//		printf("두번째 배열의 %d행", i + 1);
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (int i = 0;i < 2;i++) {
//		for (int j = 0;j < 4;j++) {
//			c[i][j] = a[i][j] * b[i][j];
//			printf("%2d ", c[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[3][3], b[4] = { 0 }, c = 0;
//	for (int i = 0;i < 3;i++) {
//		printf("%d번째 학생 : ", i + 1);
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("    국어 영어 수학 총점\n");
//	for (int i = 0;i < 3;i++) {
//		printf("%d번",i + 1);
//		for (int j = 0;j < 3;j++) {
//			printf("%5d", a[i][j]);
//			b[i] += a[i][j];
//			c += a[i][j];
//		}
//		printf("%5d\n", c);
//		c = 0;
//	}
//	printf("합계");
//	for (int i = 0;i < 4;i++) {
//		printf("%5d", b[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[5][4], b = 0, c[5] = { 0 };
//	for (int i = 0;i < 5;i++) {
//		for (int j = 0;j < 4;j++) {
//			scanf("%d", &a[i][j]);
//			c[i] += a[i][j];
//		}
//	}
//	for (int i = 0;i < 5;i++) {
//		if (c[i]/4 >= 80) {
//			printf("pass\n");
//			b++;
//		}
//		else printf("fall\n");
//	}
//	printf("Successfull : %d", b);
//}

//#include <stdio.h>
//int main() {
//	int a[6][6] = { 0 };
//	scanf("%d", &a[1][1]);
//	for (int i = 2;i < 6;i++) {
//		for (int j = 1;j < 6;j++) {
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (int i = 0;i < 6;i++) {
//		for (int j = 0;j < 6;j++) {
//			if (a[i][j] != 0) {
//				printf("%d ", a[i][j]);
//			}
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[7][6] = { 0 };
//	scanf("%d", &a[1][1]);
//	for (int i = 2;i < 7;i++) {
//		for (int j = 1;j < 6;j++) {
//			a[i][j] = a[i - 1][j] + a[i][j - 1];
//		}
//	}
//	for (int i = 2;i < 7;i++) {
//		for (int j = 1;j < 6;j++) {
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[4][3] = { 3,5,9,2,11,5,8,30,10,22,5,1 }, b = 0;
//	for (int i = 0;i < 4;i++) {
//		for (int j = 0;j < 3;j++) {
//			b += a[i][j];
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a[4][3], b[4] = { 0 };
//	for (int i = 0;i < 4;i++) {
//		printf("%dclass? : ", i + 1);
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &a[i][j]);
//			b[i] += a[i][j];
//		}
//	}
//	for (int i = 0;i < 4;i++) {
//		printf("%d class : %d\n", i + 1, b[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[6][6] = { 0 };
//	a[1][1] = 1;
//	a[1][3] = 1;
//	a[1][5] = 1;
//	for (int i = 2;i < 6;i++) {
//		for (int j = 1;j < 6;j++) {
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
//		}
//	}
//	for (int i = 1;i < 6;i++) {
//		for (int j = 1;j < 6;j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[2][3], b[2][3];
//	printf("first array\n");
//	for (int i = 0;i < 2;i++) {
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("second array\n");
//	for (int i = 0;i < 2;i++) {
//		for (int j = 0;j < 3;j++) {
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (int i = 0;i < 2;i++) {
//		for (int j = 0;j < 3;j++) {
//			printf("%d ", a[i][j] * b[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[4][2], b[4][3] = {0};
//	for (int i = 0;i < 4;i++) {
//		for (int j = 0;j < 2;j++) {
//			scanf("%d", &a[i][j]);
//			b[i][0] += a[i][j];
//			if (j % 2 == 0) b[1][2] += a[i][j];
//			else b[1][1] += a[i][j];
//			b[0][1] += a[i][j];
//		}
//		b[i][0] /= 2;
//	}
//	b[1][2] /= 4;
//	b[1][1] /= 4;
//	for (int i = 0;i < 4;i++) {
//		printf("%d ",b[i][0]);
//	}
//	printf("\n%d %d\n%d", b[1][2], b[1][1], b[0][1] / 8);
//}

//                            드디어 함수다!

////이 코드는 함수 선언과 정의를 따로하는 것이다.
//#include <stdio.h>
////함수 선언 : 반환자료형, 함수이름, 매개변수 등을 기술하여 함수의 외향적 특징을 기술
//void printstar();//함수원형이라고 말한다.
////함수원형이 없으면 함수가 정의되어있지 않다고 나온다.
//int main() {
//	printstar();
//	printstar();
//}
////함수 정의하는 부분이다.
//void printstar() {
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//}

////함수정의와 동시에 정의하기.
//#include <stdio.h>
//void printstar() {//함수 선언과 정의
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//}
//int main() {
//	printstar();//함수 호출
//}

//#include <stdio.h>
//void print() {
//	printf("함수 호출 연습\n");
//}
//void line(){
//	printf("==============\n");
//}
//int main() {
//	line();
//	print();
//	line();
//}

//#include <stdio.h>
//void star1() {
//	printf("  *\n");
//}
//void star2() {
//	printf(" ***\n");
//
//}
//void star3() {
//	printf("*****\n");
//}
//int main() {
//	star1();
//	star2();
//	star3();
//	star2();
//	star1();
//}

//#include <stdio.h>
//void print() {
//	printf("나를 호출했니?\n");
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		print();
//	}
//}

//#include <stdio.h>
//void add() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//}
//void minus() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a - b);
//}
//void rhq() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a * b);
//}
//void sksna() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a / b);
//}
//void skajwl() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a % b);
//}
//int main() {
//	char a;
//	scanf("%c", &a);
//rPtks:
//	switch (a)
//	{
//	case '+':
//		add();
//		break;
//	case '-':
//		minus();
//		break;
//	case '*':
//		rhq();
//		break;
//	case '/':
//		sksna();
//		break;
//	case '%':
//		skajwl();
//		break;
//	default:
//		printf("야삐");
//		return 0;
//		break;
//	}
//	goto rPtks;
//}

//#include <stdio.h>
//void riri(int a, int b) {
//	printf("%d\n", a + b);
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	riri(a,b);
//}

//#include <stdio.h>
//void star(int cnt) {
//	for (int i = 1;i <= cnt;i++) {
//		printf("  *\n");
//		printf(" ***\n");
//		printf("*****\n");
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	star(a);
//}

//#include <stdio.h>
//int add(int, int);
//int main() {
//	int a, b, sum;
//	scanf("%d %d", &a, &b);
//	sum = add(a, b);//add함수를 호출한다.
//	printf("%d+%d=%d", a, b, sum);
//}
//int add(int n1,int n2)//여기서 int는 반환하는 자료형이int 라는 것이다.
//{
//	int n3 = n1 + n2;
//	return n3;//n3를 반환한다.
//}

//#include <stdio.h>
//// 함수 선언
//int multi_2(int a);
//int main()
//{
//	int num, nResult = 0;
//	scanf("%d", &num);
//	// 함수가 반환한 값을  대입하여 출력한다.
//	nResult = multi_2(num); // 1은 참, 0은 거짓
//	printf("입력받은 값은 2의 배수인가? : %d\n", nResult);
//
//	// 함수가 반환한 값에 * 100 연산을 수행하고 출력한다.
//	printf("반환 값 * 100 : %d\n", multi_2(num) * 100);
//
//		// 함수가 반환한 값을 출력한다.
//	printf("반환 값 : %d\n", multi_2(num));
//
//	return 0;
//}
//// 함수 정의
//int multi_2(int number)
//{
//	if (number % 2 == 0)
//		return 1;
//	else
//		return 0;
//}

//#include <stdio.h>
//int NumCompare(int num1, int num2);
//int main()
//{
//	int n1, n2;
//	while (1) {
//		scanf("%d %d", &n1, &n2);
//		if (n1 == 0 || n2 == 0) break;
//		printf("%d\n", NumCompare(n1, n2));
//	}
//	return 0;
//}
//int NumCompare(int num1, int num2)
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//}

//#include <stdio.h>
//int compare(int num1, int num2); // 절대값이 큰 수 반환
//int absvalue(int num); // 매개변수의 절대값을 반환
//int main()
//{
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	printf("%d", compare(num1, num2));
//	return 0;
//}
//int compare(int n1, int n2)
//{
//	if (absvalue(n1) > absvalue(n2))
//		return n1;
//	else
//		return n2;
//}
//int absvalue(int num)
//{
//	if (num < 0) {
//		return num*-1;
//	}
//	else return num;
//}

//#include <stdio.h>
//int min_value(int a,int b) {
//	if (a < b) {
//		return a;
//	}
//	else return b;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", min_value(a, b));
//}

//#include <stdio.h>
//int min_value(int a,int b,int c) {
//	if (a < b && a < c) return a;
//	if (b < a && b < c) return b;
//	if (c < b && c < a) return c;
//}
//int main() {
//	int a, b, c, min;
//	scanf("%d %d %d", &a, &b, &c);
//	min = min_value(a, b, c);
//	printf("%d", min);
//}

//#include <stdio.h>
//int prime(int a) {
//	for (int i = 2;i < a;i++) {
//		if (a % i == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (prime(a) == 1) {
//		printf("prime X");
//	}
//	else printf("prime");
//}

//#include <stdio.h>
//char grade(int a) {
//	switch (a/10)
//	{
//	case 10:
//	case 9:
//		return 'A';
//	case 8:
//		return 'B';
//	case 7:
//		return 'C';
//	case 6:
//		return 'D';
//	default:
//		return 'F';
//		break;
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%c", grade(a));
//}

//#include <stdio.h>
//char alpha(char a) {
//	if (a >= 97 && a <= 122) return a - 32;
//	else if(a>=65&&a<=90)  return a + 32;
//}
//int main() {
//	char a;
//	while (1)
//	{
//		scanf(" %c", &a);
//		if (a == 48) break;
//		printf("입력한 문자는 %c입니다.\n", alpha(a));
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b[100][100] = {0};
//	b[1][1] = 1;
//	scanf("%d", &a);
//	for (int i = 2;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			b[i][j] = b[i - 1][j] + b[i - 1][j - 1];
//		}
//	}
//	for (int i = a;i >= 0;i--) {
//		for (int j = 1;j <= i;j++) {
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	char a[3][5];
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 5;j++) {
//			scanf(" %c", &a[i][j]);
//		}
//	}
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 5;j++) {
//			printf("%c ", a[i][j] + 32);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void line() {
//	printf("===========================\n");
//}
//int main() {
//	line();
//	printf("line함수를 호출했습니다.\n");
//	printf("line함수를 다시 호출합니다.\n");
//	line();
//}

//#include <stdio.h>
//void diQl() {
//	printf("~!@#$%^&*()_+|\n");
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		diQl();
//	}
//}

//#include <stdio.h>
//void minus_10(int num) {
//	printf("%d\n", num - 10);
//}
//void plus_10(int num) {
//	printf("%d\n", num + 10);
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	minus_10(a);
//	plus_10(a);
//}

//#include <stdio.h>
//void pie(float a) {
//	printf("%.2f", a * a * 3.14);
//}
//int main() {
//	float a;
//	scanf("%f", &a);
//	pie(a);
//}

//#include <stdio.h>
//void star(int a) {
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	star(a);
//}

//#include <stdio.h>
//void square(int a) {
//	int cnt = 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a;j++) {
//			printf("%3d", cnt++);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	square(a);
//}

//#include <stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int minus(int a, int b) {
//	int c = a - b;
//	if (c < 0) c *= -1;
//	return c;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("합 = %d\n", add(a, b));
//	printf("차 = %d", minus(a, b));
//}

//#include <stdio.h>
//int max(int a, int b, int c) {
//	if (a > b && a > c) return a;
//	else if (b > a && b > c) return b;
//	else return c;
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", max(a, b, c));
//}

//#include <stdio.h>
//double average(int a, int b, int c) {
//	return (a + b + c) / 3.0;
//}
//int main() {
//	double a, b, c;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	printf("%.2lf", average(a, b, c));
//}

//#include <stdio.h>
//int square(int a, int b) {
//	int c = 1;
//	for (int i = 1;i <= b;i++) {
//		c *= a;
//	}
//	return c;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", square(a, b));
//}

//#include <stdio.h>
//int calculate(int a, char c, int b) {
//	switch (c)
//	{
//	case '+':
//		return a + b;
//	case '-':
//		return a - b;
//	case '*':
//		return a * b;
//	case '/':
//		return a / b;
//	}
//}
//int main() {
//	int a, b;
//	char c;
//	scanf("%d%c%d", &a, &c, &b);
//	printf("%d%c%d=%d", a, c, b, calculate(a, c, b));
//}

//#include <stdio.h>
//int change(int a, int b) {
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	change(a, b);
//}

//#include <stdio.h>
//int change(int a, int b) {
//	int c;
//	c = (a > b) ? a : b;
//	return c / 2;
//}
//int change2(int a, int b) {
//	int d = (a < b) ? a : b;
//	return d * 2;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", change(a, b), change2(a, b));
//}

//#include <stdio.h>
//int main() {
//	double firstmony, day, persent[10], d;
//	scanf("%lf %lf", &firstmony, &day);
//	d = firstmony;
//	for (int i = 0;i < day;i++) {
//		scanf("%lf", &persent[i]);
//	}
//	for (int i = 0;i < day;i++) {
//		d += d * persent[i] * 0.01;
//	}
//	d -= firstmony;
//	if (d > 0) {
//		printf("%.0lf\ngood", d);
//	}
//	else if (d == 0) {
//		printf("%.0lf\nsame", d);
//	}
//	else {
//		printf("%.0lf\nbad", d);
//	}
//}

//#include <stdio.h>
//int diQL(int a){
//	return a * a;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", diQL(a));
//}

//#include <stdio.h>
//minus(int a) {
//	return a - 10;
//}
//plus(int a) {
//	return a + 10;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d\n", minus(a));
//	printf("%d", plus(a));
//}

//#include <stdio.h>
//int min(int a, int b, int c) {
//	if (a < b && a < c) return a;
//	if (b < a && b < c) return b;
//	else return c;
//}
//int max(int a, int b, int c) {
//	if (a > b && a > c) return a;
//	if (b > a && b > c) return b;
//	else return c;
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n%d", min(a, b, c), max(a, b, c));
//}

//#include <stdio.h>
//double average(int a, int b, int c) {
//	return (a + b + c) / 3.0;
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%.2lf", average(a, b, c));
//}

//#include <stdio.h>
//int calculate(int a, char c, int b) {
//	switch (c)
//	{
//	case '+':
//		return a + b;
//	case '-':
//		return a - b;
//	case '/':
//		return a / b;
//	case '%':
//		return a % b;
//	case '*':
//		return a * b;
//	default:
//		return 0;
//		break;
//	}
//}
//int main() {
//	int a, b;
//	char c;
//	scanf("%d%c%d", &a, &c, &b);
//	printf("%d", calculate(a, c, b));
//}

//#include <stdio.h>
//double change(double a,int b) {
//	switch (b)
//	{
//	case 1:
//		return a * 1.8 + 32;
//	case 2:
//		return (a - 32) / 1.8;
//	default:
//		break;
//	}
//}
//int main() {
//	int b;
//	double a;
//	printf("1. 섭씨 -> 화씨\n2. 화씨 -> 섭씨\n");
//	scanf("%d", &b);
//	scanf("%lf", &a);
//	printf("%.3lf", change(a, b));
//}

//#include <stdio.h>
//int decimal(int a) {
//	for (int i = 2;i < a;i++) {
//		if (a % i == 0) return 0;
//	}
//	return 1;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (decimal(a) == 0) {
//		printf("%d는 소수가 아닙니다.", a);
//	}
//	else printf("%d는 소수입니다.", a);
//}

//#include <stdio.h>
//int square(int a, int b) {
//	int c = 1;
//	for (int i = 1;i <= b;i++) {
//		c *= a;
//	}
//	return c;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", square(a, b));
//}

//#include <stdio.h>
//int factorial(int a) {
//	int b = 1;
//	for (int i = a;i >= 1;i--) {
//		b *= i;
//	}
//	return b;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", factorial(a));
//}

//#include <stdio.h>
//int divisor(int a) {
//	int b = 0;
//	for (int i = 1;i <= a;i++) {
//		if (a % i == 0) b++;
//	}
//	return b;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", divisor(a));
//}

//#include <stdio.h>
//int max_divisor(int a, int b) {
//	int c;
//	c = (a < b) ? a : b;
//	for (int i = c;i >= 1;i--) {
//		if (a % i == 0 && b % i == 0) return i;
//	}
//}
//int min_divisor(int a, int b) {
//	int c;
//	c = (a > b) ? a : b;
//	for (int i = c;i <= a * b;i++) {
//		if (i % a == 0 && i % b == 0) return i;
//	}
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("최소공배수 : %d\n최대공약수 : %d", min_divisor(a, b), max_divisor(a, b));
//}

//#include <stdio.h>
//int sosu(int a) {
//	if (a == 1) return 0;
//	for (int i = 2;i < a;i++) {
//		if (a % i == 0) return 0;
//	}
//	return 1;
//}
//int main() {
//	int a;
//	int b, c;
//	scanf("%d", &a);
//	for (int i = 1;i < a;i++) {
//		if (sosu(i) == 0) continue;
//		else {
//			if (sosu(i) == 1 && sosu(a / i) == 1 && i * (a / i) == a) {
//				b = (i > a / i) ? i : a / i;
//				c = (i < a / i) ? i : a / i;
//				printf("%d %d", c, b);
//				return 0;
//			}
//		}
//	}
//	printf("wrong number");
//}

//#include <stdio.h>
//int calculate(int a, char b, int c) {
//	switch (b)
//	{
//	case '+':
//		return a + c;
//	case '-':
//		return a - c;
//	case '*':
//		return a * c;
//	case '/':
//		return a / c;
//	default:
//		return a;
//		break;
//	}
//}
//int main() {
//	int a, c, d;
//	char b = 0;
//	scanf("%d%c%d", &a, &b, &c);
//	d = calculate(a, b, c);//초기값을 저장해 놓은다.
//	while (1)
//	{
//		scanf("%c", &b);//계산할 값을 구한다.
//		if (b == '=') break;
//		scanf("%d", &a);
//		d = calculate(d, b, a);//초기값에 =가 입력될 때까지 계산함수를 불러온다.
//	}
//	printf("%d", d);
//}

//#include <stdio.h>
//int min = -1000001;
//int max = 1000001;
//int max_value(int a) {
//	min = (a > min) ? a : min;
//	return min;
//}
//int min_value(int a) {
//	max = (a < max) ? a : max;
//	return max;
//}
//int main() {
//	int a[5], b, c;
//	for (int i = 0;i < 5;i++) {
//		scanf("%d", &a[i]);
//		c = max_value(a[i]);
//		b = min_value(a[i]);
//	}
//	printf("%d\n%d", c, b);
//}

//#include <stdio.h>
//int multiply(int a) {
//	for (int i = 1;i <= 9;i++) {
//		for (int j = 1;j <= i * a;j ++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	multiply(a);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= b;j++) {
//			printf("%d %d\n", i, j);
//		}
//	}
//}


//#include <stdio.h>
//int main(void) {
//	char a;
//	scanf("%c", &a);
//	printf("%d", a);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%X", &a);
//	for (int j = 1;j <= 0xF;j++) {
//		printf("%X*%X=%X\n", a, j, a * j);
//	}
//}

//#include <stdio.h>
//int main() {
//    int i, j, k, c = 0;
//    int r, g, b;
//    scanf("%d %d %d", &r, &g, &b);
//    for (i = 0; i < r; i++)
//        for (j = 0; j < g; j++)
//            for (k = 0; k < b; k++)
//            {
//                printf("%d %d %d\n", i, j, k);
//                c++;
//            }
//    printf("%d ", c);
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = a;i <= b;i++) {
//		for (int j = 1;j <= 9;j++) {
//			printf("%d*%d=%d\n", i, j, i * j);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a;j++) {
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
//	char a[100], i;
//	scanf("%s", &a);
//	for (int i = 0;a[i] != '\0';i++) {
//		printf("'%c'\n", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c, d, e;
//	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
//	printf("[%d]\n", a * 10000);
//	printf("[%d]\n", b * 1000);
//	printf("[%d]\n", c * 100);
//	printf("[%d]\n", d * 10);
//	printf("[%d]\n", e);
//}

//#include <stdio.h>
//int measure(int a) {
//	int b = 0;
//	for (int i = 1;i <= a;i++) {
//		if (a % i == 0) b++;
//	}
//	return b;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("약수의 개수는 : %d", measure(a));
//}

//#include <stdio.h>
//int LCM(int a, int b) {
//	int c;
//	c = (a > b) ? a : b;
//	for (int i = c;i <= a * b;i++) {
//		if (i % a == 0 && i % b == 0) return i;
//	}
//}
//int GCD(int a, int b) {
//	int c;
//	c = (a < b) ? a : b;
//	for (int i = c;i >= 1;i--) {
//		if (a % i == 0 && b % i == 0) return i;
//	}
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("최대공약수는 : %d\n최소공배수는 : %d", GCD(a, b), LCM(a, b));
//}

//#include <stdio.h>
//char change (char a) {
//	if (a - 3 >= 97) printf("%c", a - 3);
//	else if (a >= 97 && a <= 102) printf("%c", a + 23);
//	else printf(" ");
//}
//int main() {
//	char a[201];
//	for (int i = 0;i < 201;i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == '\n'||a[i]=='\0') break;
//		change(a[i]);
//	}
//}

//#include <stdio.h> 
//void stvalue();
//int main() {
//	int i;
//	for (i = 1; i <= 5; i++)
//		stvalue();
//	return 0;
//}
//void stvalue() {
//	// num1의 접근 범위는 stvalue() 내부로 제한된 지역변수이나
//	// 초기화는 이 함수가 여러번 호출되더라도 단 한번만 적용됨.
//	static int num1 = 0; // 초기화 하지 않으면 0 초기화
//	int num2 = 0;		 // 초기화 하지 않으면 임의의 값으로 초기화
//	num1++, num2++;
//	printf("static : %d\tlocal : %d\n", num1, num2);
//}

//#include <stdio.h>
//int add(int a) {
//	static int b = 0;
//	return b += a;
//}
//int main() {
//	int a;
//	while (1)
//	{
//		printf("입력 : ");
//		scanf("%d", &a);
//		if (a == 0)break;
//		printf("누적 : %d\n", add(a));
//	}
//}

//#include <stdio.h>
//char change(char a) {
//	if (a + 3 <= 122 && a >= 97) printf("%c", a + 3);
//	else if (a >= 118 && a <= 122) printf("%c", a - 23);
//	else printf(" ");
//}
//int main() {
//	char a[201];
//	for (int i = 0;i < 201;i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == '\n' || a[i] == '\0') break;
//		change(a[i]);
//	}
//}

//#include<stdio.h>
//int func(int n)
//{
//	if (n > 10) return 0; //재귀함수 종료 조건
//	return n + func(n + 1); //함수 호출
//}
//int main()
//{
//	printf("재귀함수 결과값 : %d", func(1));//1~10까지 더한 값인 55가 호출된다.
//	return 0;
//}

//#include <stdio.h>
//int diQl;
//int odd(int a) {
//	if (a > diQl) return 0;
//	if (a % 2 == 1) printf("%d ", a);
//	if (a != diQl) odd(++a);
//}
//int main() {
//	int a;
//	scanf("%d %d", &a, &diQl);
//	odd(a);
//	return 0;
//}

//#include <stdio.h>
//int a = 1;
//int factorial(int b) {
//	a *= b;
//	if (b == 1)return a;
//	factorial(--b);
//}
//int main() {
//	int b;
//	scanf("%d", &b);
//	printf("%d", factorial(b));
//}

//#include <stdio.h>
//int b = 2, c[100] = { 1,1 };
//int pibonach(int a) {
//	if (b - 2 == a) return c[a - 1];
//	c[b++] = c[b - 1] + c[b - 2];
//	pibonach(a);
//}
//int main() {
//	int a;
//	int c[100] = { 1,1 };
//	scanf("%d", &a);
//	printf("%d", pibonach(a));
//}

//#include <stdio.h>
//int a, b;
//int scan() {
//	scanf("%d %d", &a, &b);
//}
//int add() {
//	return a + b;
//}
//int multiply() {
//	return a * b;
//}
//int main() {
//	scan();
//	printf("%d\n", add());
//	printf("%d", multiply());
//	return 0;
//}

//#include <stdio.h>
//int multiply(int a, int b) {
//	for (int i = a;i <= b;i++) {
//		printf("=====%d단=====\n", i);
//		for (int j = 1;j <= 9;j++) {
//			printf("%2d * %2d = %2d\n", i, j, i * j);
//		}
//	}
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = (a > b) ? a : b;
//	int d = (a < b) ? a : b;
//	multiply(d, c);
//}

//#include <stdio.h>
//void at() {
//	for (int i = 1;i <= 3;i++) {
//		switch (i)
//		{
//		case 1:
//			printf("first\n");
//			break;
//		case 2:
//			printf("second\n");
//			break;
//		case 3:
//			printf("third\n");
//		}
//		printf("@@@@@@@@@@\n");
//	}
//}
//int main() {
//	at();
//}

//#include <stdio.h>
//int add(int a) {
//	int b = 0;
//	for (int i = 1;i <= a;i++) {
//		b += i;
//	}
//	return b;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", add(a));
//}

//#include <stdio.h>
//int squere(int a) {
//	int b = 1;
//	for (int i = 1;i <= a;i++) {
//		for (int j = 1;j <= a;j++) {
//			printf(" %2d", b++);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	squere(a);
//}

//#include <stdio.h>
//int squere(int a, int b) {
//	int c = (a > b) ? a : b;
//	int d = (a < b) ? a : b;
//	return c * c - d * d;
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", squere(a, b));
//}

//#include <stdio.h>
//int a[3][3];
//void average() {
	//	int b[4][4] = { 0 };
	//	for (int i = 0;i < 3;i++) {
	//		for (int j = 0;j < 3;j++) {
	//			b[i][j] = a[i][j];
	//		}
	//	}
	//	for (int i = 0;i < 3;i++) {
	//		for (int j = 0;j < 3;j++) {
	//			b[i][3] += b[i][j];
	//			b[3][i] += b[j][i];
	//		}
	//		b[3][3] += b[3][i];
	//	}
	//	for (int i = 0;i < 4;i++) {
	//		for (int j = 0;j < 4;j++) {
	//			printf("%d ", b[i][j]);
	//		}
	//		printf("\n");
	//	}
	//	int b[7] = { 0 }, c = 0;
	//	for (int i = 0;i < 3;i++) {
	//		for (int j = 0;j < 3;j++) {
	//			b[i] += a[i][j];
	//			printf("%d", b[i]);
	//		}
	//	}
	//}
	//int main() {
	//	for (int i = 0;i < 3;i++) {
	//		for (int j = 0;j < 3;j++) {
	//			scanf("%d", &a[i][j]);
	//		}
	//	}
	//	average();
	//}

	/*#include <stdio.h>
	char change (char a) {
		if (a <= 122 && a >= 97) return a - 32;
		else if (65 <= a && 90 >= a) return a + 32;
		else  return a;
	}
	int main() {
		char a[1001];
		for (int i = 0;i < 1001;i++){
			scanf_s("%c", &a[i]);
			if (a[i] == '\0' || a[i] == '\n') break;
			printf("%c", change(a[i]));
		}
	}*/

	//#include <stdio.h>
	//int main() {
	//	int a, b;
	//	scanf("%d %d", &a, &b);
	//	if (a == 1 && b == 1) printf("1");
	//	else printf("0");
	//}

	//#include <stdio.h>
	//int main() {
	//	int a, b, c, d = 0;
	//	scanf("%d", &a);
	//	for (b = 1;b <= a * 2;b++) {
	//		if (b <= a) {
	//			d++;
	//		}
	//		else if (b > a) {
	//			d--;
	//		}
	//		for (c = 1;c <= d;c++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//}

	//#include <stdio.h>
	//int main() {
	//	int a;
	//	scanf("%d", &a);
	//	for (int i = a;i >= 1;i--) {
	//		for (int j = 1;j <= a-i;j++) {
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
	//		printf("*");
	//	}
	//	printf("\n");
	//	for (int i = 1;i < a-1;i++) {
	//		printf("*");
	//		for (int j = 1;j < a - 1;j++) {
	//			printf(" ");
	//		}
	//		printf("*\n");
	//	}
	//	for (int i = 1;i <= a;i++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//#include <stdio.h>
	//int main() {
	//	int a;
	//	scanf("%d", &a);
	//	int b = a / 2;
	//	for (int i = 1;i <= a;i += 2) {
	//		for (int j = 1;j <= b;j++) {
	//			printf(" ");
	//		}
	//		for (int j = 1;j <= i;j++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//		b--;
	//	}
	//}

//#include <stdio.h>
//int main() {
//	int a[24] = { 0 }, b, c;
//	scanf_s("%d", &b);
//	for (int i = 1;i <= b;i++) {
//		scanf_s("%d", &c);
//		a[c]++;
//	}
//	for (int i = 1;i <= 23;i++) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[10000] = { 0 }, b;
//	scanf("%d", &b);
//	for (int i = 1;i <= b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = b;i > 0;i--) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = a;i >= 1;i--) {
//		for (int j = 1;j < i;j++) {
//			printf(" ");
//		}
//		for (int j = 1;j <= a;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	char c;
//	scanf("%d %d %c", &a, &b, &c);
//	if (c == 'R') {
//		for (int i = a;i >= 1;i--) {
//			for (int j = 1;j < i;j++) {
//				printf(" ");
//			}
//			for (int j = 1;j <= b;j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	else {
//		for (int i = 1;i <= a;i++) {
//			for (int j = 1;j < i;j++) {
//				printf(" ");
//			}
//			for (int j = 1;j <= b;j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//}

//#include <stdio.h>
//void star(int a) {
//	for (int i = 1;i <= a * 2 - 1;i++) {
//		if (i < a+1) {
//			for (int j = 1;j < i;j++) {
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		else {
//			for (int j = a*2-1;j > i;j--) {
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = 1;i <= b;i++) {
//		star(a);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b = 0, j;
//	scanf("%d", &a);
//	for (int i = 1;i <= a;i++) {
//		for (j = 1;j <= i;j++) {
//			b += j;
//		}
//	}
//	printf("%d", b);
//}

//#include <stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1;i <= 6;i++) {
//		for (int j = 1;j <= 6;j++) {
//			if (i + j == a)printf("%d %d\n", i, j);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = 1;i <= b;i++) {
//		for (int j = 1;j <= a;j++) {
//			if ((i == 1 || i == b) && (j == 1 || j == a)) printf("+");
//			else if ((i == 1 || i == b) && (j != 1 || j != b)) printf("-");
//			else if ((i != 1 || i != b) && (j == 1 || j == a)) printf("|");
//			else printf(" ");
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
//	for (int i = a;i > 1;i--) {
//		for (int j = a;j >= i;j--) {
//			printf(" ");
//		}
//		for (int j = 1;j <= i * 2 - 3;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, b, c = 24;
//	scanf("%d", &b);
//	for (int i = 1;i <= b;i++) {
//		scanf("%d", &a);
//		c = (a < c) ? a : c;
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = b-1;i >= 0;i--) {
//		printf("%d ", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[100], b;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1;i <= 2;i++) {
//		for (int j = 0;j < b;j++) {
//			printf("%d\n", a[j]);
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b, c;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1;i <= b;i++) {
//		for (int j = 0;j < b;j++) {//코드업 미완성 1405
//			printf("%d ", a[j]);
//			c = a[b];
//			a[]
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[11] = { 0 }, b;
//	for (int i = 1;i <= 10;i++) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &b);
//	printf("%d", a[b]);
//}

//#include <stdio.h>
//int main() {
//	char a[100000] = { 0 };
//	int rhkf1 = 0, rhkf2 = 0;
//	for (int i = 0;i < 100000;i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == 40) rhkf1++;
//		else if (a[i] == 41) rhkf2++;
//		if (a[i] == '\n' || a[i] == '\0') break;
//	}
//	printf("%d %d", rhkf1, rhkf2);
//}

//#include <stdio.h>
//int main() {
//	int a[51] = { 0 }, b, c = 0;
//	scanf("%d", &b);
//	for (int i = 1;i <= b;i++) {
//		c += i;
//	}
//	for (int i = 1;i < b;i++) {
//		scanf("%d", &a[i]);
//		c -= a[i];
//	}
//	printf("%d", c);
//}

//#include <stdio.h>
//int main() {
//	char a[10000], c = 97;
//	int b[26] = { 0 };
//	for (int i = 0;i < 10000;i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == '\n' || a[i] == '\0') break;
//		b[a[i] - 97]++;
//	}
//	for (int i = 0;i < 26;i++) {
//		printf("%c:%d\n", c++, b[i]);
//	}
//}

//#include <stdio.h>
//void ten_to_two(unsigned n) {
//	unsigned a = 0x80000000; // 1000 0000 0000 0000 0000 0000 0000 0000(2) <약 21억>
//	for (int i = 0; i < 32; i++) {
//		if ((a & n) == a) printf("1");//코드업 미완성 2진수 변환하는 것
//		else printf("0");
//		a >>= 1;
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	ten_to_two(a);
//}

//#include <stdio.h>
//void odd(int a, int b) {
//	int i = a;
//	if (i % 2 == 1) printf("%d ", i);
//	i++;
//	if (i != b + 1) odd(i, b);
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	odd(a, b);
//}

//#include <stdio.h>
//int b = 0;
//int add(int a) {
//	int i = a;
//	b += i;
//	if (i != 0) add(--i);
//	else if (i == 0) return b;
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", add(a));
//}

//#include <stdio.h>
//int b = 1;
//int factorial(int a) {
//	b *= a--;
//	if (a == 0) return b;
//	factorial(a);
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", factorial(a));
//}

//#include <stdio.h>
//int main() {
//	int a = 10;
//	printf("%d\n", a);
//	printf("%p", &a);//%p는 주소를 출력하는 서식 문자이다.
//		//&a는 a라는 이름을 가진 변수의 메모리 주소는? 이라는 의미이다.
//}

//#include <stdio.h>
//int main() {
//	int a = 10, b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("a=%d,\t&a=%p\n", a, pa);//a안에 있는 값과 a의 주소를 가지고 있는 pa를 출력
//	printf("b=%d,\t&b=%p\n", b, pb);//b안에 있는 값과 b의 주소를 가지고 있는 pb를 출력
//	printf("pa=%p,\t&pa=%p\n", pa, &pa);//a의 메모리 주소를 가지고 있는 pa와 pa의 주소값을 출력
//	printf("pa=%p,\t&pa=%p\n", pb, &pb);//b의 메모리 주소를 가지고 있는 pb와 pb의 주소값을 출력
//}

//#include <stdio.h>
//int main() {
//	printf("Hello,\nWorld!");
//}

//#include <stdio.h>
//int main() {
//	printf("\"c:\\test\"");
//}

//#include <stdio.h>
//int main() {
//	int a[19][19] = { 0 }, b, c, d;
//	scanf("%d", &b);
//	for (int i = 1;i <= b;i++) {
//		scanf("%d %d", &c, &d);
//		a[c - 1][d - 1] = 1;
//	}
//	for (int i = 0;i < 19;i++) {
//		for (int j = 0;j < 19;j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//컴구시간 구조체 배우기
//#include <stdio.h>
//#include "car.h"//사용자가 만든 헤더파일
///*struct dial {//구조체의 자료형
//	char name[9];//구조체의 맴버라서 맴버변수라고 부른다.
//	int age;//맴버변수
//	int dipendent;//맴버부현수
//	double diQl;
//}buyer;//구조체의 변수*/
////맴버변수에 접근을 하려면 구조체의 변수가 필요하다
////struct dial diQl; //이렇게 구조체의 변수를 따로 선언을 할 수 있다.
//int main() {
//	/*strucpy(buyer.name, "김희찬");//문자열을 복사한다는 strucpy
//	buyer.age = 17;
//	buyer.dipendent = 3;
//	buyer.diQl = 10000;*/
//	struct car mycar = { "sonata",2015,120000 };
//	printf("%s\n", mycar.name);
//	printf("%d\n", mycar.year);
//	printf("%d\n", mycar.won);
//}

//#include<stdio.h>
//int main() {
//	int i = 10;
//	int* p = &i;
//	printf("i 값: %d\n", i);  // 직접 참조
//	printf("*p 값: %d\n", *p);  // 간접 참조
//	//포인터를 이용해서 다른 변수의 값을 대신 참고해 와서 간접이다.
//}

//#include <stdio.h>
//int main() {
//	int a = 10;
//	int* p = &a;//직접 지정
//	printf("a의 값 : %d\n", a);
//	*p = 20;//간접 지정
//	printf("a의 값 : %d\n", a);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int a = 0, i;
//	char b[1234];
//	scanf("%s", &b);//                   입력받은 값을 렌덤의 수 많큼 반복하고 그 반복한 수를 알려주는 프로그램이다람쥐
//	for (i = 1;i <= rand();i++)
//		printf("%s\n", b);
//	printf("%d번 \"%s\"가 출력되었습니다.", i, b);
//}

//#include <stdio.h>
//void comparison1(int a, int b) {
//	if (a > b) printf("> ");
//	else if (a == b) printf("= ");
//	else printf("< ");
//}
//int main() {
//	int a[1000], b;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < b;i++) {
//		printf("%d: ", i + 1);
//		for (int j = 0;j < b;j++) {
//			if (j != i) comparison1(a[i], a[j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[1000], b, c;
//	scanf("%d", &b);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0;i < b;i++) {
//		for (int j = 0;j < b;j++) {
//			printf("%d ", a[j]);
//		}
//		printf("\n");
//		for (int j = 0;j < b;j++) {
//			if (j == 0) c = a[0];
//			a[j] = a[j + 1];
//			if (j == b - 1) a[b - 1] = c;
//		}
//	}
//}

//#include <stdio.h>
//int main() {
//	int a, c[100], i;
//	scanf("%d", &a);
//	for (i = 0;1;i++) {
//		c[i] = a % 2;
//		if (a < 2) break;
//		a /= 2;
//	}
//	for (int j = i;j >= 0;j--) {
//		printf("%d", c[j]);
//	}
//}

//#include <stdio.h>
//int main() {
//	int a[100] = { 300 }, b, c, d;
//	scanf("%d %d", &b, &c);
//	for (int i = 0;i < b;i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int k = 0;k < b;k++) {
//		for (int i = 0;i < b-1;i++) {
//			if (a[i] >= a[i + 1]) {
//				d = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = d;
//			}
//		}
//	}
//	for (int i = 0;i < b;i++) {
//		if ((i + 1) % c != 0 && a[i] != 0) printf("%d ", a[i]);
//		else if (a[i] != 0) printf("%d \n", a[i]);
//	}
//}

//#include <stdio.h>
//int main() {
//	long long int a[10000000], n;
//	long long int m, b[100000], yn = 0;
//	scanf("%lld", &n);
//	for (long long int i = 0;i < n;i++) {
//		scanf("%lld", &a[i]);
//	}
//	scanf("%lld", &m);
//	for (long long int i = 0;i < m;i++) {
//		scanf("%lld", &b[i]);
//	}
//	for (long long int i = 0;i < m;i++) {
//		for (long long int j = 0;j < n;j++) {// 코드업 미완성1430
//			if (b[m] == a[j]) {
//				printf("1 ");
//				yn = 1;
//				break;
//			}
//		}
//		if (yn == 0) {
//			printf("0 ");
//		}
//		else yn = 0;
//	}
//}



//#include <stdio.h>//                        야바위 팀 프로젝트
//#include<stdlib.h>
//#include<time.h>
//#include <process.h>
//long long int coin = 100;//돈
////야바위의 난이도 만큼 보상을 더 줄것이다.
//void 실험(int n) {
//	for (int i = 1;i <= n * 3;i++) {//네모를 3줄로 출력하기 위해서
//		printf("■■■■■\t");
//		if (i % n == 0) printf("\n");
//		if (i % 15 == 0) {
//			for (int i = 1;i <= n;i++) {//야바위 번호를 지정해주기
//				printf("  %d\t", i);
//			}
//		}
//	}
//	printf("\n");
//}
//void yaba(int n) {
//	for (int i = 1;i <= n * 3;i++) {//네모를 3줄로 출력하기 위해서
//		printf("■■■■■\t");
//		if (i % n == 0) printf("\n");
//	}
//	for (int i = 1;i <= n;i++) {//야바위 번호를 지정해주기
//		printf("  %d\t", i);
//	}
//	printf("\n");
//}
//void printanswer(int n, int m) {
//	printf("정답은\n");
//	for (int i = 1;i <= 3;i++) {
//		for (int j = 1;j <= n;j++) {
//			if (j != m) printf("■■■■■\t");
//			else printf("□□□□□\t");
//		}
//		printf("\n");
//	}
//	for (int i = 1;i <= n;i++) {//야바위 번호를 지정해주기
//		printf("  %d\t", i);
//	}
//	printf("\n입니다\n");
//}
//int mix(int n) {
//	int random1;
//	system("cls");
//	for (int k = 1;k <= 15;k++) {
//		random1 = rand() % n + 1;//렌덤으로 수 고르기
//		for (int i = 1;i <= 3;i++) {
//			for (int j = 1;j <= n;j++) {
//				if (j != random1) printf("■■■■■\t");
//				else printf("□□□□□\t");
//			}
//			printf("\n");
//		}
//		Sleep(70);//잠시 보여주기 위해서
//		system("cls");
//	}
//	if (n > 6) return random1;//마지막에 나온 답이 정답이게 만든다
//}
//int returnmony(int n,int mony) {
//	if (n <= 4) return ((mony - n) * 2) + mony;
//	else if (4 < n && n < 9) return (mony * 2 + n * 2) + mony;
//	else if (n >= 9) return ((mony * 2 + n * 2) * 2) + mony;
//}
//int main() {
//	srand(time(NULL));
//	int n, random, answer;//난이도, 정답값, 정답 입력
//	int again, know = 0, mony;//다시하기, 알 기회, 걸 돈
//	int success = 0, ifprint = 0;//성공을 했거나 다시했거나, 성공을 했으면 정답을 따로 출력하지 않는 역할
//	int startcoin = coin, check = 0, againNum = 0;//돈을 잃었는지 얻었는지 알려주는, 77777이스터에그를 사용했는지 안했는지, 다시한 횟수
//
//도박:
//	system("cls");
//	printf("다시한 횟수 : %d\n", againNum);
//	printf("coin : %d\n", coin);
//도박1:
//	if (coin <= 0) {
//		if (coin != 0) {//돈이 0이 아니면 -이기 때문에 빚을 졌다고 한다
//			printf("빚을 졌습니다\n빚 : %lld", coin);
//			return 0;
//		}
//		else {
//			printf("돈이 없습니다\n");
//			printf("coin : %lld", coin);
//			return 0;
//		}
//	}
//	printf("야바위 난이도를 고르세요 : ");
//	success = 0;
//	scanf("%d", &n);//야바위 난이도
//	if (n <= 2 || n > 15) {//너무 적거나 너무 많은 경우를 방지한다
//		printf("서비스 이용 범위가 아닙니다\n다시 고르세요\n");
//		goto 도박1;
//	}
//	random = mix(n);//야바위 섞고 답 정하기
//	yaba(n);//야바위 시각화
//	//실험(n);//15이상의 난이도도 구현할 수 있는 함수 개발 중
//
//
////정답이_아닌_답_알려주기:
////	if (n > 4) {//4미만인 답에 경우 알려주면 너무 쉽기 때문에 알려주지 않는다
////		printf("정답중 아닌 답을 알려드릴까요? (coin 10차감)\n예 : 1 or 아니오 : 2\n");
////		scanf("%d", &know);//답을 알려줄지 안알려줄지 입력
////		if (know == 2) goto 돈_걸기;//아니요를 선택했을 때 이 코드 건너뛰기
////		else if (know > 2) {
////			printf("다시 골라주세요\n");
////			goto 정답이_아닌_답_알려주기;
////		}
//
//
//	/*선택한_답안_알려주기:
//		printf("정답을 알고싶은 컵을 골라주세요 : ");
//		scanf("%d", &know);
//		if (know != random) {
//			printf("정답이 아닙니다\n");
//		}
//		else {
//			printf("정답입니다\n");
//			success = 1;
//		}*/
//
//	//정답이_아닌_답_알려주기2:
//	//	if (n > 4) {//4미만인 답에 경우 알려주면 너무 쉽기 때문에 알려주지 않는다
//	//		know = rand() % n + 1;
//	//		if (know == random) goto 정답이_아닌_답_알려주기2;//정답이 아니라고 한 답이 정답일 경우를 막는다
//	//		printf("정답이 아닌 답은 %d입니다\n", know);
//	//		coin -= 10;
//	//	}
//	//}
//	//know = 0;
//
//
//돈_걸기:
//	printf("coin : %lld\n돈을 얼마나 거시겠습니까? : ", coin);
//	scanf("%d", &mony);
//	if (mony < 10) {
//		printf("걸 돈의 최소단위는 10coin입니다\n");
//		goto 돈_걸기;
//	}
//	/*if (mony == 77777 && check == 0) {
//		coin = 77777;
//		check = 1;
//		goto 돈_걸기;
//	}*/
//	if (mony > coin) {//지금 있는 돈보다 더 많은 돈을 걸었을 때
//		printf("걸 돈이 없습니다\n다시 고르세요\n");
//		goto 돈_걸기;
//	}
//	coin -= mony;//돈을 건 만큼 빼주기
//	printf("coin : %lld\n", coin);
//	if (n <= 2) {//너무 쉬운 게임을 방지하기 위해서
//		printf("다시 입력해 주세요\n");
//		goto 도박1;
//	}
//	printf("정답을 고르세요\n");
//
//
//섞기:
//	srand((unsigned int)time(NULL));//렌덤으로 야바위 수 정하기위해서 현제 시간 가저오기
//	if (n <= 6) random = rand() % n + 1;//렌덤으로 수 고르기
//	if (random == know) goto 섞기;//정답이 아니라고 한 것이 정답일 경우를 막는다
//
//
//답:
//	ifprint = 0;//처음에 성공을 할지 말지 모르기때문에 0으로 표기한다
//	scanf("%d", &answer);//정답 입력
//	if (answer > n || answer < 0) {//야바위 개수에 벗어나는 수를 입력했을 때 다시 할 수 있는 기회를 주기
//		printf("신중하게 고르시기 바랍니다\n");
//		goto 답;
//	}
//	if (answer == random) {
//		printf("축하드립니다\n성공입니다\n");//성공했을 때 성공 출력
//		coin += returnmony(n, mony);//난이도 만큼 성공했을 때의 보상을 높인다
//		printf("얻은 코인 : %d\n", returnmony(n, mony) - mony);//돈을 얼마나 땄는지 보여준다 -mony를 해주는 이유는 내가 건 돈은 빼기 위해서
//		printf("coin : %lld\n", coin);
//		ifprint = 1;//이미 정답을 아는 경우 또 다시 정답을 출력 할 필요가 없을 거 같다
//		success = 1;//정답을 입력했으면 다시 하면 정답을 알고 있기 때문에 방지한다
//		goto 다시;
//	}
//	else {
//		printf("실패하셨습니다\n");//실패 했을 때 실패 출력
//		printf("coin : %lld\n", coin);
//	}
//
//
//다시:
//	if(success==1) printf("다시하겠습니까?\n네 : 1 or 아니오 : 2\n");//이미 다시 한번 했으면 기회가 더 없다 그래서 다시고르기인 3번을 없앤다
//	else printf("다시하겠습니까?\n네 : 1 or 아니오 : 2 or 정답 다시 고르기 : 3\n");//다시 할 것인가?
//	//대답은 나중에 문자열로 입력받기
//	scanf("%d", &again);
//	if (again > 3) {
//		printf("다시 입력해주세요\n");
//		goto 다시;
//	}
//	if (again == 1) {
//		if (ifprint != 1) printanswer(n, random);//이미 성공을 했을 때 다시 한번 정답을 출력 할 필요가 없을거 같아서
//		success = 0;//초기화를 했기 때문에 이미 다시 했는지에 대한 답을 0으로 바꾼다
//		if (ifprint != 1) {//성공을 했을 때는 답을 보여주기 위해서 기다릴 필요가 없다
//			if (n <= 4) Sleep(1500);
//			else Sleep(2500);
//		}
//		againNum++;
//		goto 도박;//도박 부분으로 다시 돌아가기
//	}
//	else if (again == 3 && success == 1) {
//		printf("다시 선택하기 불가능합니다\n다시고르세요\n");//이미 다시 했는데 그럼에도 다시하기를 입력했을 때 불가하다고 한다
//		goto 다시;
//	}
//	else if (again == 3 && success != 1) {
//		printf("보상과 코인이 줄어들겁니다\n정답을 입력해주세요\n");
//		success = 1;//다시 했을 때 다시 했다고 표시를 한다
//		coin -= mony;//돈 깍기
//		goto 답;
//	}
//	else {
//		if (ifprint != 1) printanswer(n, random);//정답 알려주기
//		printf("최종 coin : %d\n", coin);
//		if (coin > startcoin) printf("돈을 땄습니다");
//		else if (coin == startcoin) printf("똑같습니다");
//		else printf("돈을 잃었습니다");
//	}
//}

//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <time.h>
//
////long  long int coin = 10000000;
//int coin = 500;
//
//int slot[5][11] = { 0, };
//int slotNum[3] = { 0,0,0 };
//
//void slotMachine();
//void slot_machine(int where, int num);
//void output();
//void spin_slot(int where);
//
//void RPS();
//void event();
//
//void chinchro();
//void showChinchroRule();
//int getCode(int i, int j, int k);
//int* sortDice(int* arr);
//int printGenealogy(int code);
//int rollDice(int a, int b, int c, int who, int where);
//
//void yaba();
//void printanswer(int n, int m);
//int mix(int n);
//void print_yaba(int n);
//int returnMoney(int n, int money);
//
//int main()
//{
//    int action;
//    printf("초기 금액 : %d\n\n", coin);
//    while (coin > 0)
//    {
//        printf("\n무엇을 하시겠습니까?\n\n");
//        printf("1) 슬롯머신     2) 가위바위보     3) 야바위     4) 친치로     5) 금액 확인     6) 도박장 떠나기\n");
//        scanf("%d", &action);
//
//        if (action == 1)
//        {
//            slotMachine();
//        }
//        else if (action == 2)
//        {
//            RPS();
//        }
//        else if (action == 3)
//        {
//            yaba();
//            system("cls");
//        }
//        else if (action == 4)
//        {
//            chinchro();
//        }
//        else if (action == 5)
//        {
//            system("cls");
//            printf("현재 금액 : %d\n", coin);
//            Sleep(1000);
//        }
//        else if (action == 6)
//        {
//            system("cls");
//            printf("안녕히 가세요.\n");
//            Sleep(1000);
//            break;
//        }
//        else
//        {
//            system("cls");
//            printf("잘못된 입력입니다.\n\n");
//            Sleep(1000);
//            continue;
//        }
//    }
//
//    if (coin <= 0)
//    {
//        printf("\n파산하셨네요! 저런 안타까워라");
//    }
//    else if (coin >= 10000)
//    {
//        printf("\n%d!!!? 엄청나네요", coin);
//    }
//    else if (coin >= 5000)
//    {
//        printf("\n%d만큼 벌다니 좀 치시는군요", coin);
//    }
//    else if (coin >= 500)
//    {
//        printf("\n%d? 그래도 본전은 찾으셨네요", coin);
//    }
//    else if (coin > 0)
//    {
//        printf("\n%d??? 많이 잃어서 배 좀 아프시겠어요", coin);
//    }
//
//    return 0;
//}
//
////슬롯머신 코드
//void slotMachine()
//{
//    system("cls");
//    int bet_coin;
//
//    printf("현재 코인 : %d\n", coin);
//    printf("몇 개의 코인을 배팅 하시겠습니까?\n");
//    scanf("%d", &bet_coin);
//
//    if (bet_coin > coin)
//    {
//        system("cls");
//        printf("당신에겐 이만큼의 돈이 없는걸요\n");
//        Sleep(1000);
//        return;
//    }
//    else if (bet_coin < 0)
//    {
//        system("cls");
//        printf("잘못된 입력입니다\n");
//        Sleep(1000);
//        return;
//    }
//
//    Sleep(1000);
//
//    coin -= bet_coin;
//
//    slot_machine(1, 0);
//    slot_machine(2, 0);
//    slot_machine(3, 0);
//    output();
//
//    spin_slot(1);
//    spin_slot(2);
//    spin_slot(3);
//
//    if (slotNum[0] == slotNum[1] && slotNum[1] == slotNum[2])
//    {
//        if (slotNum[0] == 7)
//        {
//            bet_coin *= 100;
//        }
//        bet_coin *= 10;
//    }
//    else if (slotNum[0] == slotNum[1] || slotNum[1] == slotNum[2] || slotNum[0] == slotNum[2])
//    {
//        bet_coin *= 5;
//    }
//    else
//    {
//        bet_coin = 0;
//    }
//
//    printf("\n\n얻은 코인 : %d\n", bet_coin);
//
//    coin += bet_coin;
//
//    Sleep(1000);
//}
//
//void slot_machine(int where, int num) {
//    if (where == 1) where = 0;
//    else if (where == 2) where = 4;
//    else where = 8;
//
//    if (num == 0)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 1;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 0;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 1;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 1;
//        slot[4][1 + where] = 1;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 0;
//    }
//    else if (num == 1)
//    {
//        slot[0][0 + where] = 0;
//        slot[0][1 + where] = 0;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 0;
//        slot[1][1 + where] = 1;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 0;
//        slot[2][1 + where] = 0;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 0;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 0;
//        slot[4][1 + where] = 0;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 1;
//    }
//    else if (num == 2)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 0;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 1;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 0;
//
//        slot[4][0 + where] = 1;
//        slot[4][1 + where] = 1;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 2;
//    }
//    else if (num == 3)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 0;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 0;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 1;
//        slot[4][1 + where] = 1;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 3;
//    }
//    else if (num == 4)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 0;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 1;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 0;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 0;
//        slot[4][1 + where] = 0;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 4;
//    }
//    else if (num == 5)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 1;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 0;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 0;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 1;
//        slot[4][1 + where] = 1;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 5;
//    }
//    else if (num == 6)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 0;
//        slot[0][2 + where] = 0;
//
//        slot[1][0 + where] = 1;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 0;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 1;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 1;
//        slot[4][1 + where] = 1;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 6;
//    }
//    else if (num == 7)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 0;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 0;
//        slot[2][1 + where] = 0;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 0;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 0;
//        slot[4][1 + where] = 0;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 7;
//    }
//    else if (num == 8)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 1;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 1;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 1;
//        slot[4][1 + where] = 1;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 8;
//    }
//    else if (num == 9)
//    {
//        slot[0][0 + where] = 1;
//        slot[0][1 + where] = 1;
//        slot[0][2 + where] = 1;
//
//        slot[1][0 + where] = 1;
//        slot[1][1 + where] = 0;
//        slot[1][2 + where] = 1;
//
//        slot[2][0 + where] = 1;
//        slot[2][1 + where] = 1;
//        slot[2][2 + where] = 1;
//
//        slot[3][0 + where] = 0;
//        slot[3][1 + where] = 0;
//        slot[3][2 + where] = 1;
//
//        slot[4][0 + where] = 0;
//        slot[4][1 + where] = 0;
//        slot[4][2 + where] = 1;
//        slotNum[where / 4] = 9;
//    }
//}
//
//void output()
//{
//    system("cls");
//    printf("%c%c%c  %c%c%c  %c%c%c", slot[0][0] ? '0' : ' ', slot[0][1] ? '0' : ' ', slot[0][2] ? '0' : ' ', slot[0][4] ? '0' : ' ', slot[0][5] ? '0' : ' ', slot[0][6] ? '0' : ' ', slot[0][8] ? '0' : ' ', slot[0][9] ? '0' : ' ', slot[0][10] ? '0' : ' ');
//    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[1][0] ? '0' : ' ', slot[1][1] ? '0' : ' ', slot[1][2] ? '0' : ' ', slot[1][4] ? '0' : ' ', slot[1][5] ? '0' : ' ', slot[1][6] ? '0' : ' ', slot[1][8] ? '0' : ' ', slot[1][9] ? '0' : ' ', slot[1][10] ? '0' : ' ');
//    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[2][0] ? '0' : ' ', slot[2][1] ? '0' : ' ', slot[2][2] ? '0' : ' ', slot[2][4] ? '0' : ' ', slot[2][5] ? '0' : ' ', slot[2][6] ? '0' : ' ', slot[2][8] ? '0' : ' ', slot[2][9] ? '0' : ' ', slot[2][10] ? '0' : ' ');
//    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[3][0] ? '0' : ' ', slot[3][1] ? '0' : ' ', slot[3][2] ? '0' : ' ', slot[3][4] ? '0' : ' ', slot[3][5] ? '0' : ' ', slot[3][6] ? '0' : ' ', slot[3][8] ? '0' : ' ', slot[3][9] ? '0' : ' ', slot[3][10] ? '0' : ' ');
//    printf("\n%c%c%c  %c%c%c  %c%c%c", slot[4][0] ? '0' : ' ', slot[4][1] ? '0' : ' ', slot[4][2] ? '0' : ' ', slot[4][4] ? '0' : ' ', slot[4][5] ? '0' : ' ', slot[4][6] ? '0' : ' ', slot[4][8] ? '0' : ' ', slot[4][9] ? '0' : ' ', slot[4][10] ? '0' : ' ');
//}
//
//void spin_slot(int where)
//{
//    int a = 1, b = 1;
//
//    srand(time(NULL));
//    int random = 0;
//    random = rand() % 9;
//
//    while (b - random <= 30) {
//        Sleep(b);
//        if (a == 10)
//        {
//            a = 1;
//        }
//        slot_machine(where, a);
//        output();
//        a++;
//        b++;
//    }
//}
//
////가위바위보 코드
//void RPS()
//{
//    char choices[3][10] = { "가위", "바위", "보" };
//    int PlayerChoice, DealerChoice;
//    int gamecoin = 0;
//
//    srand(time(NULL));
//
//    system("cls");
//    printf("현재코인: %d\n", coin);
//    printf("(이기면 2배, 비기면 그대로, 지면 0배)\n");
//    printf("몇개의 코인을 배팅 하시겠습니까? : ");
//    scanf("%d", &gamecoin);
//    if (gamecoin > coin) {
//        printf("\n당신에겐 이만큼의 돈이 없는걸요\n");
//        return;
//    }
//    if (gamecoin < 0) {
//        printf("\n잘못된 입력입니다\n");
//        return;
//    }
//
//    coin -= gamecoin;
//    printf("\n가위(1), 바위(2), 보(3) 중 하나를 선택하세요.\n");
//    scanf_s("%d", &PlayerChoice);
//
//    if (PlayerChoice == 1 || PlayerChoice == 2 || PlayerChoice == 3)
//    {
//        srand(time(0));
//        DealerChoice = rand() % 3 + 1;
//
//        printf("\n당신: %s\n\n", choices[PlayerChoice - 1]);
//        printf("딜러 : %s\n\n", choices[DealerChoice - 1]);
//
//        if (PlayerChoice == DealerChoice) {
//            printf("비겼습니다!");
//            coin += gamecoin;
//            printf(" (현재 가진 코인개수 : %d)\n", coin);
//            event(gamecoin);
//        }
//        else if ((PlayerChoice == 1 && DealerChoice == 3) || (PlayerChoice == 2 && DealerChoice == 1) || (PlayerChoice == 3 && DealerChoice == 2)) {
//            printf("Player가 이겼습니다!");
//            coin += (gamecoin * 2);
//            printf(" (현재 가진 코인개수 : %d)\n", coin);
//            event(gamecoin);
//        }
//        else {
//            printf("Dealer가 이겼습니다... ");
//            coin += (gamecoin * 0);
//            printf(" (현재 가진 코인개수 : %d)\n", coin);
//
//            if (rand() % 100 < 10) {
//                printf("이런~~ 패배하셨군요 안타깝네요\n");
//                event(gamecoin);
//            }
//        }
//    }
//    else {
//        coin += gamecoin;
//        printf("\n잘못된 입력입니다");
//        return;
//    }
//
//    Sleep(1000);
//    system("cls");
//}
//
//void event(int gamecoin) {
//    srand(time(0));
//    int eventNumber = rand() % 5;
//
//    switch (eventNumber) {
//    case 0:
//        printf("\n이런! 범인이 도박장에서 도주하는 사건이 발생했습니다!");
//        printf("현재 가진코인이 -15이 됩니다..\n");
//        coin -= 15;
//        break;
//    case 1:
//        printf("\n이런! 도박장에서 대규모 경기조작 사건이 발각되었습니다!");
//        printf("현재 가진코인이 -20이 됩니다..\n");
//        coin -= 20;
//        break;
//    case 2:
//        printf("\n이런! 도박장에서 화재가 발생하여 비상 대피 절차가 진행 중입니다! ");
//        printf("현재 가진코인이 -10이 됩니다..\n");
//        coin -= 10;
//        break;
//    case 3:
//        printf("\n와! 도박장에서 거액의 상금을 받은 손님이 기뻐하여 선물로 음식을 나누고 있습니다! ");
//        printf("현재 가진코인에 배팅코인 두배가 지급됩니다!!\n");
//        coin += gamecoin * 2;
//        break;
//    case 4:
//        printf("\n와! 도박장에서 사람들이 열광하는 최고의 운이 닥쳤습니다! 전체적인 분위기가 환상적입니다! ");
//        printf("현재 가진코인에 배팅코인 두배가 지급됩니다!!\n");
//        coin += gamecoin * 2;
//        break;
//    default:
//        printf("\n음...예기치 않은 사건이 발생하였습니다!\n");
//        printf("코인개수는 변하지 않습니다");
//    }
//
//    printf("계속하실려면 엔터를 눌러 주세요..");
//    getchar();
//    getchar();
//}
//
////친치로 코드
////친치로 룰북
//void showChinchroRule() {
//    printf("친치로 미니게임 룰\n");
//    printf("친치로는 3개의 주사위를 돌려 족보를 만들고, 족보가 더 높은 사람이 "
//        "우승하는 게임입니다.\n");
//    printf("플래이어는 시작전 베팅을 할수있으며, 베팅한 코인을 다음과 같이 "
//        "얻거나 잃게 됩니다.\n\n");
//    printf("졌을경우 : 상대방 족보에 따라 지불\n");
//    printf("비겼을경우 : 얻거나 잃지 않음\n");
//    printf("이겼을경우 : 플래이어 족보에 따라 지급\n\n");
//    printf("게임의 족보는 다음과 같습니다.\n");
//    printf("주사위에 숫자가 모두 1일경우 : 핀조로(ピンゾロ) - 배팅의 3배\n");
//    printf("주사위에 숫자가 모두 같을경우 : 아라시(あらし) - 배팅의 2배\n");
//    printf("주사위에 숫자가 4, 5, 6일경우 : 시고로(シゴロ) - 배팅의 2배\n");
//    printf("주사위에 숫자가 1, 2, 3경우 : 히후미(ヒフミ) - 배팅의 2배\n");
//    printf("주사위에 숫자중 2개가 같을경우 : 눈 있음(持ち目) - 배팅의 1배\n");
//    printf(
//        "위에 모든 경우에 해당하지 않는 경우 : 눈 없음(目なし) - 배팅의 1배\n\n");
//    printf("족보가 같은경우 승패 처리\n");
//    printf("둘다 아라시(あらし)일시 : 숫자가 높은사람이 이깁니다\n");
//    printf(
//        "둘다 눈 있음(持ち目)일시 : 같지 않은 한 숫자가 높은사람이 이깁니다\n");
//    printf("둘다 눈 없음(目なし)일시 : 모든 숫자의 합이 같은사람이 이깁니다\n");
//    printf("이 경우 이외는 (ex 둘다 핀조로) 무승부 처리됩니다.\n");
//    printf("룰북을 닫을려면 엔터를 눌러주세요\n");
//    getchar();
//}
//
////족보, 승패 판별을 위한 코드 판별
//int getCode(int i, int j, int k) {
//    if (i == j && j == k && j == 1)
//        return 330;
//    else if (i == j && j == k)
//        return 230 + j;
//    else if (i == j)
//        return 120 + k;
//    else if (j == k)
//        return 120 + i;
//    else if (i == 3 && j == 2 && k == 1)
//        return 150;
//    else if (i == 6 && j == 5 && k == 4)
//        return 200;
//    else
//        return i + j + k;
//}
//
////주사위 순서 내림차순으로 배열하기
//int* sortDice(int* arr) {
//    for (int i = 0; i < 3; i++)
//        for (int j = 0; j < 3; j++)
//            if (arr[i] > arr[j]) {
//                int save = arr[i];
//                arr[i] = arr[j];
//                arr[j] = save;
//            }
//    return arr;
//}
//
////족보 출력, 배당 리턴 함수
//int printGenealogy(int code) {
//    if (code == 330) {
//        printf("핀조로(ピンゾロ)");
//        return 3;
//    }
//    else if (231 < code && code < 237) {
//        printf("아라시(あらし)");
//        return 2;
//    }
//    else if (120 < code && code < 127) {
//        printf("눈 있음(持ち目)");
//        return 1;
//    }
//    else if (150 == code) {
//        printf("히후미(ヒフミ)");
//        return 2;
//    }
//    else if (200 == code) {
//        printf("시고로(シゴロ)");
//        return 2;
//    }
//    else {
//        printf("눈 없음(目なし)");
//        return 1;
//    }
//}
//
////주사위 굴리기
//int rollDice(int a, int b, int c, int who, int where) {
//    int Dice[3] = { a, b, c };
//    if (who == 1)
//        for (int rep = 0; rep < rand() % 10 + 5; rep++) {
//            Dice[where] = rand() % 6 + 1;
//            system("cls");
//        }
//    if (who == 0)
//        for (int rep = 0; rep < rand() % 10 + 25; rep++) {
//            Dice[where] = rand() % 6 + 1;
//            printf("플래이어 주사위 : %d %d %d\n", Dice[0], Dice[1], Dice[2]);
//            Sleep(70);
//            system("cls");
//        }
//    return Dice[where];
//}
//
//
//void chinchro() {
//    int beting = 0;
//    int DelerDice[3] = { 0 };
//    int playerDice[3] = { 0 };
//
//start:
//    system("cls");
//    printf("코인 수 : %d\n", coin);
//    printf("얼마나 배팅하시겠습니까?(룰북: -1) : ");
//    scanf("%d", &beting);
//    getchar();
//
//    //입력 예외 처리
//    if (beting == -1) {
//        system("cls");
//        showChinchroRule();
//        goto start;
//    }
//    else if (beting < -1 || 0) {
//        printf("양수를 입력해주세요\n");
//        Sleep(1000);
//        goto start;
//    }
//    else if (beting > coin) {
//        printf("가진 코인보다 더 많이 걸수 없습니다\n");
//        Sleep(1000);
//        goto start;
//    }
//    printf("\n");
//
//    //주사위 섞기
//    srand(time(NULL));
//    for (int i = 0; i < 3; i++) {
//        DelerDice[i] = rollDice(DelerDice[0], DelerDice[1], DelerDice[2], 1, i);
//    }
//
//    printf("딜러가 주사위를 섞는중입니다..\n");
//    Sleep(3000);
//    printf("딜러의 주사위가 결정되었습니다\n");
//    printf("주사위를 돌리려면 엔터를 눌러주세요\n");
//    getchar();
//
//    for (int i = 0; i < 3; i++) {
//        playerDice[i] =
//            rollDice(playerDice[0], playerDice[1], playerDice[2], 0, i);
//    }
//
//    printf("플래이어 주사위 : ");
//    for (int i = 0; i < 3; i++)
//        printf("%d ", playerDice[i]);
//    printf("\n");
//
//    printf("계속할려면 엔터를 눌러주세요..\n");
//    getchar();
//    system("cls");
//
//    //결과 출력
//    printf("딜러 주사위 : ");
//    for (int i = 0; i < 3; i++)
//        printf("%d ", DelerDice[i]);
//    printf("\n");
//    printf("플래이어 주사위 : ");
//    for (int i = 0; i < 3; i++)
//        printf("%d ", playerDice[i]);
//    printf("\n");
//
//    //족보 판별
//    sortDice(DelerDice);
//    sortDice(playerDice);
//    int delerCode = getCode(DelerDice[0], DelerDice[1], DelerDice[2]);
//    int playerCode = getCode(playerDice[0], playerDice[1], playerDice[2]);
//
//    printf("\n");
//    printf("딜러 족보 : ");
//    int delerMulti = printGenealogy(delerCode);
//    printf("\n");
//    printf("플래이어 족보 : ");
//    int playerMulti = printGenealogy(playerCode);
//    printf("\n");
//
//    //승패 결정, 코인 처리
//    printf("\n");
//    if (delerCode > playerCode) {
//        printf("졌습니다 배팅의 %d배인 %d가 소실됬습니다", delerMulti,
//            beting * delerMulti);
//        coin -= beting * delerMulti;
//    }
//    else if (delerCode == playerCode)
//        printf("비겼습니다 원금이 지급됩니다");
//    else {
//        printf("이겼습니다 배팅의 %d배인 %d가 지급됬습니다", playerMulti,
//            beting * playerMulti);
//        coin += beting * playerMulti;
//    }
//    printf("\n");
//    printf("계속할려면 엔터를 눌러주세요..\n");
//    getchar();
//    system("cls");
//}
//
//
////야바위
//void print_yaba(int n) {
//
//    //네모를 3줄로 출력하기 위해서
//    for (int i = 1; i <= n * 3; i++) {
//        printf("■■■■■\t");
//        if (i % n == 0) printf("\n");
//    }
//
//    //야바위 번호를 지정해주기
//    for (int i = 1; i <= n; i++) {
//        printf("  %d\t", i);
//    }
//    printf("\n");
//}
//void printanswer(int n, int m) {
//    printf("정답은\n");
//    for (int i = 1; i <= 3; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (j != m) printf("■■■■■\t");
//            else printf("□□□□□\t");
//        }
//        printf("\n");
//    }
//    for (int i = 1; i <= n; i++) {//야바위 번호를 지정해주기
//        printf("  %d\t", i);
//    }
//    printf("\n입니다\n");
//}
//
//int mix(int n) {
//    int random1;
//    system("cls");
//    for (int k = 1; k <= 15; k++) {
//        random1 = rand() % n + 1;//렌덤으로 수 고르기
//        for (int i = 1; i <= 3; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (j != random1) printf("■■■■■\t");
//                else printf("□□□□□\t");
//            }
//            printf("\n");
//        }
//        Sleep(70);//잠시 보여주기 위해서
//        system("cls");
//    }
//    if (n > 6) return random1;//마지막에 나온 답이 정답이게 만든다
//}
//
//int returnMoney(int n, int money) {
//    if (n <= 4) return ((money - n) * 2) + money;
//    else if (4 < n && n < 9) return (money * 2 + n * 2) + money;
//    else if (n >= 9) return ((money * 2 + n * 2) * 2) + money;
//}
//
//void yaba() {
//    srand(time(NULL));
//    int level, random, answer;//난이도, 정답값, 정답 입력
//    int money, again = 0; //걸 돈
//    int success = 0, ifprint = 0;//성공을 했거나 다시했거나, 성공을 했으면 정답을 따로 출력하지 않는 역할
//    int check = 0, againNum = 0;
//
//    system("cls");
//
//start:
//    printf("coin : %d\n", coin);
//
//    printf("야바위 난이도를 고르세요 : ");
//    success = 0;
//
//    scanf("%d", &level);
//
//    //레벨이 너무 낮거나 높은경우 방지
//    if (level <= 2 || level > 15) {
//        printf("서비스 이용 범위가 아닙니다\n다시 고르세요\n");
//        goto start;
//    }
//
//    random = mix(level);//야바위 섞고 답 정하기
//    print_yaba(level);//야바위 시각화
//
//bating:
//    printf("coin : %d\n돈을 얼마나 거시겠습니까? : ", coin);
//    scanf("%d", &money);
//
//    if (money < 10) {
//        printf("걸 돈의 최소단위는 10coin입니다\n");
//        goto bating;
//    }
//    //지금 있는 돈보다 더 많은 돈을 걸었을 때
//    if (money > coin) {
//        printf("걸 돈이 없습니다\n다시 고르세요\n");
//        goto bating;
//    }
//
//    //돈을 건 만큼 빼주기
//    coin -= money;
//    printf("정답을 고르세요\n");
//
//    if (level <= 6) random = rand() % level + 1;
//
//getAnswer:
//    ifprint = 0;//처음에 성공을 할지 말지 모르기때문에 0으로 표기한다
//
//    scanf("%d", &answer);//정답 입력
//    if (answer > level || answer < 0) {//야바위 개수에 벗어나는 수를 입력했을 때 다시 할 수 있는 기회를 주기
//        printf("신중하게 고르시기 바랍니다\n");
//        goto getAnswer;
//    }
//    if (answer == random) {
//        printf("축하드립니다\n성공입니다\n");//성공했을 때 성공 출력
//        coin += returnMoney(level, money);//난이도 만큼 성공했을 때의 보상을 높인다
//        printf("얻은 코인 : %d\n", returnMoney(level, money) - money);//돈을 얼마나 땄는지 보여준다
//        success = 1;//정답을 입력했으면 다시 하면 정답을 알고 있기 때문에 방지한다
//        goto end;
//    }
//    else {
//        printf("실패하셨습니다\n");//실패 했을 때 실패 출력
//        printf("coin : %d\n", coin);
//    }
//
//
//re:
//    //이미 한번 다시 했을 경우
//    if (success == 1) {
//        goto end;
//    }
//    else {
//        printf("다시 시도하시겠습니까?\n아니오 : 1 or 정답 다시 고르기 : 2\n");
//    }
//
//    again = 0;
//    //대답은 나중에 문자열로 입력받기
//    scanf("%d", &again);
//
//    if (again > 2 || again < 1) {
//        printf("선택지중 한개를 선택해주세요\n");
//        goto re;
//    }
//end:
//    if (again == 2 && success != 1) {
//        printf("보상과 코인이 줄어들겁니다\n정답을 입력해주세요\n");
//        success = 1;//다시 했을 때 다시 했다고 표시를 한다
//        coin -= money;//돈 깍기
//        goto getAnswer;
//    }
//    else {
//        if (ifprint != 1) printanswer(level, random);//정답 알려주기
//        printf("최종 coin : %d\n", coin);
//        printf("계속하실려면 엔터를 눌러 주세요..");
//        getchar();
//    }
//    getchar();
//}

//#include <stdio.h>
//#include <time.h>
//#include<Windows.h>
//void timer() {
//	int hour, min, sec;
//	int hour1, min1, sec1;
//scan:
//	scanf("%d %d %d", &hour, &min, &sec);
//	if (hour >= 60 || sec >= 60 || min >= 60) {
//		printf("잘못된 시간입니다.\n다시입력하세요\n");
//		goto scan;
//	}
//	hour1 = hour;
//	min1 = min;
//	sec1 = sec;
//	for (int i = sec + (min * 60) + (hour * 3600);i >= 0;i--) {
//		system("cls");
//		printf("%d %d %d\n", hour1, min1, sec1);
//		sec1--;
//		if (sec1 == -1) {
//			sec1 = 59;
//			min1--;
//		}
//		if (min1 == -1) {
//			min1 = 59;
//			hour1--;
//		}
//		Sleep(1000);
////엔터를 눌렀을 때 실행이 중지되게 한다.
////방법은 여러가지가 있다 Sleep함수가 끝날때 if문으로 검문하는가와 또 다른 코드를 타이머와 동시에 실행시키게 해서 엔터를 눌렀을 때 종료되게 하는 것이다.
//	}
//	printf("\n타이머 끝");
//}
//void stopW() {
//	int hour = 0, min = 0, sec = 0;
//	while (1)
//	{
//		system("cls");
//		printf("%d %d %d", hour, min, sec);
//		sec++;
//		if (sec == 60) {
//			min++;
//			sec = 0;
//		}
//		if (min == 60) {
//			hour++;
//			min = 0;
//		}
//		Sleep(1000);
//	}
//}
//
//int main() {
//	printf("어떤 기능을 실행할 지 입력하세요\n1. 타이머\t2. 스톱워치\n");
//	int choice;
//	scanf("%d", &choice);
//	if (choice == 1) timer();
//	else if (choice == 2) stopW();
//}

#include <stdio.h>
int main() {
	int testcase, aB, bB, aN[2000], bN[2000], eat[10] = { 0 };
	scanf("%d", &testcase);
	for (int i = 1;i <= testcase;i++) {
		scanf("%d %d", &aB, &bB);
		for (int j = 0;j < aB;j++) {
			scanf("%d", &aN[j]);
		}
		for (int j = 0;j < bB;j++) {
			scanf("%d", &bN[j]);
		}
		eat[i - 1] = 0;
		for (int j = 0;j < aB;j++) {
			for (int k = 0;k < bB;k++) {
				if (aN[j] > bN[k]) eat[i - 1]++;
			}
		}
	}
	for (int i = 0;i < testcase;i++) {
		printf("%d\n", eat[i]);
	}
}