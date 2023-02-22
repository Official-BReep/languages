package main

import (
	"fmt"
)

//! formating results

func main() {
	var i = 15.5
	var txt = "Hello World!"
	////fmt.Println("Hallo Welt")
	fmt.Printf("%v\n", i)   //prints the value in the default format
	fmt.Printf("%#v\n", i)  //prints the value in Go-syntax format
	fmt.Printf("%v%%\n", i) //prints the % sign
	fmt.Printf("%T\n", i)   //prints the Type of the value

	fmt.Printf("%v\n", txt)
	fmt.Printf("%#v\n", txt)
	fmt.Printf("%T\n\n", txt)

	//*Intager

	var j = 15
	fmt.Printf("%b\n", j)     //binary output
	fmt.Printf("%d\n", j)     //decimal output
	fmt.Printf("%+d\n", j)    //decimal output with - or +
	fmt.Printf("%o\n", j)     //octal output
	fmt.Printf("%O\n", j)     //octal output with 0o
	fmt.Printf("%x\n", j)     //hexadecimal output
	fmt.Printf("%X\n", j)     //hexadecimal output (uppercase)
	fmt.Printf("%#x\n", j)    //hexadecimal output with 0x
	fmt.Printf("%4d\n", j)    //pad with spaces (width 4, right)
	fmt.Printf("%-4d\n", j)   //pad with spaces (width 4, left)
	fmt.Printf("%04d\n\n", j) //pad with zeroes (width 4)

	//*string
	var text = "Hello"
	fmt.Printf("%s\n", text)    //plain string output
	fmt.Printf("%q\n", text)    //double-quoted string output
	fmt.Printf("%8s\n", text)   //plain string(width 8, right)
	fmt.Printf("%-8s\n", text)  //plain string(width 8, left)
	fmt.Printf("%x\n", text)    //Value as Hex
	fmt.Printf("% x\n\n", text) //value as hex with spaces

	//*bool
	var k = true
	var l = false

	fmt.Printf("%t\n", k) //same as %v
	fmt.Printf("%t\n\n", l)

	//*float
	var h = 3.141

	fmt.Printf("%e\n", h)    //with e as exponent
	fmt.Printf("%f\n", h)    //Decimal point, no exponent
	fmt.Printf("%.2f\n", h)  //prevision 2, default width
	fmt.Printf("%6.2f\n", h) //prevision, width 6
	fmt.Printf("%g\n\n", h)  //Exponent as needed, only necessary digits

	//*Types
	/*
		bool      Boolean
		int       Intager
		float32   Floating point number
		string    String
	*/

	var txt1 string = "Hello!"
	fmt.Printf("Type: %T, value: %v\n", txt1, txt1) //first txt1 is for Type and second to print the word

	//*arrays

	var arr1 = [3]int{1, 2, 3}
	arr2 := [...]int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	arr3 := [5]int{}
	arr4 := [5]int{1, 2}
	arr5 := [5]int{1: 10, 2: 20}

	fmt.Println(arr1) //Output [1 2 3]
	fmt.Println(arr2) //Output [1 2 3 4 5 6 7 8 9]
	fmt.Println(arr3) //Output [0 0 0 0 0]
	fmt.Println(arr4) //Output [1 2 0 0 0]
	fmt.Println(arr5) //Output [0 10 20 0 0]

	//! slices (similar to arrays, but more powerful and flexible)

	firstslice := []int{}
	fmt.Println("Length: ", len(firstslice))         //output len of firstslice
	fmt.Println("Capacity: ", cap(firstslice), "\n") //output capacity of firstslice#
	fmt.Println(firstslice)

	secondslice := []string{"Slices", "are", "powerfull"}
	fmt.Println("Length: ", len(secondslice))
	fmt.Println("capacity: ", cap(secondslice))
	fmt.Println(secondslice)

	//*Create a slice from an Array
	var myarray = [...]int{1, 2, 3, 4, 8, 6, 7}
	myslice := myarray[0:2]

	fmt.Printf("myslice = %v\n", myslice)
	fmt.Printf("length = %d\n", len(myslice))
	fmt.Printf("capacity = %d\n", cap(myslice))

	//*Create a Slice with make Function
	slice_name := make([]int, 5, 10) //slice with length 5 and capacity 10
	fmt.Println(slice_name)
	other_slice := make([]int, 5) //slice with length 5
	fmt.Println(other_slice)

	//! Acces to elements in slice
	prices := []int{10, 20, 30}

	fmt.Println("\n", prices[0]) //Output: 10
	fmt.Println(prices[2])       //Output: 30

	//* Change element
	other_prices := []int{10, 20, 30}
	other_prices[2] = 50
	fmt.Println("\n", prices[0])
	fmt.Println(prices[2])

	//append to other slices
	myslice1 := []int{1, 2, 3, 4, 5, 6}
	myslice2 := []int{22, 23}
	myslice1 = append(myslice1, 20, 21)
	fmt.Println("\n", myslice1)

	myslice3 := append(myslice1, myslice2...)
	fmt.Println(myslice3)

	//! copy
	numbers := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}
	//copy is here
	neededNumbers := numbers[:len(numbers)-10] //read 15-10 elements
	//fmt.Println(neededNumbers)
	numbersCopy := make([]int, len(neededNumbers)) //Create slice with length of 5
	copy(numbersCopy, neededNumbers)               //write the result of neededNumbers into the slice numbersCopy
	fmt.Printf("numbersCopy = %v\n", numbersCopy)

	//! operator
	var (
		sum1 = 100 + 50    //150 (100+50)
		sum2 = sum1 + 250  //400 (150+250)
		sum3 = sum2 + sum2 //800 (400+400)
	)
	fmt.Println("\n", sum3)

	//Other
	/*
		+  Addition
		-  Subtraction
		*  Multiplication
		/  Division
		%  Modulus
		++ Increment
		-- Decrement
	*/

	//assignment operators
	/*
		=
		+=
		-=
		*=
		/=
		%=
		&=
		|=
		^=
		>>=
		<<=
	*/

	//Comparision operators
	/*
		==
		!=
		>
		<
		>=
		<=
	*/

	//Logical operators
	/*
		&&   and
		||   or
		!    not
	*/

	//Bitwise Operators
	/*
		&    and (both)
		|    or (one or both)
		^    xor (only one)
		<<   Zero fill (left shift)
		>>   Zero fill (right shift)
	*/

	//! if statement
	if 20 > 18 {
		fmt.Println("20 is greater then 18") //i can write an if-statement in an if-statement
	} else { //else if is the elif in go
		fmt.Println("20 is not greater then 18")
	}

	//! switch statement
	day := 4

	switch day {
	case 1:
		fmt.Println("Monday")
	case 2:
		fmt.Println("Tuesday")
	case 3:
		fmt.Println("Wednesday")
	case 4:
		fmt.Println("Thursday")
	case 5:
		fmt.Println("Friday")
	case 6:
		fmt.Println("Saturday")
	case 7:
		fmt.Println("Sunday")
	default:
		fmt.Println("Not a weekday")
	}

	//!Multiswitch
	weekday := 5

	switch weekday {
	case 1, 3, 5:
		fmt.Println("Odd Weekday")
	case 2, 4:
		fmt.Println("Even Weekday")
	case 6, 7:
		fmt.Println("Weekend")
	}
}
