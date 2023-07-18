package javaBasal.java2week;

import java.util.Scanner;

public class IfElse {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("숫자를 입력하세요");
        int num = in.nextInt();
        /*if(num%2==0)
            System.out.println("짝수");
        else
            System.out.println("홀수");*/
        System.out.println(num % 2 == 0 ? "짝수" : "홀수");//위에 if else문을 삼항으로 나타낸 것
    }
}
