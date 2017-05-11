
<?php
            
    $friends = array();
	array_push($friends, "Aditya");
	array_push($friends, "Ian");
	array_push($friends, "Rohith");
	array_push($friends, "Matthew");
	array_push($friends, "Nic");
	count ($friends);
	sort($friends);

	print_r(array_values($friends));
    
    $winner = rand(0,4);

	$winnerreal = strtoupper($friends[$winner]);

	echo "Congratulations {$winnerreal} you are the biggest Dumbass, only those with this award will amount to nothing"

	
?>
         
     