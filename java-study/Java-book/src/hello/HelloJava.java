package hello;

public class HelloJava {
    public static void main(String[] args) {
        System.out.println("hello, java");
        final/*절대 다시 초기화 불가*/ float a=3.1f;
        double d=3.1448954893/*변수에 대입한 X를 리터럴이라고 한다*/;
        long b=102;
        Long c = 102l;//색갈이 회색인 이유는 아직 사용이 안됬기 때문
        var v=3.14f;
        boolean t=true;
        boolean f=false;
        System.out.println(t);
        System.out.println(v);
        System.out.println(f);
        b = (int)v;
        if (t) {
            System.out.println("1");
        }
        if (t) {
            System.out.println("3");
        }

        if (t) {
            System
                    .out
                    .println("1");
        } else if (t) {
            System.out.println("3");
        }

    }
}
