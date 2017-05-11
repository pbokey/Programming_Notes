<?php
$flipCount = 0;
$headCount = 0;
$store_array = array()
  while($headCount < 3) {
  	$flip = rand(0,1);
    $flipCount ++;

  	if($flip == 1){
  		$headCount++;
  	}
}
  	echo " It took {$flipCount} flips to get 3 heads!";
?>
//flips until 3 heads
 