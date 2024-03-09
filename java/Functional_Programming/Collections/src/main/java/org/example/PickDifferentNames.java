package org.example;

import java.util.function.Function;
import java.util.function.Predicate;
import static org.example.Folks.friends;

public class PickDifferentNames {

  public static Predicate<String> checkIfStartsWith(final String letter) {
    return name -> name.startsWith(letter);
  }
  public static void main(String[] args) {

    System.out.println(friends);

    {
      System.out.println("## Method 1 ##");
      final Predicate<String> startsWithN = name -> name.startsWith("N");
      final Predicate<String> startsWithB = name -> name.startsWith("B");

      final long countFriendsStartWithN =
              friends.stream()
                      .filter(startsWithN)
                      .count();

      final long countFriendsStartWithB =
              friends.stream()
                      .filter(startsWithB)
                      .count();

      System.out.println("Starting with N: " + countFriendsStartWithN);
      System.out.println("Starting with B: " + countFriendsStartWithB);
    }

    {
      System.out.println("## Method 2 ##");
      final long countFriendsStartWithN =
              friends.stream()
                      .filter(checkIfStartsWith("N"))
                      .count();

      final long countFriendsStartWithB =
              friends.stream()
                      .filter(checkIfStartsWith("B"))
                      .count();

      System.out.println("Starting with N: " + countFriendsStartWithN);
      System.out.println("Starting with B: " + countFriendsStartWithB);
    }

    {
      System.out.println("## Methdd 3 ##");
      final Function<String, Predicate<String>> startsWithLetter =
            (String letter) -> {
              Predicate<String> checkStarts = (String name) -> name.startsWith(letter);
              return checkStarts;
            };

      final long countFriendsStartWithN =
              friends.stream()
                      .filter(startsWithLetter.apply("N"))
                      .count();

      final long countFriendsStartWithB =
              friends.stream()
                      .filter(startsWithLetter.apply("B"))
                      .count();

      System.out.println("Starting with N: " + countFriendsStartWithN);
      System.out.println("Starting with B: " + countFriendsStartWithB);
    }

    {
      System.out.println("## Method 4 ##");

      final Function<String, Predicate<String>> startsWithLetter =
              letter -> name -> name.startsWith(letter);

      final long countFriendsStartWithN =
              friends.stream()
                      .filter(startsWithLetter.apply("N"))
                      .count();

      final long countFriendsStartWithB =
              friends.stream()
                      .filter(startsWithLetter.apply("B"))
                      .count();

      System.out.println("Starting with N: " + countFriendsStartWithN);
      System.out.println("Starting with B: " + countFriendsStartWithB);
    }
  }

}

