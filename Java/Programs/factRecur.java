package Java.Programs;

public class factRecur {
    public static int factorial(int n) {
        if (n == 0) {
            return 1; // Base case: Factorial of 0 is 1
        } else {
            return n * factorial(n - 1); // Recursive case
        }
    }

    public static void main(String[] args) {
        int number = 5;
        int fact = factorial(number);
        System.out.println("Factorial of " + number + " is: " + fact);
    }
}
