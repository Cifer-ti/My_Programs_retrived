package org.example;

import java.util.ArrayList;
import java.util.List;
import static org.example.Folks.friends;

public class Transform {
  public static void main(String[] args) {

    {
      final List<String> uppercaseNames = new ArrayList<String>();

      for(String name : friends) {
        uppercaseNames.add(name.toUpperCase());
      }
      System.out.println(uppercaseNames);
    }

    {
      final List<String> uppercaseNames = new ArrayList<String>();

      friends.forEach(name -> uppercaseNames.add(name.toUpperCase()));
      System.out.println(uppercaseNames);System.out.println("//" + "END:NUMBER_OUTPUT");

    }

    System.out.println("//" + "START:TRANSFORM_OUTPUT");

      friends.stream()
              .map(name -> name.toUpperCase())
              .forEach(name -> System.out.print(name + " "));
      System.out.println();

    System.out.println("//" + "END:TRANSFORM_OUTPUT");

    System.out.println("//" + "START:NUMBER_OUTPUT");
    // Count the number of letters in a name

      friends.stream()
              .map(name -> name.length())
              .forEach(count -> System.out.print(count + " "));
      System.out.println();

    System.out.println("//" + "END:NUMBER_OUTPUT");

    // using method reference
    friends.stream()
            .map(String::toUpperCase)
            .forEach(System.out::println);

  }
}
