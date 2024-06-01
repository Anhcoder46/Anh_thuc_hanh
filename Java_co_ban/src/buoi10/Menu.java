package buoi10;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Menu extends JFrame {
    private JPanel mainPanel;
    private JMenu menu;
    private JMenuBar menuBar;
    private JMenuItem menuItemNhapText;
    private JMenuItem menuItemMayTinh;
    private JMenuItem menuItemQuocGia;
    private JMenuItem menuItemDanhSach;

    public Menu() {
        setTitle("Bài tập gộp trong Menu");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        mainPanel = new JPanel();
        setContentPane(mainPanel);

        menuBar = new JMenuBar();
        setJMenuBar(menuBar);

        menu = new JMenu("Menu");
        menuBar.add(menu);

        menuItemNhapText = new JMenuItem("Nhập Text");
        menuItemMayTinh = new JMenuItem("Máy tính");
        menuItemQuocGia = new JMenuItem("Quốc gia");
        menuItemDanhSach = new JMenuItem("Danh sách");

        menu.add(menuItemNhapText);
        menu.add(menuItemMayTinh);
        menu.add(menuItemQuocGia);
        menu.add(menuItemDanhSach);

        menuItemNhapText.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                NhapText nhapText = new NhapText();
                nhapText.setVisible(true);
            }
        });

        menuItemMayTinh.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                MayTinh mayTinh = new MayTinh();
                mayTinh.setVisible(true);
            }
        });

        menuItemQuocGia.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                QuocGia quocGia = new QuocGia();
                quocGia.setVisible(true);
            }
        });

        menuItemDanhSach.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                DanhSach danhSach = new DanhSach();
                danhSach.setVisible(true);
            }
        });
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new Menu().setVisible(true);
            }
        });
    }
}