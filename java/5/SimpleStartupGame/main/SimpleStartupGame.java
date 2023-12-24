import java.util.Scanner;

public class SimpleStartupGame {
	public static void main(String[] args) {
		int numOfGuess = 0;
		GameHelper helper = new GameHelper();

		SimpleStartup theStartup = new SimpleStartup();
		int randomNum = (int) (Math.random() * 5);

		int[] locations = {randomNum, randomNum + 1, randomNum + 2};
		theStartup.setLocationCells(locations);
		
		boolean isAlive = true;
		while(isAlive) {
			int guess = helper.getUserInput("enter a number");
			String result = theStartup.checkYourself(guess);
			numOfGuess++;

			if(result.equals("kill")) {
				isAlive = false;
				System.out.println("You took " + numOfGuess + " guesses");
			}
		}

	}
}

class GameHelper {
	public int getUserInput(String prompt) {
		System.out.print(prompt + ": ");
		Scanner scanner = new Scanner(System.=in);

		return scanner.nextInt();
	}
}

class SimpleStartup {
  private int[] locationCells;
  private int numOfHits = 0;

  public void setLocationCells(int[] locs) {
    locationCells = locs;
  }

  public String checkYourself(int guess) {
    String result = "miss";
    for (int cell : locationCells) {
      if (guess == cell) {
        result = "hit";
        numOfHits++;
        break;
      } // end if
    } // end for
    if (numOfHits == locationCells.length) {
      result = "kill";
    } // end if
    System.out.println(result);
    return result;
  } // end method
} // close class

