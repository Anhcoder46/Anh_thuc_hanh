package buoi10;

import javax.swing.*;
import java.awt.*;

public class Xinchao extends JFrame {
    public Xinchao() {
        //xây dựng một số nội dung trong chương trình
        this.init();
        //gán tên trên thanh tiêu đề
        this.setTitle("Xin chào");
        // quy định kích thước
        this.setSize(600, 400);
        //cửa sổ hiển thị ở giữa màn hình
        this.setLocationRelativeTo(null);
        //quy định thoát chương trình khi đóng của sổ
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        //cho phép hiển thị ra màn hình
        this.setVisible(true);
    }

    private void init() {
        JPanel mainPanel = new JPanel();
        //quy định về bố cục của màn hình
        mainPanel.setLayout(new BorderLayout());
        //thêm một số nút nhấn
        JButton tren = new JButton("Phía trên");
        JButton duoi = new JButton("Phía dưới");
        JButton trai = new JButton("Phía trái");
        JButton phai = new JButton("Phía phải");
        JButton giua = new JButton("Phía trung tâm");

        mainPanel.add(tren, BorderLayout.NORTH);
        mainPanel.add(duoi, BorderLayout.SOUTH);
        mainPanel.add(trai, BorderLayout.WEST);
        mainPanel.add(phai, BorderLayout.EAST);
        mainPanel.add(giua, BorderLayout.CENTER);

        //thêm JPanel vào chương trình
        this.add(mainPanel);
    }

    public static void main(String[] args) {
        new Xinchao();
    }
}
