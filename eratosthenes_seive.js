<html>
<head>
</head>
<body>
<script>
//I've found the prime below ten million, but takes time.
//I made the output a string to speed it up
//Strings primitives, arrays objects (heavier).

function primeSeive(n){
var total=n;
//make an array of integers 2 to n, boolean would be faster
    var field=[];
    for(var k=0;k<total;k++){
       field.push(k);
//knock off evens
       if(k%2===0 ){field[k]=0;}
    }
//putting 2 back
     field[3]=2;
   
//find prime number, delete the multiples no higher than sqrt
    var sqrttot = Math.sqrt(total);
    for(var i=3;i<sqrttot;i+=2){
        
        if (field[i]!==0){
            for(var j=(i*i);j<total;j+=i){
                field[j]=0;
             }
         }
     }
//console.log(field);
//eliminate 0's
//store into a string, primitive type fast and easy to cutpaste.
//old array skeleton code commented
  var primes="";
  for(i=0;i<field.length;i++){
    if(field[i]>0){
       // primes.push(i);
       primes=primes+(i)+",";
    }
    // console.log(field[i]+",");
  }
  document.write(primes);
}
//chose the primes ceiling, here below a million.
primeSeive(1000000);
</script>
</body>
</html>
