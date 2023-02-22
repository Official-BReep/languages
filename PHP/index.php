<!DOCTYPE html>
<html>
<body>

<h1>My first PHP page</h1>

<?php
echo "Hello World!<br>"; //<br> macht einen Zeilenumbruch
$color = "red";
echo " My car is " . $color . "<br>"; #single Comment
//single comment
/*
multiply comment
*/
$x = 5/*+15*/+5;
echo $x;

function myTest() {
    $x = 5; // local scope
    echo "<p>Variable x inside function is: $x</p>";
}
myTest();
echo "<p>Variable x outside function is: $x</p>";
print "<h2>PHP is Fun!</h2>"; #Does the same as echo

$x = 5985;
$y = 67.7;
var_dump("$x,"); #return type and value
var_dump("$y");

$choice = true;
$choice2 = false;
echo "<br>";
$cars = array("Volvo", "BMW", "Toyota");
var_dump($cars);

echo "<br>";
$z = "Hello world!";
$z = null;
var_dump($z); 
?>

</body>
</html> 