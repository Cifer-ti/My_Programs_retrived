public class SimpleStartupTestDrive {

	public static void main(String[] args) {
		SimpleStartup test = new SimpleStartup();

		int[] locations = {2, 3, 4};

		test.setLocationCells(locations);

		int userGuess = 2;
		String result = test.checkYourself(userGuess);
		String testResult = "failed";

		if(result.equals("hit")) {
			testResult = "test passed";
		}

		System.out.println(testResult);
	}
}

class SimpleStartup {
	private int [] locationCells;
	private int numOfHits = 0;

	public void setLocationCells(int [] locs) {
		locationCells = locs;
	}

	public String checkYourself(int guess) {
		String result = "miss";

		for(int cell : locationCells) {
			if(guess == cell) {
				result = "hit";
				numOfHits++;
				break;
			}
		}

		if(numOfHits == locationCells.length) {
			result = "kill";
		}

		System.out.println(result);
		return result;
	}
}
