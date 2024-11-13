// Write a Java program to calculate the factorial of a given number.

import java.util.Scanner;

public class Factorial {
    public static long factorial(int n) {
        long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        System.out.println("Factorial of " + number + " is: " + factorial(number));
        scanner.close();
    }
}


