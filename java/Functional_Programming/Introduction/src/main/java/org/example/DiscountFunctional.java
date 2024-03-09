package org.example;

import java.math.BigDecimal;
import static org.example.Prices.prices;

public class DiscountFunctional {

	public static void main(String[] args) {

		final BigDecimal totalDiscountedPrices =
          prices.stream()
            .filter(price -> price.compareTo(BigDecimal.valueOf(20)) > 0)
            .map(price -> price.multiply(BigDecimal.valueOf(0.9)))
            .reduce(BigDecimal.ZERO, BigDecimal::add);

		System.out.println("Total of discount prices: " + totalDiscountedPrices);
	}
}
