<?php
$servername = "localhost"; 
$username = "root"; 
$password = "1234"; 
$dbname = "mydb"; 

$conn = new mysqli($servername, $username, $password, $dbname);
if (!$conn) {
    die('Could not connect to MySQL: ' . mysqli_connect_error());
}