package javaBasal.java2week;

import java.util.Scanner;

public class MethodStudy {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.nextLine();
        int i = in.nextInt();
        short sh = in.nextShort();
        System.out.print("int echo : ");
        echo(a, i);
        System.out.print("short echo : ");
        echo(a, sh);//이 두개의 method는 서로 다른 method이다. java는 이름이 같아도 type이 다르면 다른 method라고 인식한다.
        //하지만 반환타입만 다르다면 오버로딩이 아니다. 반환타입은 method를 구분하는 기준이 아니다.
        //기준은 오직 메소드 이름, 매개변수의 개수, 매개변수의 데이터 타입, 매개변수의 개수만 메소드 시그니처이다.
    }

    public static void echo(String a, int i) {
        for (int j = 0; j < i; j++) {
            System.out.print(a + "\t");
        }
        System.out.println();
    }

    public static void echo(String a, short i) {
        for (int j = 0; j < i; j++) {
            System.out.print(a + "\t");
        }
        System.out.println();
    }
}
