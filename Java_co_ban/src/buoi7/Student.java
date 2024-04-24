package buoi7;

import buoi9.SinhVien;

public class Student {
    String ten;
    String lop;
    static int count = 0;

    public Student(String ten, String lop) {
        this.ten = ten;
        this.lop = lop;
        count++;
    }
    public static void main(String[] args) {
        Student Student = new Student("Trần Đức Anh", "22ct2");
        Student Student2 = new Student("Trần Đức Anh", "22ct2");
        Student Student3 = new Student("Trần Đức Anh", "22ct2");
        Student Student4 = new Student("Trần Đức Anh", "22ct2");
        System.out.println(count);
    }
}
