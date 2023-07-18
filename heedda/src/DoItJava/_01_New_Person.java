package DoItJava;

import javax.sound.midi.Soundbank;
import java.util.Scanner;

public class _01_New_Person {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        scan.next();
        System.out.println(scan.next());
        Person Kim = new Person(165,48,"김희찬","국어");

        System.out.println(Kim.name+Kim.KoreanSubjectName);

        School deaduk = new School(1106, "대덕소프트웨어마이스터고등학교", 1);//deaduk이라는 이름의 인스턴스가 생성된 것

        System.out.println(deaduk.schoolNum + deaduk.SchoolName + deaduk.SchoolRoomNum);
    }
}
