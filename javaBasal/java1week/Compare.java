package javaBasal.java1week;

public class Compare {
    public static void main(String[] args) {

        int x = 0, y = 1;
        System.out.println((x < 1) || (y-- < 1));//여기서 y는 감소되지 않는다. 왜냐하면 자바는 쇼트서킷을 하기 때문이다.
        System.out.println("x = " + x + ", y = " + y);

        x = 0;
        y = 1;
        System.out.println((x < 1) | (y-- < 1));
        System.out.println("x = " + x + ", y = " + y);
    }
}
