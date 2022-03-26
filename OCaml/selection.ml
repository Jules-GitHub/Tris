let tri_selection arr =
  for i=0 to (Array.length arr)-1 do
    let mini = ref arr.(i)
    and indice = ref i in
    for j=(i+1) to (Array.length arr)-1 do
      if (arr.(j) < (!mini)) then (
        mini := arr.(j);
        indice := j;
      )
    done;
    let tmp = arr.(i) in
    arr.(i) <- (!mini);
    arr.(!indice) <- tmp;
  done
;;

let array = [| 5; 3; 1; 4; 2 |];;
tri_selection array;;
array;;