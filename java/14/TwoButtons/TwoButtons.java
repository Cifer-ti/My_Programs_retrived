import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;
import java.util.RandomAccess;

public class TwoButtons {
	private JFrame frame;
	private JLabel lable;

	public static void main(String[] args) {
		new TwoButtons().go();
	}

	public void go() {
		frame = new JFrame();

		JButton labelButton = new JButton("Change label");
		labelButton.addActionListener(event -> lable.setText("I've changed"));

		JButton colorButton = new JButton("Change colors");
		colorButton.addActionListener(event -> frame.repaint());

		MyDrawPanel drawPanel = new MyDrawPanel();

		lable = new JLabel("I'm a label");
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().add(BorderLayout.SOUTH, colorButton);
		frame.getContentPane().add(BorderLayout.CENTER, drawPanel);
		frame.getContentPane().add(BorderLayout.EAST, labelButton);
		frame.getContentPane().add(BorderLayout.WEST, lable);
		frame.setSize(500, 400);
		frame.setVisible(true);
	}
/*
	class LabelListener implements ActionListener {
		public void actionPerformed(ActionEvent event) {
			lable.setText("ouch!");
		}
	}

	class ColorListerner implements ActionListener {
		public void actionPerformed(ActionEvent event) {
			frame.repaint();
		}
	}
	*/
}

class MyDrawPanel extends JPanel {
	public void paintComponent(Graphics g) {
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
