import java.util.Scanner;

public class FibonacciSeries {

    // Method to print the Fibonacci series up to 'n' terms
    public static void printFibonacci(int n) {
        // Handle edge cases
        if (n <= 0) {
            System.out.println("Please enter a positive integer.");
            return;
        }

        // First two Fibonacci numbers
        long a = 0, b = 1;

        System.out.print("Fibonacci Series up to " + n + " terms: ");

        // If n is 1, print only the first term
        if (n >= 1) {
            System.out.print(a + " ");
        }

        // If n is 2 or more, print the second term as well
        if (n >= 2) {
            System.out.print(b + " ");
        }

        // Print the rest of the Fibonacci series using iteration
        for (int i = 3; i <= n; i++) {
            long nextTerm = a + b;
            System.out.print(nextTerm + " ");
            a = b;
            b = nextTerm;
        }

        System.out.println(); // Newline for better output formatting
    }

    public static void main(String[] args) {
        // Scanner to take input from the user
        Scanner scanner = new Scanner(System.in);

        // Ask for the number of terms in the Fibonacci series
        System.out.print("Enter the number of terms you want in the Fibonacci series: ");
        int n = scanner.nextInt();

        // Print the Fibonacci series up to n terms
        printFibonacci(n);

        scanner.close();
    }
}
