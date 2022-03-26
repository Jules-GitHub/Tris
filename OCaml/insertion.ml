let tri_insertion arr =
  let n = Array.length arr in
  for i=0 to n-1 do
    let j = ref i
    and tmp = arr.(i) in
    while (!j)>0 && arr.(!j-1)>tmp do
      arr.(!j) <- arr.((!j)-1);
      j := !j-1
    done;
    arr.(!j) <- tmp
  done
;;

let array = [| 5; 3; 1; 4; 2 |];;
tri_insertion array;;
array;;