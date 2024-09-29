<?php
$hostname = "localhost"; 
$username = "justsarx"; 
$password = "1234"; 
$dbname = "mydb"; 

$conn = new mysqli($hostname, $username, $password, $dbname);
if (!$conn) {
    die('Could not connect to MySQL: ' . mysqli_connect_error());
}