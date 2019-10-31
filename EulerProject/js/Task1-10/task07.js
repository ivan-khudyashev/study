// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
var primesBase = [];

function checkPrimeOnBase(num)
{
    for(var i = 0, sqrtNum = Math.floor(Math.sqrt(num)), baseLen = primesBase.length;
        i < baseLen && primesBase[i] <= sqrtNum; i++) {
        if(num % primesBase[i] == 0) {
            return false;
        }
    }
    primesBase.push(num);
    return true;
}


function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var primesPositionInBase = 10001;
    primesBase.push(2);
    var currentPosition = 1;

    // Main Actions
    for(var currentPosition = 1, currentNum = 3;
        currentPosition != primesPositionInBase; currentNum += 2) {
        if(checkPrimeOnBase(currentNum)) {
            currentPosition+=1;
        }
    }

    console.log("Prime on position " + primesPositionInBase +
        " is equal " + primesBase[primesPositionInBase - 1]);

    // End program
    console.log("End program");
}

main()
