// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
var factorBase = {};

function factorizeAllNumbers(upperBarrier, startPrime)
{
    for(var nextNum = startPrime; nextNum <= upperBarrier; nextNum++) {
        var testNum = nextNum; // Test current Num on factorization in factorBase
        //console.log("*Next num = " + testNum)
        for(var nextPrime in factorBase) {
            var primeDegree = factorBase[nextPrime];
            //console.log("**Next prime = " + nextPrime + ", degree = " + primeDegree);
            // factorize with current prime in factorBase
            while((testNum % nextPrime) == 0 && primeDegree > 0) {
                testNum /= nextPrime;
                primeDegree--;
            }
            //console.log("**After factorize Num on this prime, Num = " + testNum);
            // if still dividable on prime, then increment degree
            while((testNum % nextPrime) == 0) {
                testNum /= nextPrime;
                factorBase[nextPrime]++;
            }
            // Get next Num if current successfully factorize
            if(testNum == 1) {
                break;
            }
        }
        // if after factorize with all current prime in factorBase Num is
        //  still greater then 1, THEN THIS IS PRIME
        // Hence add it in factorBase
        if(testNum > 1) {
            factorBase[testNum] = 1;
            //console.log("* add next Prime " + testNum + "; now factorBase: ", factorBase);
        }
    }
}
// Greatest Common Dividable - GCDiv
function GCDivOnFactorBase()
{
    var GCDiv = 1;
    for(var nextPrime in factorBase) {
        var curDegree = factorBase[nextPrime];
        while(curDegree-- > 0) {
            GCDiv *= nextPrime;
        }
    }
    return GCDiv;
}

function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var startPrime = 2;
    var n = 20;

    // Main Actions
    factorizeAllNumbers(n, startPrime);
    console.log("factorBase for interval until n = " + n + ": ", factorBase)
    var GCDiv = GCDivOnFactorBase();
    console.log("GCDiv = " + GCDiv);

    // End program
    console.log("End program");
}

main()
