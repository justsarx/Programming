package Java.Programs;

public class invertHalfPyramid {
    public static void main(String[] args) {
        int rows = 5; 

        // Outer loop for rows (iterates in reverse order)
        for (int i = rows; i >= 1; --i) {
            // Inner loop for printing numbers
            for (int j = 1; j <= i; ++j) {
                System.out.print(j + " ");
            }
            // Newline after each row
            System.out.println();
        }
    }
}
