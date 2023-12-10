package main

import "fmt"

func main() {

	var number1 int
	var number2 int
	var choice int = 0

	fmt.Println("Enter first number :- ")
	fmt.Scanln(&number1)
	fmt.Println("Enter second number :- ")
	fmt.Scanln(&number2)

	var x int
	fmt.Println("number 1 = ", number1, "\nnumber 2 =", number2)
	fmt.Println(" choice 1: Addition of the two numbers")
	fmt.Println(" choice 2: Subtraction of the two numbers")
	fmt.Println(" choice 3: Multiplication of the two numbers")
	fmt.Println(" choice 4: Division of the two numbers")
	fmt.Scanln(&choice)

	switch choice {
	case 1:
		x = number1 + number2
		fmt.Printf("Addition: %d", x)
	case 2:
		x = number1 - number2
		fmt.Printf("Subtraction: %d", x)
	case 3:
		x = number1 * number2
		fmt.Printf("Multiplication: %d", x)
	case 4:
		x = number1 / number2
		fmt.Printf("Division: %d", x)
	default:
		fmt.Println("Invalid number")
	}

}
