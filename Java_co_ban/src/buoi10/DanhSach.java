package buoi10;

import javax.swing.*;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class DanhSach {
    private JList<String> list1;
    private JTextArea txtArea1;
    private JPanel mainPanel;
    private JButton btnCancel;

    public DanhSach() {
        JFrame frame = new JFrame("Trần Đức Anh 22CT1");
        frame.setContentPane(mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
        String[] colors = {"Green", "Red", "Yellow", "Pink", "Orange"};
        list1.setListData(colors);
        list1.addListSelectionListener(new ListSelectionListener() {
            @Override
            public void valueChanged(ListSelectionEvent e) {
                switch (list1.getSelectedIndex()) {
                    case 0:
                        txtArea1.setBackground(Color.GREEN);
                        break;
                    case 1:
                        txtArea1.setBackground(Color.RED);
                        break;
                    case 2:
                        txtArea1.setBackground(Color.YELLOW);
                        break;
                    case 3:
                        txtArea1.setBackground(Color.PINK);
                        break;
                    case 4:
                        txtArea1.setBackground(Color.ORANGE);
                        break;
                }
            }
        });

        btnCancel.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });
    }


    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new DanhSach();
            }
        });
    }
    public void setVisible(boolean b) {
    }
}
