package buoi10;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ComponentAdapter;

public class HelloDemo extends JFrame {
    private JPanel panelMain;
    private JTextField txtName;
    private JButton btnClick;

    public HelloDemo() {
        btnClick.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(btnClick, txtName.getText() + " Hello");
            }
        });
        panelMain.addComponentListener(new ComponentAdapter() {
        });
    }

    public static void main(String[] args) {
        HelloDemo h = new HelloDemo();
        h.setContentPane(h.panelMain);
        h.setTitle("Hello");
        h.setBounds(100, 200, 200, 200);
        //h.setSize(300, 400);
        h.setVisible(true);
        h.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
