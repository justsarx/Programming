package Java.Programs;

import java.util.Scanner;

public class FactForLoop {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        scanner.close();

        long factorial = 1; // Use long to store larger factorials

        if (num < 0) {
            System.out.println("Factorial for negative numbers is not defined.");
        } else {
            for (int i = 1; i <= num; ++i) {
                factorial *= i;
            }
            System.out.println("Factorial of " + num + " is: " + factorial);
        }
    }
}
