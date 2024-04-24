package buoi9;

import java.util.Scanner;

public class SinhVien { // Định nghĩa lớp SinhVien
    public static int soLuong = 0; //Biến soLuong kiểu int đếm số lượng sinh viên
    String name; //Biến name kiểu String lưu tên sinh viên
    String maSV; //Biến maSV kiểu String lưu m sinh viên
    double diemLT; //Biến diemLT kiểu double lưu điểm thi lý thuyết
    double diemTH; //Biến diemTH kiểu double lưu điểm thi thực hành
    double diemTB; //Biến diemTB kiểu double lưu điểm trung bình
    boolean KQ; //Biến KQ kiểu boolean lưu kết quả true/false (đậu/rớt)

    public SinhVien(String name, double diemLT, double diemTH) { //hàm khoiw tạo SinhVien nhận 3 tham số
        this.name = name; // gán giá trị name cho biến name
        this.diemLT = diemLT; // gán giá trị diemLT chobieensi diemLT
        this.diemTH = diemTH; // gán giá trị diemTH cho biến diemTH
        tinhDiemTB(); // gọi hàm tinhDiemTB để tính điểm trung bình
        tinhKQ(); // gọi hàm ttinhKQ để tính kết quả
        taoMaSV(); //gọi hàm taoMaSV để tạo mã sinh viên
        soLuong++; // tắng biến soLuong lên 1
    }

//    public void nhap() {
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Nhap ho ten: ");
//        name = sc.nextLine();
//        System.out.println("Nhap diem ly thuyet: ");
//        diemLT = sc.nextDouble();
//        System.out.println("Nhap diem thuc hanh: ");
//        diemTH = sc.nextDouble();
//        tinhDiemTB();
//        tinhKQ();
//    }


     public void hienThi() { // hàm hienThi ko có tham số trả về
        System.out.println("\nMã sinh viên: " + maSV
                + "\nTên: " + name
                + "\nĐiểm thi lý thuyết: " + diemLT
                + "\nĐiểm thi thực hành: " + diemTH
                + "\nĐiểm trung bình: " + diemTB
                + "\nKết quả: " + (KQ ? "Đậu" : "Rớt"));
        // in ra thong tin sinh vien và sử dụng toán ử 3 ngôi
        //nếu KQ lớn hơn hoặc bằng 4, toán tử sẽ trả về đâậu,
        // ngược lại sẽ trả về rớt
    }

    public void tinhDiemTB() { // Tính điểm trung bình
        diemTB = (diemLT + diemTH) / 2; // trung bình cộng
    }

    public void tinhKQ() { //Tính kết quả
        KQ = diemTB >= 4; // gán giá trị true nếu >= 4, ngược lại false nếu < 4
    }

    public void taoMaSV() {
        int stt = soLuong + 1; //Tạo biến stt kiểu int tăng soLuong lên 1
        String sttnew; //khai báo biến stt kiêu string
        if (stt < 10) { // nếu stt < 10
            sttnew = "00" + stt; // thì gán sttnew là 00 nối + stt
        } else {
            sttnew = "0" + stt; // thì gán sttnew là 0 nối + stt
        }
        maSV = "stt" + "22CT" + sttnew; // VD: stt22CT nếu < 10 thì 009, nếu < 10 thì 011
    }

    public static SinhVien[] timkiem(String name, SinhVien[] sinhVien) {
        int count = 0; // biến count để đếm số lượng sinh viên có tên trùng khớp
        for (SinhVien sv : sinhVien) { // vòng lặp for duyệt qua từng sinh viên trong mảng sinhVien, sv có kiểu dữ liệu SinhVien và sẽ lần lượt lấy giá trị của từng phần tử trong mảng sinhVien
            if (sv.name.equals(name)) {//equals() so sánh giá trị của hai chuỗi
                count++; //Tăng giá trị biến count lên 1
            }
        }
        SinhVien[] result = new SinhVien[count]; //Khởi tạo mảng result có kiểu dữ liệu SinhVien[] với kích thước bằng số lượng sinh viên cần tìm kiếm count
        int index = 0; //Khởi tạo biến index để theo dõi vị trí lưu trữ trong mảng result
        for (SinhVien sv : sinhVien) {
            if (sv.name.equals(name)) {
                result[index++] = sv; // lưu trữ sv vào vị trí index trong mảng result rồi tăng lên 1 để cập nhật vị trí tiếp theo
            }
        }
        return result; //trả về các sinh viên có tên trùng khớp với name.
    }

