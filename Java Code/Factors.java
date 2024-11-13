// Write a Java program to find all the factors of a given number

import java.util.Scanner;

public class Factors {
    public static void printFactors(int n) {
        System.out.print("Factors of " + n + " are: ");
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        printFactors(number);
        scanner.close();
    }
}
