// Adding more behavior to objects
class Dog {
	int size;
	String name;

	void bark() {
		if(size > 60) {
			System.out.println("Woof! Woof!");
		}
		else if(size > 14) {
			System.out.println("Ruff! Ruff!");
		}
		else {
			System.out.println("Yipp! Yipp!");
		}
	}
}

class DogTestDrive {

	public static void main(String[] args) {
		Dog d1 = new Dog();
		d1.size = 70;

		Dog d2 = new Dog();
		d2.size = 8;

		Dog d3 = new Dog();
		d3.size = 35;

		d1.bark();
		d2.bark();
		d3.bark();
	}
}

