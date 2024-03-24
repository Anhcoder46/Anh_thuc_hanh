package buoi6.BaiTapVeNha;

public class PhanSo {
    int tu;
    int mau;
    public PhanSo() {
        this.tu = 0;
        this.mau= 1;
    }

    public PhanSo(int tu, int mau) {
        this.tu = tu;
        this.mau = mau;
    }

    public PhanSo cong(PhanSo ps2) {
        int ts = this.tu * ps2.mau + ps2.tu * this.mau;
        int ms = this.mau * ps2.mau;
        return new PhanSo(ts, ms);
    }

    public PhanSo tru(PhanSo ps2) {
        int ts = this.tu * ps2.mau - ps2.tu * this.mau;
        int ms = this.mau * ps2.mau;
        return new PhanSo(ts, ms);
    }

    public PhanSo nhan(PhanSo ps2) {
        int ts = this.tu * ps2.tu;
        int ms = this.mau * ps2.mau;
        return new PhanSo(ts, ms);
    }

    public boolean bangNhau(PhanSo ps2) {
        return this.tu * ps2.mau == ps2.tu * this.mau;
    }

    public void hienThi() {
        System.out.println(tu + "/" + mau);
    }

    public static void main(String[] args) {
        PhanSo ps1 = new PhanSo(2, 3);
        PhanSo ps2 = new PhanSo(1, 4);

        PhanSo ps3 = ps1.cong(ps2);
        PhanSo ps4 = ps1.tru(ps2);
        PhanSo ps5 = ps1.nhan(ps2);

        System.out.print("Phân số 1: ");
        ps1.hienThi();
        System.out.print("Phân số 2: ");
        ps2.hienThi();

        System.out.print("Tổng: ");
        ps3.hienThi();
        System.out.print("Hiệu: ");
        ps4.hienThi();
        System.out.print("Tích: ");
        ps5.hienThi();

        if (ps1.bangNhau(ps2)) {
            System.out.println("Phân số 1 và Phân số 2 bằng nhau.");
        } else {
            System.out.println("Phân số 1 và Phân số 2 không bằng nhau.");
        }
    }
}
