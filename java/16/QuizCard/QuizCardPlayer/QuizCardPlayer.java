package QuizCard.QuizCardPlayer;

import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.security.PrivateKey;
import java.util.ArrayList;
import java.util.concurrent.ThreadPoolExecutor.DiscardPolicy;
import java.util.jar.Manifest;

public class QuizCardPlayer {
	private ArrayList<QuizCard> cardList;
	private int currentCardIndex;
	private QuizCard currentCard;
	private JTextArea display;
	private JFrame frame;
	private JButton nextButton;
	private boolean isShowAnswer;

	public static void main(String[] args) {
		QuizCardPlayer reader = new QuizCardPlayer();
		reader.go();
	}

	public void go() {
		frame = new JFrame("Quiz card Player");
		JPanel mainPanel = new JPanel();
		Font bigFont = new Font("Sanserif", Font.BOLD, 24);

		display = new JTextArea(10, 20);
		display.setFont(bigFont);
		display.setLineWrap(true);
		display.setWrapStyleWord(true);
		display.setEditable(false);

		JScrollPane scroller = new JScrollPane(display);
		scroller.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
		scroller.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
		mainPanel.add(scroller);

		nextButton = new JButton("Show Question");
		nextButton.addActionListener(e -> nextCard());
		mainPanel.add(nextButton);

		JMenuBar menuBar = new JMenuBar();
		JMenu fileMenu = new JMenu("File");
		JMenuItem laodMenuItem = new JMenuItem("Lad card set");
		laodMenuItem.addActionListener(e -> open());
		fileMenu.add(laodMenuItem);
		menuBar.add(fileMenu);
		frame.setJMenuBar(menuBar);

		frame.getContentPane().add(BorderLayout.CENTER, mainPanel);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(600, 500);
		frame.setVisible(true);

	}

	private void showNextCard() {
		currentCard = cardList.get(currentCardIndex);
		currentCardIndex++;
		display.setText(currentCard.getQuestion());
		nextButton.setText("Show Answer");
		isShowAnswer = true;
	}

	private void makeCard(String lineToParse) {
		String[] result = lineToParse.split("/");
		QuizCard card = new QuizCard(result[0], result[1]);
		cardList.add(card);
		System.out.println("Made a new card");
	}

	private void loadFile(File file) {
		cardList = new ArrayList<>();
		currentCardIndex = 0;
		try {
			BufferedReader reader = new BufferedReader(new FileReader(file));
			String line;
			while((line = reader.readLine()) != null) {
				makeCard(line);
			}
			reader.close();
		} catch(IOException e) {
			System.out.println("Couldn't write the cardList out: " + e.getMessage());
		}
		showNextCard();
	}

	private void open() {
		JFileChooser fileOpen = new JFileChooser();
		fileOpen.showOpenDialog(frame);
		loadFile(fileOpen.getSelectedFile());
	}

	private void nextCard() {
		if(isShowAnswer) {
			// show the Answer because they've seen the Question
			display.setText(currentCard.getAnswer());
			nextButton.setText("Next Card");
			isShowAnswer = false;
		} else { // Show the next Question
			if(currentCardIndex < cardList.size()) {
				showNextCard();
			} else {
				// there are no more cards 
				display.setText("That was the last card");
				nextButton.setEnabled(false);
			}
		}
	}
}
