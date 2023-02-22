package main

import (
	"fmt"
)

func main() {
	for i := 0; i < 5; i++ { //first statement = start; second statement = Bedingung; third statement = stop after every iteration
		if i == 3 {
			continue //jump over one iteration
		}
		if i == 4 {
			break //stop the loop imediantly
		}
		fmt.Println(i)
	} //i can place a loop in a loop; hier is the inner loop for one iteration of outer loop
	fruits := [3]string{"apple", "orange", "banana"}
	for idx, val := range fruits { //to get only index or only value we can use _ on other side
		fmt.Printf("%v\t%v\n", idx, val)
	}
	MyFunction2(3, "Peter")

	total := NamedValue(1, 2) //store Return Value in a Variable
	fmt.Println(total)

	recursion(1)
	fmt.Println(factorial_recursion(4))
}

// create function
func MyFunction() {
	fmt.Println("I just got executed!")
}

func MyFunction2(number int, word string) { //function with parameter
	fmt.Println("Hello", number, "year old", word, "Refsnes")
}

func MyFunction3(x int, y int) int { //return (x+y) as Intager
	return x + y
}

// *named return values
func NamedValue(xx int, yy int) (result int) { //return result as intager without specifying name in return statement
	result = xx + yy //you can add more result values
	return
}

// !recursion
func recursion(x int) int {
	if x == 11 {
		return 0 //ends the recursion
	}
	fmt.Println(x)
	return recursion(x + 1)
}

// factorial_recursion
func factorial_recursion(x float64) (y float64) { //float64 = double; float32 = float
	if x > 0 {
		y = x * factorial_recursion(x-1) //take result of last calculation and multiply it with x
		fmt.Println("y=", y, "und x=", x)
	} else {
		y = 1
	}
	return
}
