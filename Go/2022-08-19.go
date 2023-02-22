package main

import (
	"fmt"
) //import "fmt" package

const A = 1

func main() {
	fmt.Println("Hallo Welt")
	var str string = "Peter" //type is string
	otherstr := "Griffin"    //type is inferred, can only be used inside functions, declaration and value cannto be done separately
	var thirdstring = "Jane" //type is inferred

	fmt.Println(str)
	fmt.Println(otherstr)
	fmt.Println(thirdstring)

	//without initialvalue
	var a string //default = ""
	var b int    //default = 0
	var c bool   //default = false

	fmt.Println(a)
	fmt.Println(b)
	fmt.Println(c)

	//value after declaration
	var student1 string
	student1 = "John"
	fmt.Println(student1)

	//multiple vars
	var d, e, f, g int = 1, 3, 5, 7
	var h, i = 6, "Hello"
	j, k := 7, "World!"
	var (
		l int
		m int    = 1
		n string = "hello"
	)
	fmt.Println(d)
	fmt.Println(e)
	fmt.Println(f)
	fmt.Println(g)
	fmt.Println(h)
	fmt.Println(i)
	fmt.Println(j)
	fmt.Println(k)
	fmt.Println(l)
	fmt.Println(m)
	fmt.Println(n)

	const PI = 3.14 //read only

	//Printf
	fmt.Printf("i has value: %v and type: %T\n", i, i)
	fmt.Printf("j has value: %v and type: %T", j, j)

	/*Println ist ähnlich wie Print nur wird zwischen den Argumenten ein Leerzeichen gelassen*/

}
