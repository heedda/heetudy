package javaBasal.java1week;

public class Type {
    public static void main(String[] args) {
        boolean fal = false;
        int trueWin = 0;
        int falseWin = 0;
        boolean trueFalse;
        for (int i = 1; i <= 10; i++) {

            double randomValue = Math.random();
            int intRandom = (int) (randomValue * 2) + 1;


            if (intRandom == 1) {
                trueFalse = false;
                falseWin++;
                printf(trueFalse);
            } else if (intRandom == 2) {
                trueFalse = true;
                trueWin++;
                printf(trueFalse);
            }
        }
        if(trueWin!=falseWin){
            boolean win = (trueWin > falseWin) ? true : false;
            System.out.println(win + " win!");
        }
        else System.out.println("똑같습니다.");
    }

    public static void print(int a) {
        System.out.println(a - 1);
    }

    public static void printf(boolean a) {
        System.out.println(a);
    }
}
