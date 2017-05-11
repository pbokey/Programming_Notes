let average a b =
    let sum = a + b in
    sum / 2;;
let () = Printf.printf "Average is: %d \n" (average 2 4);

(* let rec fact x =
    if x == 1 then 1 else x * fact(x - 1);;
Printf.printf "Factorial is: %d \n" (fact 3); *)

let li = 1 :: 2 :: 3 :: [];;
5 :: li (* this is adding the 5 to the beginning of the list *)
(* Prints out [5; 1; 2; 3] *)

(* insertion sort *)
let rec sort = function
    | [] -> []
    | x :: l -> insert x (sort l)
  and insert elem = function
    | [] -> [elem]
    | x :: l -> if elem < x then elem :: x :: l
                else x :: insert elem l;;