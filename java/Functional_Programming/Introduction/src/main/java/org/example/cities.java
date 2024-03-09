package org.example;

import java.util.Arrays;
import java.util.List;

public class cities {

  public static void main(String[] args) {
    List<String> cities = Arrays.asList("Albany", "Boulder", "Chicago", "Denver", "Eugene");

    findChicagoImperative(cities);
    findChicagoDeclarative(cities);

  }

  public static void findChicagoImperative(final List<String> cities) {
    System.out.println("Imperative method: ");
    boolean found = false;

    for(String city : cities) {
      if(city.equals("Chicago")) {
        found = true;
        break;
      }
    }
    System.out.println("Found Chicago ? : " + found);
  }

  public static  void findChicagoDeclarative(final List<String> cities) {
    System.out.println("Declarative method: ");

    System.out.println("Found Chicago ? : " + cities.contains("Chicago"));
  }


}
