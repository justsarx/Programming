package Java.Programs;

public class SumRecursion {
    public static int sumOfNaturals(int n) {
        if (n <= 1) {
            return n; // Base case: sum of 1 is 1
        } else {
            return n + sumOfNaturals(n - 1); // Recursive case 
        }
    }

    public static void main(String[] args) {
        int n = 5; 
        int sum = sumOfNaturals(n);
        System.out.println("Sum of natural numbers up to " + n + " is: " + sum);
    }
}
