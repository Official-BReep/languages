package main

import ("fmt")

type Person struct { //structure with name Person
	name string
	age int
	job string
	salary int
}

func printPerson(pers Person){
	fmt.Println("Name: ", pers.name)
	fmt.Println("Age: ", pers.age)
	fmt.Println("Job: ", pers.job)
	fmt.Println("Salary: ", pers.salary)
}


func main(){
	var pers1 Person
	var pers2 Person

	//Pers1
	pers1.name = "Hedge"
	pers1.age = 45
	pers1.job = "Teacher"
	pers1.salary = 6000

	//Pers2
	pers2.name = "Cecilie"
	pers2.age = 24
	pers2.job = "Marketing"
	pers2.salary = 4500

	//Access Pers1 info
	printPerson(pers1)
	fmt.Println()

	//Access Pers2 info
	fmt.Println("Name: ", pers2.name)
	fmt.Println("Age: ", pers2.age)
	fmt.Println("Job: ", pers2.job)
	fmt.Println("Salary: ", pers2.salary)

	//!Maps
	var a = map[int]string{1:"Ford", 2:"Audi"}  //first = keytype; second = valuetype
	//you can make a map with a make function too ^^
	fmt.Printf("a\t%v\n\n",a[1])

	//remeve elements with delete

	//maps are reverents

	for key, val := range a{
		fmt.Println("Key: ", key, "Value: ", val)
	}
}