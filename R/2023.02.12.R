"Hello World"
print("Hello World2") #both are possible, but only print have output in console

#-----For Loops-----
for(x in 1:10){ #runs from 1 to 10 inclusive 10
  print(x) #must use print
}

fruits <- list("apple", "banana", "cherry")
for (x in fruits){ #go through list
  print(x)
}

dice <- c(1,2,3,4,5,6) #print number of dices
for (x in dice){
  print(x)
}



#oneline comment
#no syntax for multi -line comment



#-----Variables-----
name <- "John"
age <- 40

print(name)

#concat
text <- "awesome"
print(paste("R is", text))

num1 <- 5
num2 <- 10
print(num1+num2)#+ works as mathematical operator
                #can't concat numbers and strings

#multiple variables
var1 <- var2 <- var3 <- Orange



#-----Data Types-----
x <- 1000L
print(class(x))#class returns the type of variable



#-----Type Conversation-----
x <-1L #integer
y <- 2 #numeric

a <- as.numeric(x) #convert to numeric
b <- as.integer(y) #convert to integer

print(a)
print(b)
print(class(a))
print(class(b))



#-----Operators-----
#math
10+5  #addition
10-5  #subtraction
10*5  #multiplication
10/5  #division
10^5  #exponent
10%%5 #modulus
10%/%5#intager division

#comparison
10==5 #equal
10!=5 #Not equal
10>5 #greater than
10<5 #less then
10>=5 #greater than or equal to
10<=5 #less than or equal to

#logical
10&5 #and
10&&5 #logical and
10|5 #or
10||5 #logical or
! #not
  
#misc
1:10 #series of sumbers in a secuence
1 %in% 10 #find out if element belongs to a vector
1 %*% 10 #matrix multiplication



#-----Math Functions-----
max(5,10,15) #find highest number in set
min(5,10,15)  #find lowest number in set
sqrt(16)  #square root from number
abs(-4.7) #absolute (positive) value of number
ceiling(1.4) #rounds upwards
floor(1.4) #rounds downwards


#-----Strings-----
str <- "Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua.
"
cat(str) #line breaks at the same pos as in code

str <- "Hello World"
print(nchar(str))

print(grepl("H", str)) #check if char or seq are present in a string

#Escape Characters
str <- "We are the so-called \"Vikings\",from the north.\n"
cat(str) #cat only allows \"



#-----Booleans-----
a <- 200
b <- 33

if(b>a){
  print("b is greater than a")
} else{
  print("b is not greater than a")
}

#x<-3 is equal to 3->x



#-----While Loop-----
i <- 1
while (i < 6){  #count to 3 because break in if statement
  print(i)
  i <- i + 1
  if (i==4){
    break
  }
}

i <-0
while(i<6){ #jump over 3 because next in if statement
  i<-i+1
  if (i==3){
    next
  }
  print(i)
}



#-----Functions-----

#create a function
my_function <- function(){
  print("Hello World")
}

#call a function
my_function()

my_function2 <- function(name){
  print(paste("Hello", name))
}

my_function2("Peter") #must be one parameter because the function has one parameter