package buoi10;

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
        JFrame frame = new JFrame("Nhập Text");
        frame.setContentPane(mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);

        chbItalic.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateTextStyle();
            }
        });

        chbBold.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateTextStyle();
            }
        });

        btnOk.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(frame, "Nội dung: " + txtText.getText());
            }
        });

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

    public void setVisible(boolean b) {
    }
}