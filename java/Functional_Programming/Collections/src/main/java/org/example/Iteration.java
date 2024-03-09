// The code here shows the different ways of iterating through a list
package org.example;

import static org.example.Folks.friends;
public class Iteration {
  public static void main(String[] args) {

    System.out.println("## basic for loop iteration ##");
    for(int i = 0; i < friends.size(); i++) {
      System.out.print(friends.get(i));
    }

    System.out.println("## enhanced for loop iteration ##");
    for(String name : friends) {
      System.out.println(name);
    }

    System.out.println("## Using FOR_EACH with lambda expression ##");
    friends.forEach(name -> System.out.println(name));

    System.out.println("## Using method reference ##");
    friends.forEach(System.out::println);
  }
}
