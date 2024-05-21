package buoi10;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;

public class Calculator {
    private JTextField txtA;
    private JRadioButton radioCong;
    private JRadioButton radioTru;
    private JRadioButton radioNhan;
    private JRadioButton radioChia;
    private JTextField txtB;
    private JFormattedTextField txtKQ;
    private JButton btnTinh;
    private JButton btnCancel;
    private JPanel mainPanel;
    private JButton btnXoa;
    private ButtonGroup groupPhepTinh;

    public Calculator() {
        // Nhóm các JRadioButton vào một ButtonGroup
        groupPhepTinh = new ButtonGroup();
        groupPhepTinh.add(radioCong);
        groupPhepTinh.add(radioTru);
        groupPhepTinh.add(radioNhan);
        groupPhepTinh.add(radioChia);

        // Xử lý sự kiện cho nút Tính
        btnTinh.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    double a = Double.parseDouble(txtA.getText());
                    double b = Double.parseDouble(txtB.getText());
                    double kq = 0;

                    if (radioCong.isSelected()) {
                        kq = a + b;
                    } else if (radioTru.isSelected()) {
                        kq = a - b;
                    } else if (radioNhan.isSelected()) {
                        kq = a * b;
                    } else if (radioChia.isSelected()) {
                        if (b == 0) {
                            JOptionPane.showMessageDialog(mainPanel, "Hãy nhập B khác 0!", "Sai định dạng", JOptionPane.WARNING_MESSAGE);
                            txtB.requestFocus();
                            txtB.selectAll();
                            return;
                        }
                        kq = a / b;
                    }
                    txtKQ.setText(String.valueOf(kq));
                } catch (NumberFormatException ex) {
                    JOptionPane.showMessageDialog(mainPanel, "Vui lòng nhập số hợp lệ!", "Lỗi định dạng", JOptionPane.ERROR_MESSAGE);
                }
            }
        });

        // Xử lý sự kiện cho nút Xóa
        btnXoa.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                txtA.setText("");
                txtB.setText("");
                txtKQ.setText("");
                groupPhepTinh.clearSelection();
            }
        });

        // Xử lý sự kiện cho nút Cancel
        btnCancel.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int confirmed = JOptionPane.showConfirmDialog(mainPanel, "Bạn có chắc muốn thoát?", "Xác nhận thoát", JOptionPane.YES_NO_OPTION);
                if (confirmed == JOptionPane.YES_OPTION) {
                    JFrame topFrame = (JFrame) SwingUtilities.getWindowAncestor(mainPanel);
                    topFrame.dispose();
                }
            }
        });

        // Xử lý sự kiện focus cho txtB để kiểm tra chia cho 0
        txtB.addFocusListener(new FocusAdapter() {
            @Override
            public void focusLost(FocusEvent e) {
                try {
                    double b = Double.parseDouble(txtB.getText());
                    if (b == 0 && radioChia.isSelected()) {
                        JOptionPane.showMessageDialog(mainPanel, "Hãy nhập B khác 0!", "Sai định dạng", JOptionPane.WARNING_MESSAGE);
                        txtB.requestFocus();
                        txtB.selectAll();
                    }
                } catch (NumberFormatException ex) {
                    // Không làm gì cả
                }
            }
        });
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Calculator");
        frame.setContentPane(new Calculator().mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
    }
}