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
        txtText = new JTextField("Trần Đức Anh 22CT1", 20);
        btnOk = new JButton("OK");
        btnCancel = new JButton("Cancel");
        chbItalic = new JCheckBox("Italic");
        chbBold = new JCheckBox("Bold");
        mainPanel = new JPanel(new GridBagLayout());

        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.anchor = GridBagConstraints.WEST;

        gbc.gridx = 0;
        gbc.gridy = 0;
        mainPanel.add(txtText, gbc);

        gbc.gridx = 1;
        mainPanel.add(chbItalic, gbc);

        gbc.gridx = 2;
        mainPanel.add(chbBold, gbc);

        gbc.gridx = 0;
        gbc.gridy = 1;
        gbc.gridwidth = 3;
        gbc.anchor = GridBagConstraints.CENTER;
        JPanel buttonPanel = new JPanel(new FlowLayout(FlowLayout.CENTER, 10, 0));
        buttonPanel.add(btnOk);
        buttonPanel.add(btnCancel);
        mainPanel.add(buttonPanel, gbc);

        JFrame frame = new JFrame("Trần Đức Anh 22CT1");
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