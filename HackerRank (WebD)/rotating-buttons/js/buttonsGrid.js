var trigger = document.getElementById("btn5");

var pos = [4, 7, 8, 9, 6, 3, 2, 1];
var rot = [4, 7, 8, 9, 6, 3, 2, 1];

trigger.addEventListener("click", () => {
    console.log('working');
    pos.unshift(pos.pop());
    for(let i=0; i<8; i++){
        document.getElementById("btn"+pos[i]).innerHTML = rot[i];
    }
});