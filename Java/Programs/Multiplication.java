package Java.Programs;

import java.util.Scanner;

public class Multiplication {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        scanner.close();

        // Outer loop for the rows of the table
        for (int i = 1; i <= 10; ++i) {
            // Inner loop to calculate and print the product 
            System.out.printf("%d * %d = %d \n", num, i, num * i);
        }
    }
}
