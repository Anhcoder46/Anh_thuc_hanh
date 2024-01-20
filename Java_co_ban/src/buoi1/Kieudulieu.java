package buoi1;

public class Kieudulieu {
    public static void main(String[] args) {
        // Kiểu byte kích thước 8 bit khoảng giá trị -256...255
        byte a = 50;
        System.out.println(a);

        // Kiểu short kích thước 16 bit khoảng giá trị -32768...32767
        short b = 50;
        System.out.println(b);

        // Kiểu int kích thước 32 bit khoảng giá trị -2 mũ 32...2 mũ 32 -1
        int c = 50;
        System.out.println(c);

        // Kiểu long kích thước 64 bit khoảng giá trị -2 mũ 64...252 mũ 64 -1
        long d = 50;
        System.out.println(d);

        // Kiểu float kích thước 32 bit khoảng giá trị -3.4e mũ 38...3.4e mũ 38
        float e = 50;
        System.out.println(e);

        // Kiểu double kích thước 64 bit khoảng giá trị -1.7e mũ 308...1.7e mũ 308
        double f = 50;
        System.out.println(f);

        // ký tự đặc biệt
        // \b xóa lùi(backspace)
        // \t tab
        // \n xuống hàng
        // \r dấu enter
        // \'' nháy kép
        // \' nháy đơn
        // \\ số ngược
        // \f đẩy trang
        // uxxxx ký tự unicode
        double pi = Math.PI;
        System.out.printf("Pi = ", pi);
        System.out.printf("\nPI = %.3f", pi);
        System.out.printf("\nPi = \t%.3f", pi);

        // Một số định danng %
        // d 1 số nguyên thập phân
        // f 1 số float
        // n xuống dòng mới
        // TB in ra tên tháng trong biến time của bạn
        // td te trả lại ngày trong biến time. td sẽ in cho bạn cả số 0 nếu cần (05) còn te thì không
        // ty tY trả về năm trong biến time ty sẽ lấy 2 số cuối của năm tY thì lấy cả 4 số
        // tl trả về giờ trong biến time và định dạng kiểu 12h
        // TM trả về phút theo định dạng 2 số, thêm số 0 nếu cần
        // tp trả về am(buổi sáng) pm(buổi chiều)
        // tm trả về tháng định dạng số và định dạng theo 2 chữ số
        // TD trả về time định dạng theo: %tm%td%ty

        /* Câu hỏi: Cho biết giá trị của a, b? Giải thích?

        Cho a = 5;
        b = a++ + ++a = ?
        b = 5 + 7 = 12

        Cho a = 5
        b = a++ + ++a + a++ = ?
        b = 5 + 7 + 7 = 19

        Cho a = 5
        b = a-- + ++a + a++; a = ?, b = ?;
        b = 4 + 5 + 6 = 15 => a = 6, b = 15;
        */
    }
}
