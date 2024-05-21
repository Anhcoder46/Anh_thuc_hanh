package buoi10.Nhap;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class NhapText {

    private JTextField txtText;
    private JButton btnOk;
    private JButton btnCancel;
    private JCheckBox chbItalic;
    private JCheckBox chbBold;
    private JPanel mainPanel;

    public NhapText() {
        // Tạo cửa sổ JFrame
        JFrame frame = new JFrame("Nhập Text: ");
        frame.setContentPane(mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);

        // Thiết lập sự kiện cho checkbox Italic
        chbItalic.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateTextStyle();
            }
        });

        // Thiết lập sự kiện cho checkbox Bold
        chbBold.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateTextStyle();
            }
        });

        // Thiết lập sự kiện cho nút OK
        btnOk.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(frame, "Nội dung: " + txtText.getText());
            }
        });

        // Thiết lập sự kiện cho nút Cancel
        btnCancel.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });
    }

    private void updateTextStyle() {
        int style = Font.PLAIN;
        if (chbItalic.isSelected()) {
            style |= Font.ITALIC;
        }
        if (chbBold.isSelected()) {
            style |= Font.BOLD;
        }
        Font font = txtText.getFont();
        txtText.setFont(new Font(font.getName(), style, font.getSize()));
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new NhapText();
            }
        });
    }
}