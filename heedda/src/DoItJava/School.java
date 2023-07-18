package DoItJava;

public class School {//여기서부터 생성자까지가 설계도 이다. 인스턴스를 생성하기 위한 것.
    int schoolNum;
    String SchoolName;
    int SchoolRoomNum;

    public School(int schoolNum, String schoolName, int schoolRoomNum) {
        this.schoolNum = schoolNum;
        SchoolName = schoolName;
        SchoolRoomNum = schoolRoomNum;
    }
}
