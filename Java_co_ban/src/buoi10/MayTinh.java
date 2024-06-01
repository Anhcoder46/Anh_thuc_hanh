package buoi10;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusAdapter;
import java.awt.event.FocusEvent;

public class MayTinh {
    private JTextField txtA;
    private JTextField txtB;
    private JRadioButton radioCong;
    private JRadioButton radioChia;
    private JRadioButton radioNhan;
    private JRadioButton radioTru;
    private JButton btnXoa;
    private JButton btnTinh;
    private JButton btnCancel;
    private JTextField txtKQ;
    private JPanel mainPanel;

    private final ButtonGroup groupPhepTinh;

    public MayTinh() {
        JFrame frame = new JFrame("Máy tính");
        frame.setContentPane(mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
        groupPhepTinh = new ButtonGroup();
        groupPhepTinh.add(radioCong);
        groupPhepTinh.add(radioTru);
        groupPhepTinh.add(radioNhan);
        groupPhepTinh.add(radioChia);

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
                    JOptionPane.showMessageDialog(mainPanel, "Vui lòng nhập số hợp lệ", "Lỗi định dạng", JOptionPane.ERROR_MESSAGE);
                }
            }
        });

        btnXoa.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                txtA.setText("");
                txtB.setText("");
                txtKQ.setText("");
                groupPhepTinh.clearSelection();
            }
        });

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

                }
            }
        });
    }


    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new QuocGia();
            }
        });
    }

    public void setVisible(boolean b) {
    }
}
