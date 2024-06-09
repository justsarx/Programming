package Java.Programs;

import java.util.Scanner;

public class reverseNum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number to reverse: ");
        int number = scanner.nextInt();
        scanner.close();

        int reversedNumber = 0;

        while (number != 0) {
            int digit = number % 10; // Extract the last digit
            reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
            number /= 10; // Remove the last digit from the original number
        }

        System.out.println("The reversed number is: " + reversedNumber);
    }
}
