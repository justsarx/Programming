package Java.Programs;

public class HalfPyramid {

    public static void main(String[] args) {
        int rows = 5; // Number of rows in the pyramid

        // Outer loop for rows
        for (int i = 1; i <= rows; ++i) {
            // Inner loop for printing asterisks
            for (int j = 1; j <= i; ++j) {
                System.out.print("*");
            }
            // Newline after each row
            System.out.println();
        }
    }

}
