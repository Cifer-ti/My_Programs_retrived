class Dog {
	String name;

	public static void main(String[] args) {
		// making a Dog object and access it
		Dog dog1 = new Dog();

		dog1.name = "Bart";
		dog1.bark();
		dog1.eat();
		dog1.chasecat();

		// now making a dog array
		Dog[] MyDogs = new Dog[3];
		// Putting some dogs in these array
		MyDogs[0] = new Dog();
		MyDogs[1] = new Dog();
		MyDogs[2] = dog1; 

		// accessing the Dogs using the array references
		MyDogs[0].name = "Fred";
		MyDogs[1].name = "Marge";

		// MyDogs[2]'s name
		System.out.print("Last dog's name is ");
		System.out.println(MyDogs[2].name);
		
		// Looping through array, to tell all Dogs to bark
		int x = 0;
		while (x < MyDogs.length) {
			MyDogs[x].bark();
			MyDogs[x].eat();
			MyDogs[x].chasecat();
			x = x + 1;
		}
	}
	
	public void bark() {
		System.out.println(name + " says Ruff!");
	}

	public void eat() {
		System.out.println(name + " is asking for a good appetite wish");
	}

	public void chasecat() {
		System.out.println(name + ": This cat thinks it's fast");
	}
}

