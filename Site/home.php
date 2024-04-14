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
  <h1 class="h3 mb-3 fw-normal"><?php echo "Hello ".$_SESSION['name']." you're here for ".$_SESSION['course']; ?> </h1>
    <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
      <button name="update" class="btn btn-primary w-100 py-2" type="submit">Update Info</button><br><br>
      <button name="logout" class="btn btn-primary w-100 py-2" type="submit">Logout</button>
    </form>
  </div>

</body>
</html>

<?php 
    if(isset($_POST['logout'])){
        session_destroy();
        echo "<script>alert('You have successfully logged out');</script>";
        echo "<script>window.location.href='./login.php';</script>";
    }
    if(isset($_POST['update'])){
        echo "<script>window.location.href='./update.php';</script>";
    }
?>