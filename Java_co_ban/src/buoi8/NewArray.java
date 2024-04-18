package buoi8;

import java.util.Scanner;

public class NewArray { // Khai báo lớp NewArray
    public static Scanner sc; // khai báo static để đọc dữ liệu từ bàn phím

    public static void Nhap(int[] a) { // Khai báo phương thức nhập dữ liệu vào mảng
        sc = new Scanner(System.in); // Khởi tạo một đối tượng để đọc dữ liệu từ bàn phím
        for (int i = 0; i < a.length; i++) { // vòng lặp for duyệt qua từng phần tử của mảng
            System.out.print("Nhập phần tử thứ " + (i + 1) + ": "); // thông báo ng dùng nhập
            a[i] = sc.nextInt(); // lưu trữ magnr a phân tử thứ i
        }
    }

    public static void Xuat(int[] a) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }

    public static boolean giamDan(int[] a) {
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] < a[i + 1]) {
                return false;
            }
        }
        return true;
    }

    // Kiểm tra mảng có phải là dãy đối xứng không (trả về  true/false)?
    public static boolean doiXung(int[] a) {
        for (int i = 0; i < a.length / 2; i++) { //duyệt qua
            if (a[i] != a[a.length - 1 - i]) { // so sánh phần tử thứ i có đối xứng với phần tử a.length - 1 - i hay ko
                return false; // nếu ko false
            }
        }
        return true; // nếu có true
    }

    // Tìm và in ra phần tử lẻ đầu tiên trong mảng chia hết cho 9
    public static int timViTriLeDauTienChiaHetCho9(int[] a) {
        for (int i = 0; i < a.length; i++) {
            if (a[i] % 9 == 0 && a[i] % 2 != 0) { // Kiểm tra phần tử có chia hết cho 9 và là số lẻ
                return a[i]; // Trả về phần tử đầu tiên thỏa mãn đk
            }
        }
        return -1; // Trả về -1 nếu không tìm thấy phần tử thỏa mãn
    }



    // Sắp xếp mảng giảm dần
    public static void bubbleSort(int[] a) { // thuật toàn sắp xếp nổi bọt
        int n = a.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] < a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    // Đảo ngược mảng (trả về mảng đã đảo ngược)
    public static int[] daoNguoc(int[] a) {
        int[] b = new int[a.length];
        for (int i = 0; i < a.length; i++) {
            b[i] = a[a.length - 1 - i];
        }
        return b;
    }

    public static void main(String[] args) {
        sc = new Scanner(System.in);
        int n; //khởi tạo biến n de lưu trữ
        System.out.println("Nhập số lượng phần tử: ");
        n = sc.nextInt(); // Đọc sô lượng phần tử
        int[] a = new int[n]; //khai báo mảng a với kích thước n
        Nhap(a);// gọi hàm nhập để nhập dữ liệu cho mảng
        System.out.println("Mảng đã nhập: ");
        Xuat(a); // gọi hàm xuất để xuất dữ liệu cho mảng

        giamDan(a); // hàm giảm dần vời tham số a kiểm tra mảng a có giảm hay ko
        boolean ktGiam = giamDan(a); // lưu trữ giá trị trả về của giamDan đúng thì true mà sai thi false
        if(ktGiam) { // nếu đúng giảm thì in
            System.out.println("Là mảng giảm dần");
        } else { // ngược lại
            System.out.println("Không phải là mảng giảm dần");
        }

        doiXung(a); // hàm đối xứng ktra adđối xứng ko
        boolean ktDoiXung = doiXung(a); // cx tương tự true or false
        if(ktDoiXung) { // nếu true
            System.out.println("Là mảng đối xứng");
        } else { // ngược lại
            System.out.println("Không phải là mảng không đối xứng");
        }

        timViTriLeDauTienChiaHetCho9(a); // tuong tự
        int viTri = timViTriLeDauTienChiaHetCho9(a); // lưu trữ giá trị trả về của biến timViTriLeDauTienChiaHetCho9(a) vào biến vitri
        if (viTri == -1) { // ko có vitri đầu tiên chia hết cho 9 nếu vitri = -1. còn có thì else thực hiện
            System.out.println("Không có phần tử nào chia hết cho 9");
        } else {
            System.out.println("Phần tử đầu tiên chia hết cho 9 là: ");
            for (int i = 0; i < a.length; i++) { // duệt qua từng phần tử của mảng
                if (a[i] % 9 == 0) { // nếu chia hết cho 9 in ra
                    System.out.print(a[i] + " ");
                }
            }
        }

        bubbleSort(a); // hàm thuật toán sắp xếp nổi bọt vời tham số a nó sẽ sắp xếp a giảm dần
        System.out.println("Mảng sau khi sắp xếp giảm dần: "); // in ra
        Xuat(a);

        // Đảo ngược mảng
        int[] mangDaoNguoc = daoNguoc(a); // hàm daoNguoc với tham số là mảng a, tạo ra một mảng mới là mangDaoNguoc của mảng a.
        System.out.println("Mảng sau khi đảo ngược: ");
        Xuat(mangDaoNguoc); //hàm Xuat với tham số là mảng mangDaoNguoc xong in ra
    }
}