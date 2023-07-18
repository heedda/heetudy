package javaBasal.java1week;

import java.util.Scanner;
import java.util.SimpleTimeZone;

public class Scan {
    public static void main(String[] args) {
        Scanner ya = new Scanner(System.in);
//        System.out.println("수를 입력하세요");
//        int a = ya.nextInt();
//        System.out.printf("입력한 수가 %d(이)가 맞으신가요?",a);
        char b = ya.nextLine().charAt(6);//charAt(n)은 n인덱스에 있는 문자만 뽑아서 b에 저장을 한다는 것이다.
        System.out.println(b);
    }
}

