
var permArray =["a","b","c","d","r","g","h"];
var flag =true;
var y;
var x;

function swap(x,y){
var b = permArray[y];
permArray[y] = permArray[x];
permArray[x] = b;
console.log(permArray);
}
function trotter(){
var i=0;
var k=permArray.length-1; //compensate for index0
var s=permArray.length-2;

while(i<10){

if(flag===true){

swap(k,s);
k--;
s--;


if(k===0){
    flag=false;
    swap(permArray.length-2,permArray.length-1);
    
}}
if (flag===false){
    
    k++;
    s++;
    swap(k,s);
    
    if(k===permArray.length-1){
        flag=true;
      swap(0,1);
      
    }
}




i++;
}
}

trotter();
