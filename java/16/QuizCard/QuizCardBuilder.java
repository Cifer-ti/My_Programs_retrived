package QuizCard;

import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.util.ArrayList;

public class QuizCardBuilder {
	private ArrayList<QuizCard> cardList = new ArrayList<>();
	private JTextArea questionArea;
	private JTextArea answerArea;
	private JFrame frame;

	public static void main(String[] args) {
		new QuizCardBuilder().go();
	}

	public void go() {
		frame = new JFrame("Quiz Card Builder");
		JPanel mainPanel = new JPanel();
		Font bigFont = new Font("sanserif", Font.BOLD, 24);

		questionArea = createTextArea(bigFont);
		JScrollPane qScroller = createScroller(questionArea);
		answerArea = createTextArea(bigFont);
		JScrollPane aScroller = createScroller(answerArea);

		mainPanel.add(new JLabel("Question:"));
		mainPanel.add(qScroller);
		mainPanel.add(new JLabel("Answer:"));
		mainPanel.add(aScroller);

		JButton nextButton = new JButton("Next Card");
		nextButton.addActionListener(e -> nextCard());
		mainPanel.add(nextButton);

		JMenuBar menuBar = new JMenuBar();
		JMenu fileMenu = new JMenu("File");

		JMenuItem newMenuItem = new JMenuItem("New");
		newMenuItem.addActionListener(e -> clearAll());

		JMenuItem saveMenuItem = new JMenuItem("Save");
		saveMenuItem.addActionListener(e -> saveCard());

		fileMenu.add(newMenuItem);
		fileMenu.add(saveMenuItem);
		menuBar.add(fileMenu);
		frame.setJMenuBar(menuBar);

		frame.getContentPane().add(BorderLayout.CENTER, mainPanel);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(600, 500);
		frame.setVisible(true);

	}

	private JScrollPane createScroller(JTextArea textArea) {
		JScrollPane scroller = new JScrollPane(textArea);
		scroller.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
		scroller.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
		return scroller;
	}

	private JTextArea createTextArea(Font font) {
		JTextArea textArea = new JTextArea(6, 20);
		textArea.setLineWrap(true);
		textArea.setWrapStyleWord(true);
		textArea.setFont(font);
		return textArea;
	}

	private void nextCard() {
		QuizCard card = new QuizCard(questionArea.getText(), answerArea.getText());
		cardList.add(card);
		clearCard();
	}

	private void clearAll() {
		cardList.clear();
		clearCard();
	}

	private void clearCard() {
		questionArea.setText("");
		answerArea.setText("");
		questionArea.requestFocus();
	}

	private void saveCard() {
		QuizCard card = new QuizCard(questionArea.getText(), answerArea.getText());
		cardList.add(card);

		JFileChooser fileSave = new JFileChooser();
		fileSave.showSaveDialog(frame);
		saveFile(fileSave.getSelectedFile());
	}

	private void saveFile(File file) {
		try {
			BufferedWriter writer = new BufferedWriter(new FileWriter(file));
			for(QuizCard card : cardList) {
				writer.write(card.getQuestion() + "/");
				writer.write(card.getAnswer() + "\n");
			}
			writer.close();
		} catch(IOException e) {
			System.out.println("Couldn't write the cardList out: " + e.getMessage());
		}
	}
}
