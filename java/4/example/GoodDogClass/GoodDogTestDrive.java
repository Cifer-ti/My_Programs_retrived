// Adding encapsulation to the DogClass program.
class GoodDog {
	private int size;

	public void setSize(int s) {
		size = s;
	}

	public int getSize() {
		return size;
	}

	void bark() {
		if(size > 60) {
			System.out.println("Woof! Woof!");
		}

		else if(size > 14) {
			System.out.println("Ruff! Ruff!");
		}
		
		else {
			System.out.println("Yipp! Yipp");
		}

	}
		
}

class GoodDogTestDrive {
	
	public static void main(String[] args) {
		GoodDog one = new GoodDog();
		GoodDog two = new GoodDog();

		one.setSize(4);
		two.setSize(50);

		System.out.println("Dog one: " + one.getSize());
		System.out.println("Dog two: " + two.getSize());

		one.bark();
		two.bark();
	}
}
