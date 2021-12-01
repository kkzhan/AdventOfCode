//run this in your chrome console on the puzzle input page
let arr = document.getElementsByTagName("pre").item(0).innerText.trim().split('\n');
let ctr = 0;
for(let i = 3; i < arr.length; i++){
if(parseInt(arr[i]) > parseInt(arr[i-3])) ctr++;
}
console.log(ctr);