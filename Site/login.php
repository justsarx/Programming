<?php
include("./db.php");
session_start();
?>
<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>User Login</title>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
  <link rel="stylesheet" href="./style.css">
</head>

<body>
  <div class="container">
    <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
      <h1 class="h3 mb-3 fw-normal">Please Login</h1>

      <div class="form-floating">
        <input type="email" name="email" class="form-control" placeholder="email@example.com" required="">
        <label for="floatingPassword">Email</label>
      </div>
      <div class="form-floating">
        <input type="password" name="pass" class="form-control" placeholder="Password" required="">
        <label for="floatingPassword">Password</label>
      </div>
      
      <button name="submit" class="btn btn-primary w-100 py-2" type="submit">Sign in</button><br><br>
        
    </form>
    <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post" >
        <button name="register" class="btn btn-outline-secondary" type="submit">Register</button>  
    </form>
  </div>

</body>
</html>

<?php 
    if(isset($_POST["register"])){
        echo "<script>window.location.href='./reg.php';</script>";
    }
    if(isset($_POST['submit'])){
        $email = $_POST['email'];
        $password = $_POST['pass'];
        $sql = "SELECT * FROM users WHERE email = '$email' AND password = '$password'";
        $result = mysqli_query($conn, $sql);
        if(mysqli_num_rows($result) > 0){
            $row = mysqli_fetch_array($result);
            $_SESSION['email'] = $row["email"];
            $_SESSION['name'] = $row["name"];
            $_SESSION['course']= $row["course"];
            echo "<script>window.location.href='./home.php';</script>";
        }
        else{
            echo "<script>alert('Invalid Username or Password');</script>";
        }
    }
?>