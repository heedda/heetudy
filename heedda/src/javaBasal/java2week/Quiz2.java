package javaBasal.java2week;

import java.security.spec.RSAOtherPrimeInfo;
import java.util.Scanner;

public class Quiz2 {
    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("팩토리얼을 계산할 값을 입력하세요 : ");
        int num = in.nextInt();
        System.out.println("팩토리얼 값은 : " + factorial(num));
    }

    public static int factorial(int num) {
        int result = 1;
        for (int i = 1; i <= num; i++) result *= i;
        return result;
    }*/
    //도전과제 1~2

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        System.out.println("팩토리얼 값은 : " + factorial(a, b));
    }

    public static int factorial(int a, int b) {
        int result = 1;
        int big = (a > b) ? a : b;
        int small = (a < b) ? a : b;
        for (int i = small; i <= big; i++) {
            result *= i;
        }
        return result;
    }*/
    //도전과제 3

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int age = in.nextInt();
        if(age>=19) System.out.println("성년");
        else System.out.println("미성년");
    }*/
    //programming problem 1

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("등수를 입력하세요");
        int rank = in.nextInt();
        switch (rank) {
            case 1 -> System.out.println("아주 잘했습니다.");
            case 2, 3 -> System.out.println("잘했습니다.");
            case 4, 5, 6 -> System.out.println("보통입니다.");
            default -> System.out.println("노력해야겠습니다.");
        }
    }*/
    //programming problem 2

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num;
        int result = 0;
        do {
            num = in.nextInt();
            if (num > 0 && num % 2 == 0) result += num;
        } while (num > 0);
        System.out.println("입력한 정수 중에서 짝수의 합은 " + result);
    }*/
    //programming problem 3

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }*/
    //programming problem 4

    /*public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                for (int k = 1; k <= 10; k++) {
                    if (i * i == j * j + k * k && i + j + k <= 20) System.out.printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }*/
    //programming problem 5

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String cs = in.next();
        String yh = in.next();
        if (yh.equals("s")) switch (cs) {
            case "r" -> System.out.println("철수 승!");
            case "s" -> System.out.println("비겼습니다.");
            case "p" -> System.out.println("철수 패");
        }
        else if (yh.equals("r")) switch (cs) {
            case "r" -> System.out.println("비겼습니다.");
            case "s" -> System.out.println("철수 패");
            case "p" -> System.out.println("철수 승!");
        }
        else if (yh.equals("p")) switch (cs) {
            case "r" -> System.out.println("철수 패");
            case "s" -> System.out.println("철수 승!");
            case "p" -> System.out.println("비겼습니다.");
        }
    }*/
    //programming problem 6미완성

    /*public static void main(String[] args) {
        foo("안녕", 1);
        foo("안녕");
        foo("안녕", 2, 4);
    }

    public static void foo(String a) {
        System.out.println(a);
    }

    public static void foo(String a, int b) {
        System.out.println(a + " " + b);
    }

    public static void foo(String a, int b, int c) {
        System.out.println(a + " " + b + " " + c);
    }*/
    //programming problem 9

    /*public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        if (isPrime(num))
            System.out.println(num + "는 소수입니다");
        else
            System.out.println(num + "는 소수가 아닙니다.");
    }

    public static boolean isPrime(int num) {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }*/
    //programming problem 10
}
