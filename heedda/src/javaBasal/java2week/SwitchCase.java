package javaBasal.java2week;

import java.util.Scanner;

public class SwitchCase {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("1~4중에 하나를 고르세요 : ");
        int num = in.nextInt();
        nonBreak(num);
        System.out.println();
        inBreak(num);
    }

    public static void nonBreak(int num) {
        switch (num) {
            case 4:
                System.out.println("*");
            case 3:
                System.out.println("*");
            case 2:
                System.out.println("*");
            case 1:
                System.out.println("*");
        }
        //스위치 케이스를 실행 한 후 브레이크가 되지 않고 밑에 있는 케이스까지 다 수행을 한다.
    }

    public static void inBreak(int num) {
        switch (num) {
            case 3:
                System.out.println("#");
                break;
            case 2:
                System.out.println("@");
                break;
            case 1:
                System.out.println("!");
                break;
            default:
                System.out.println("(\\_/)\n( º.º)\n/ >♥");
        }
        //break를 하면 뒤에 있는 case들은 실행이 안된다.
        //default를 사용하면 case에 없는 다른 값이 들어 왔을 때 default문이 실행된다.
    }
}
