// Write a Java program to check if a given number is a prime number.

import java.util.Scanner;

public class PrimeNumberCheck {

    // Method to check if a number is prime
    public static boolean isPrime(int number) {
        // Step 1: Handle edge cases
        if (number <= 1)
            return false; // Numbers less than or equal to 1 are not prime
        if (number == 2 || number == 3)
            return true; // 2 and 3 are prime numbers

        if (number % 2 == 0)
            return false; // Even numbers greater than 2 are not prime

        // Step 2: Check divisibility from 5 to sqrt(number)
        // No need to check even numbers or multiples of 3
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                return false; // If divisible by i or i + 2, it's not prime
            }
        }

        // If no factors found, the number is prime
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask for user input
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check if the number is prime and output the result
        if (isPrime(number)) {
            System.out.println(number + " is a prime number.");
        } else {
            System.out.println(number + " is not a prime number.");
        }

        scanner.close();
    }
}
