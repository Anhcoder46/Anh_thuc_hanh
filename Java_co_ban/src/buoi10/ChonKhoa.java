package buoi10;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ChonKhoa extends JFrame {
    private JPanel mainPanel;
    private JComboBox<String> comboBoxKhoa;
    private JButton btnThem;
    private JButton btnXoa;

    public ChonKhoa() {
        setTitle("Chọn Khoa");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        mainPanel = new JPanel();
        setContentPane(mainPanel);
        mainPanel.setLayout(null);

        String[] initialItems = {
                "Công Nghệ Thông Tin",
                "Ngôn Ngữ Anh",
                "Thiết Kế Đồ Họa",
                "Du Lịch",
                "Thể Dục"
        };

        comboBoxKhoa = new JComboBox<>(initialItems);
        comboBoxKhoa.setBounds(50, 50, 300, 30);
        mainPanel.add(comboBoxKhoa);

        btnThem = new JButton("Thêm");
        btnThem.setBounds(50, 100, 100, 30);
        mainPanel.add(btnThem);

        btnXoa = new JButton("Xóa");
        btnXoa.setBounds(200, 100, 100, 30);
        mainPanel.add(btnXoa);

        btnThem.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String newKhoa = JOptionPane.showInputDialog("Nhập tên khoa mới:");
                if (newKhoa != null && !newKhoa.trim().isEmpty()) {
                    comboBoxKhoa.addItem(newKhoa.trim());
                }
            }
        });

        btnXoa.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int selectedIndex = comboBoxKhoa.getSelectedIndex();
                if (selectedIndex != -1) {
                    comboBoxKhoa.removeItemAt(selectedIndex);
                } else {
                    JOptionPane.showMessageDialog(ChonKhoa.this, "Vui lòng chọn một khoa để xóa.");
                }
            }
        });
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                ChonKhoa chonKhoa = new ChonKhoa();
                chonKhoa.setVisible(true);
            }
        });
    }
}