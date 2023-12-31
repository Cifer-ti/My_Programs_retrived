import  javax.swing.*;
import  java.awt.*;
import  java.awt.event.*;
import java.util.Random;

public class SimpleGui3 implements ActionListener {
    private  JFrame frame;

    public void go() {
        frame = new JFrame();
        JButton button = new JButton("Change colors");
        MyDrawPanel drawPanel = new MyDrawPanel());

        button.addActionListener(this);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setContentPane().add(button);
        frame.setSize(300, 300);
        frame.setVisible(true);


    }
    public void actionPerformed(ActionEvent e) {
        frame.repaint();
    }
}
class MyDrawPanel extends JPanel {
    public  void paintComponent(Graphics g) {
        g.fillRect(0, 0, getWidth(), getHeight());

        Random random = new Random();
        int red = random.nextInt(256);
        int green = random.nextInt(256);
        int blue = random.nextInt(256);

        Color randomColor = new Color(red, green, blue);
        g.setColor(randomColor);
        g.fillOval(70, 70, 100, 100);
    }
}