class ElectricGuitar {
	String brand;
	int numOfPickups;
	boolean rockStarUsesIt;

	String getBrand() {
		return brand;
	}

	void setBrand(String aBrand) {
		brand = aBrand;
	}

	int getNumOfPickups() {
		return numOfPickups;
	}

	void setNumOfPickups(int num) {
		numOfPickups = num;
	}

	boolean getRockStarUsesIt() {
		return rockStarUsesIt;
	}

	void setRockStarUsesIt(boolean yesOrNo) {
		rockStarUsesIt = yesOrNo;
	}
}

class ElectricGuitarTestDrive {

	public static void main(String[] args) {
		ElectricGuitar Eg1 = new ElectricGuitar();
		ElectricGuitar Eg2 = new ElectricGuitar();

		String Eg1Brand;
		String Eg2Brand;

		Eg1.setBrand("HarmonyTone");
		Eg2.setBrand("NovaSonic");


		Eg1Brand = Eg1.getBrand();
		Eg2Brand = Eg2.getBrand();

		System.out.println("Brand name of first guitar: " + Eg1Brand);
		System.out.println("Brand name of second guitar: " + Eg2Brand);
	}
}
