package Java.Programs;

import java.util.Scanner;

public class compStr {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String string1 = scanner.nextLine();

        System.out.print("Enter the second string: ");
        String string2 = scanner.nextLine();

        // Case-sensitive comparison with equals()
        boolean result1 = string1.equals(string2);
        System.out.println("Case-sensitive comparison result (equals()): " + result1);

        // Case-insensitive comparison with equalsIgnoreCase()
        boolean result2 = string1.equalsIgnoreCase(string2);
        System.out.println("Case-insensitive comparison result (equalsIgnoreCase()): " + result2);

        scanner.close();
    }
}