    public static SinhVien[] timkiem1(double dtb, SinhVien[] sinhVien) {
        int count = 0;
        for (SinhVien sv : sinhVien) {
            if (sv.diemTB >= dtb) {
                count++;
            }
        }
        SinhVien[] result = new SinhVien[count];
        int index = 0;
        for (SinhVien sv : sinhVien) {
            if (sv.diemTB >= dtb) {
                result[index++] = sv;
            }
        }
        return result;
    }

    public static SinhVien[] timkiem2(double dtb, SinhVien[] sinhVien) {
        int count = 0;
        for (SinhVien sv : sinhVien) {
            if (sv.diemTB < dtb) {
                count++;
            }
        }
        SinhVien[] result = new SinhVien[count];
        int index = 0;
        for (SinhVien sv : sinhVien) {
            if (sv.diemTB < dtb) {
                result[index++] = sv;
            }
        }
        return result;
    }

    public static void sapxep(SinhVien[] students) { // thuật toán sắp xếp ổi bọt tăng theo diemTB
        // 8.0, 7.9, 9.05, 7.75, 3.85
        for (int i = 0; i < students.length - 1; i++) {
            for (int j = i + 1; j < students.length; j++) {
                if (students[i].diemTB > students[j].diemTB) {
                    SinhVien temp = students[i];
                    students[i] = students[j];
                    students[j] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        SinhVien[] sinhVien = new SinhVien[5];
        sinhVien[0] = new SinhVien("Anh", 8.5, 7.5);
        sinhVien[1] = new SinhVien("Lan", 7.8, 8.0);
        sinhVien[2] = new SinhVien("Long", 9.2, 8.9);
        sinhVien[3] = new SinhVien("Lan", 8.0, 7.5);
        sinhVien[4] = new SinhVien("Hồng", 2.7, 5.0);

        // Tìm và in thông tin sinh viên có tên là "Lan"
        System.out.println("\nTìm kiếm sinh viên có tên là Lan:");
        SinhVien[] result = timkiem("Lan", sinhVien);
        for (SinhVien sv : result) {
            sv.hienThi();
        }

        // Tìm và in thông tin sinh viên có điểm trung bình >= 4
        System.out.println("\nTìm kiếm sinh viên có điểm trung bình >= 4.0: ");
        result = timkiem1(4.0, sinhVien);
        for (SinhVien sv : result) {
            sv.hienThi();
        }

        // Tìm và in thông tin sinh viên có điểm trung bình < 4.0
        System.out.println("\nTìm kiếm sinh viên có điểm trung bình < 4.0:");
        result = timkiem2(4.0, sinhVien);
        for (SinhVien sv : result) {
            sv.hienThi();
        }
        // Tìm kiếm và in ra các sinh viên có điểm trung bình >= 8.4
        System.out.println("\nSinh viên có điểm trung bình >= 8.4: ");
        for (SinhVien sv : sinhVien) {
            if (sv.diemTB >= 8.4) {
                sv.hienThi();
            }
        }

        // Tìm kiếm và in ra các sinh viên có điểm trung bình < 4.0
        System.out.println("\nSinh viên có điểm trung bình < 4.0: ");
        for (SinhVien sv : sinhVien) {
            if (sv.diemTB < 4.0) {
                sv.hienThi();
            }
        }

        // Sắp xếp các mảng tìm được theo chiều tăng dần theo điểm trung bình của từng sinh viên
        sapxep(sinhVien);
        System.out.println("\nSắp xếp tăng dần theo điểm trung bình: ");
        for (SinhVien sv : sinhVien) {
            sv.hienThi();
        }
    }
}