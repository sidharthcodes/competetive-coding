console.log("Binary Search");

let arr = [1,2,6,7,9,15,25,47,55,86,101], key = 103;

let start = 0, end = arr.length, index = -1;
console.log("Array:",arr);
console.log("Array Length:",arr.length);
console.log("Key to find:",key);

while(start<end){
    mid = parseInt((start+end) / 2);
    if(arr[mid] == key){
        index = mid;
        break;
    }else if(arr[mid]>key){
        end = mid;
    }else{
        start = mid+1;
    }
}

if(index == -1){
    console.log("Key not found in array.");
}else{
    console.log("Key is at index:",index);
}