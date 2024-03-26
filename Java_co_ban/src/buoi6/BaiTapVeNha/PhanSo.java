package buoi6.BaiTapVeNha;

public class PhanSo {
    private int tu;
    private int mau;

    public PhanSo() {
        this.tu = 0;
        this.mau = 1;
    }

    public PhanSo(int tu, int mau) {
        this.tu = tu;
        this.mau = mau;
    }

    public PhanSo cong(PhanSo ps2) {
        int a = (this.tu * ps2.mau) + (ps2.tu * this.mau);
        int b = ps2.mau * this.mau;
        PhanSo tm = new PhanSo(a, b);
        return tm;
    }

    public PhanSo tru(PhanSo ps2) {
        int a = (this.tu * ps2.mau) - (ps2.tu * this.mau);
        int b = ps2.mau * this.mau;
        PhanSo tm = new PhanSo(a, b);
        return tm;
    }

    public PhanSo nhan(PhanSo ps2) {
        int a = ps2.tu * this.tu;
        int b = ps2.mau * this.mau;
        PhanSo tm = new PhanSo(a, b);
        return tm;
    }

    public PhanSo chia(PhanSo ps2) {
        int a = this.tu * ps2.mau;
        int b = this.mau * ps2.tu;
        PhanSo tm = new PhanSo(a, b);
        return tm;
    }

    public boolean bangNhau(PhanSo ps2) {
        return this.tu * ps2.mau == ps2.tu * this.mau;
    }

    public void hienThi() {
        System.out.println(tu + "/" + mau);
    }
}
