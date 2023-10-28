<html>
<head>
<h1>EECS348 Lab 07 Practice 4</h1>
<h3>by Charlie Gillund</h3>
</head>
<body>
    

    <?php
        $size = $_POST["size"];
      
        echo "<table border='1'>";
        echo "<tr><th></th>";
        //column indexes
        for ($i = 1; $i <= $size; $i++) {
            echo "<th>$i</th>";
        }
        // row indices
        for ($i = 1; $i <= $size; $i++) {
            
            echo "<tr><th>$i</th>";

            for ($j = 1; $j <= $size; $j++) {
                //main part of table
                echo "<td>" . ($i * $j) . "</td>";
            }
            echo "</tr>";
        }
        echo "</table>";
    
    ?>
</body>
</html>