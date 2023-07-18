package javaBasal.java1week;

public class TypeChange {
    public static void main(String[] args) {
        int i = 7 / 4;
        System.out.println(i);
        double d = 7 / 4;
        byte b;
        System.out.println(d);
        d = 7 / (double) 4;
        System.out.println(d);

        i = 300;
        if (i < -128 || i > 127) {
            System.out.println("byte형식으로 변환할 수 없습니다.");
        } else {
            b = (byte) i;
        }
    }
}
