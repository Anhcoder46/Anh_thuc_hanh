package buoi10;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class QuocGia {
    private JPanel mainPanel;
    private JComboBox<String> cbbCountry;
    private JLabel lbFlag;

    public QuocGia() {
        JFrame frame = new JFrame("Trần Đức Anh 22CT1");
        frame.setContentPane(mainPanel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.pack();
        frame.setVisible(true);
        String[] im = {"Image/vn.png", "Image/china.png", "Image/japan.png", "Image/us.png", "Image/lao.png", "Image/en.png"};
        Icon[] ic = {new ImageIcon(im[0]), new ImageIcon(im[1]), new ImageIcon(im[2]), new ImageIcon(im[3]), new ImageIcon(im[4]), new ImageIcon(im[5])};
        String[] quocGia = {"Việt Nam", "Trung Quốc", "Nhật Bản", "Mỹ", "Lào", "Anh"};

        for (String country : quocGia) {
            cbbCountry.addItem(country);
        }

        cbbCountry.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int selectedIndex = cbbCountry.getSelectedIndex();
                if (selectedIndex >= 0 && selectedIndex < ic.length) {
                    lbFlag.setIcon(ic[selectedIndex]);
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
