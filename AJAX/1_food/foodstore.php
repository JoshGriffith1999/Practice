<?php
header('Content-Type: text/xml');
echo '<? xml version="1.0" encoding="UTF-8" standalone="yes" ?>';

echo '<respsonse>';
    $food = $_GET['food'];
    $foodArray = array('chicken', 'beef', 'pork', 'ham', 'lamb', 'alligator', 'bear');
    if(in_array($food, $foodArray))
        echo 'We do have'.$food.'!';
    elseif($food=="")
        echo 'Enter a food';
    else
        echo 'We do not have'.$food;
echo '</respsonse>';
?>