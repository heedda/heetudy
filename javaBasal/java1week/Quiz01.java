package javaBasal.java1week;

import java.awt.desktop.SystemEventListener;
import java.util.Scanner;

public class Quiz01 {
    public static void main(String[] args) {
        /*Scanner in = new Scanner(System.in);
        System.out.print("직사각형의 가로를 입력하세요 : ");
        double w = in.nextDouble();
        System.out.print("직사각형의 세로를 입력하세요 : ");
        double h = in.nextDouble();
        double area = w * h;
        System.out.println("넓이는 " + area + "입니다.");*/
        //첫번째 문제

        /*Scanner in = new Scanner(System.in);
        System.out.println("정수를 입력하세요");
        int num = in.nextInt();
        System.out.println(num % 2 == 0 ? "짝수" : "홀수");*/
        //두번째 문제

        /*for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 6 - i; j++) {
                System.out.print(' ');
            }
            for (int j = 1; j <= i * 2 - 1; j++) {
                System.out.print('*');
            }
            System.out.println();
        }*/
        //프로그래밍문제1

        /*Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        System.out.println(num * num);*/
        //프로그래밍문제2

        /*Scanner in = new Scanner(System.in);
        System.out.print("원기둥의 밑변 반지름은? : ");
        double 밑반지름 = in.nextDouble();
        System.out.print("원기둥의 높이는? : ");
        double 높이 = in.nextDouble();
        System.out.println("원기둥의 부피는 " + 밑반지름 * 밑반지름 * 높이 * 3.14);*/
        //프로그래밍문제3

        /*System.out.println("초단위 정수를 입력하세요");
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int hour = 0, min = 0, sec = 0, a = num;
        if (num >= 3600) {
            hour = num / 3600;
            num %= 3600;
        }
        if (num >= 60) {
            min = num / 60;
            num %= 60;
        }
        sec = num;
        System.out.println(hour + "시간 " + min + "분 " + sec + "초");*/
        //프로그래밍문제4

        /*Scanner in = new Scanner(System.in);
        int f = in.nextInt();
        double c = (5.0 / 9.0) * (f - 32);
        System.out.println(c);*/
        //프로그래밍문제6

        /*Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int hundred = 0, ten = 0, one;
        hundred = num / 100;
        ten = (num - hundred * 100) / 10;
        one = (num - ten * 10) - hundred * 100;
        int add = hundred + ten + one;
        System.out.println(add);*/
        //프로그래밍문제8

        /*Scanner in = new Scanner(System.in);
        int add = 0;
        System.out.print("전공 이수 학점 : ");
        int major = in.nextInt();
        System.out.print("교양 이수 학점 : ");
        int culture = in.nextInt();
        System.out.print("일반 이수 학점 : ");
        int common = in.nextInt();
        add = major + culture + common;
        System.out.println(add >= 140 ? "졸업 가능" : "졸업 불가능");*/
        //프로그래밍문제9
    }
}
