package Java.Programs;

public class fibbonacci {
    public static void main(String[] args) {
        int count = 10; // Number of terms to display
        int n1 = 0, n2 = 1, n3;

        System.out.print(n1 + " " + n2); // Print the first two terms

        // Loop to calculate and print the rest of the terms
        for (int i = 2; i < count; ++i) {
            n3 = n1 + n2;
            System.out.print(" " + n3);
            n1 = n2;
            n2 = n3;
        }
    }
}
