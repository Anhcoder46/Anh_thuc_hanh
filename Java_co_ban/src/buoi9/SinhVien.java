package buoi9;

public class SinhVien {
    public static int soLuong = 0;
    String name, maSV;
    double diemLT, diemTH, diemTB;
    boolean KQ;

    public SinhVien(String name, double diemLT, double diemTH) {
        this.name = name;
        this.diemLT = diemLT;
        this.diemTH = diemTH;
        tinhDiemTB();
        tinhKQ();
        taoMaSV();
        soLuong++;
    }

     public void hienThi() {
        System.out.println("\nMã sinh viên: " + maSV
                + "\nTên: " + name
                + "\nĐiểm thi lý thuyết: " + diemLT
                + "\nĐiểm thi thực hành: " + diemTH
                + "\nĐiểm trung bình: " + diemTB
                + "\nKết quả: " + (KQ ? "Đậu" : "Rớt"));
    }

    public void tinhDiemTB() {
        diemTB = (diemLT + diemTH) / 2;
    }

    public void tinhKQ() {
        KQ = diemTB >= 4;
    }

    public void taoMaSV() {
        int stt = soLuong + 1;
        String sttnew;
        if (stt <  10) {
            sttnew = "00" + stt;
        } else {
            sttnew = "0" + stt;
        }
        maSV = "stt" + "22CT" + sttnew;
    }

    public static SinhVien[] timkiem(String name, SinhVien[] sinhVien) {
        int count = 0;
        for (SinhVien sv : sinhVien) {
            if (sv.name.equals(name)) {
                count++;
            }
        }
        SinhVien[] result = new SinhVien[count];
        int index = 0;
        for (SinhVien sv : sinhVien) {
            if (sv.name.equals(name)) {
                result[index++] = sv;
            }
        }
        return result;
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

    public static void sapxep(SinhVien[] students) {
        // 8, 7, 9, 6, 4
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
        sinhVien[1] = new SinhVien("Lan", 6.75, 7.25);
        sinhVien[2] = new SinhVien("Long", 9.25, 8.75);
        sinhVien[3] = new SinhVien("Lan", 6, 6);
        sinhVien[4] = new SinhVien("Hồng", 3.75, 4.25);

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