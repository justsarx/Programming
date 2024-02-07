package Java;

import java.util.Scanner;

public class temp {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Principal amount :: ");
                double p=sc.nextDouble();
                System.out.print("\nEnter the Rate :: ");
                double r =sc.nextDouble();
                System.out.print("\nEnter the time :: ");
                double t=sc.nextDouble();

                double si=(p*r*t)/100;
                double amount = p * Math.pow(1 + r / 100, t);
                double ci = amount - p;
                System.out.print("\nThe Simple interest is :: "+ si);
                System.out.printf("\nThe Compound interest is :: %.2f",ci);
        }


    }
}