package javaBasal.java2week;

public class BreakContinue {
    public static void main(String[] args) {
        int i = 1, j = 5;
        System.out.println("break : ");
        breaking(i, j);
        System.out.println("continue : ");
        continueing();
    }

    public static void breaking(int i, int j) {
        while (true) {
            System.out.print(i++ + "\t");
            if (i >= j) break;
        }
    }

    public static void continueing() {
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) continue;
            System.out.print(i + "\t");
        }
    }
}
