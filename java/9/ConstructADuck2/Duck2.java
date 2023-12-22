package ConstructADuck2;

public class Duck2 {
		int size;

		// create a Duck object, without knwowing the size.
		public Duck2() {
				size = 30; // Assign default size

				System.out.println("No arguement provided. Using default value");
				System.out.println("size is: " + size);
		}

		public Duck2(int ducksizie) {
				// use ducksize parameter
				size = ducksizie;

				System.out.println("Using arguement value.");
				System.out.println("size is: " + size);
		}
}

