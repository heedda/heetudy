package homework;

public class Main {
    static int add(int num1, int num2) {
        int result;
        result = num1 + num2;
        return result;
    }

    public static void main(String[] args) {
        /*
        Student H = new Student("김희찬",1106,1,"경기도");
        H.me();
        Student U = new Student("부현수",1108,1,"제주");
        String info = U.you();
        System.out.println(info);*/
        int num1 = 10;
        int num2 = 20;
        int sum = add(num1, num2);
        System.out.println(num1 + "+" + num2 + "=" + sum + "입니다.");
    }
}
