import javax.swing.*;

public class SimpleGui1 {
	public static void main(String[] args) {
		
		JFrame frame = new JFrame();
		JButton button = new JButton("Don't let me tell you what to do :/");

		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		frame.getContentPane().add(button);

		frame.setSize(300, 300);

		frame.setVisible(true);

	}
}

