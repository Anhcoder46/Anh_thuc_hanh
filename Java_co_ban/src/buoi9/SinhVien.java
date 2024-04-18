public class SinhVien {

    private String maSV;
    private String hoTen;
    private String gioiTinh;
    private String diaChi;
    private double diemTB;

    // Constructor with auto-generated student ID
    public SinhVien(String hoTen, String gioiTinh, String diaChi, double diemTB) {
        int stt = SinhVien.dem++; // Get the next student ID number
        String sttStr = String.format("%03d", stt); // Format student ID with 3 digits
        this.maSV = "stt" + "22CT" + sttStr;
        this.hoTen = hoTen;
        this.gioiTinh = gioiTinh;
        this.diaChi = diaChi;
        this.diemTB = diemTB;
    }

    // ... other methods (getters, setters, toString, etc.)



public class Main {

    public static void main(String[] args) {
        // Create an array of SinhVien objects
        SinhVien[] sinhViens = new SinhVien[5];
        sinhViens[0] = new SinhVien("Nguyen Van A", "Nam", "Ha Noi", 8.5);
        sinhViens[1] = new SinhVien("Tran Thi B", "Nu", "Da Nang", 7.8);
        sinhViens[2] = new SinhVien("Le Van C", "Nam", "Ho Chi Minh City", 9.2);
        sinhViens[3] = new SinhVien("Pham Thi D", "Nu", "Can Tho", 8.0);
        sinhViens[4] = new SinhVien("Nguyen Thi Lan", "Nu", "Ha Noi", 8.7);

        // Search and print students with name "Lan"
        SinhVien[] timKiemLan = SinhVien.timkiem("Lan");
        System.out.println("Sinh vien co ten Lan:");
        for (SinhVien sv : timKiemLan) {
            System.out.println(sv);
        }

        // Search and print students with average score >= 8.4
        SinhVien[] timKiemDtbCao = SinhVien.timkiem1(8.4);
        System.out.println("\nSinh vien co diem TB >= 8.4:");
        for (SinhVien sv : timKiemDtbCao) {
            System.out.println(sv);
        }

        // Search and print students with average score < 4.0
        SinhVien[] timKiemDtbThap = SinhVien.timkiem2(4.0);
        System.out.println("\nSinh vien co diem TB < 4.0:");
        for (SinhVien sv : timKiemDtbThap) {
            System.out.println(sv);
        }

        // Sort the searched arrays by average score in ascending order
        SinhVien.sapxep(timKiemLan);
        System.out.println("\nSinh vien tim kiem theo ten Lan (sorted):");
        for (SinhVien sv : timKiemLan) {
            System.out.println(sv);
        }

}
