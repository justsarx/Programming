<?php
include("./db.php");
?>
<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>User Registration</title>
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
  <link rel="stylesheet" href="./style.css">
</head>

<body>
  <div class="container">
    <form action="<?php $_SERVER['PHP_SELF']?>" method="post">
      <h1 class="h3 mb-3 fw-normal">Please Register</h1>

      <div class="form-floating">
        <input type="text" name="username" class="form-control" placeholder="Name" required="">
        <label for="floatingInput"> Name</label>
      </div>
      <div class="form-floating">
        <input type="email" name="email" class="form-control" placeholder="email@example.com" required="">
        <label for="floatingPassword">Email</label>
      </div>
      <div class="form-floating">
        <input type="text" name="mobile" class="form-control" placeholder="Mobile" required="">
        <label for="floatingPassword">Mobile</label>
      </div>
      <div class="col-md-5">
        <label for="course" class="form-label">Course</label>
        <select name="course" class="form-select" id="course" required="">
          <option value="">Choose...</option>
          <option>BCA</option>
          <option>BBA</option>
          <option>MCA</option>
          <option>MBA</option>
        </select>
        <div class="invalid-feedback">
          Please select a valid course.
        </div>
      </div>
      <div class="form-floating">
        <input type="password" name="pass" class="form-control" placeholder="Password" required="">
        <label for="floatingPassword">Password</label>
      </div>
      <div class="form-floating">
        <input type="password" name="cnfpass" class="form-control" placeholder="Password" required="">
        <label for="floatingPassword">Confirm Password</label>
      </div>

      <button class="btn btn-primary w-100 py-2" type="submit">Sign in</button>
    </form>
  </div>

</body>
</html>

<?php 
if (isset($_POST['username'])){
  $username = $_POST['username'];
  if(!preg_match('/^[A-Za-z]+$/',$username)){
    echo "<script>alert('Username must contain only alphabetical characters');</script>";
    die();
  }
  $email = $_POST['email'];
  if(!filter_var($email, FILTER_VALIDATE_EMAIL)){
    echo "<script>alert('Please enter a valid email address');</script>";
    die();
  }
  $mobile = $_POST['mobile'];
  if(!preg_match('/[0-9]{10}/',$mobile)){
    echo "<script>alert('Please enter a valid mobile number');</script>";
    die();
  }
  $course = $_POST['course'];
  $pass = $_POST['pass'];
  if(!preg_match('/^.{8,}$/',$pass)){
    echo "<script>alert('Password must contain at least 8 characters');</script>";
    die();
}
  $cnfpass = $_POST['cnfpass'];
  if ($pass!= $cnfpass){
    echo "<script>alert('Passwords do not match');</script>";
  }

  $sql = "INSERT INTO users(name,email,mobile,course,password) VALUES('$username','$email','$mobile','$course','$pass')";
  $result = mysqli_query($conn,$sql);
  if($result){
    echo "<script>alert('Registered Successfully');</script>";
    echo "<script>window.location.href='./login.php';</script>";
  }
  else{
    echo "<script>alert('Something went wrong');</script>";
  }
}
?>