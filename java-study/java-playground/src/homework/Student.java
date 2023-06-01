package homework;

public class Student {
    String name;
    int STN;
    int grade;
    String address;

    public Student(String name, int STN, int grade, String address) {
        this.name = name;
        this.STN = STN;
        this.grade = grade;
        this.address = address;
    }

    void me(){
        System.out.println("이름 : "+name+"\n학번 : "+STN+"\n학년 : "+grade+"\n주소 : "+address);
    }

    public String you(){
        return "이름 : "+name+"\n학번 : "+STN+"\n학년 : "+grade+"\n주소 : "+address ;
    }
}
