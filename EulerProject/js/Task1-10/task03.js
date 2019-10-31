// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
var factorBase = [];

function isPrimeOnFactorBase(m)
{
    for(var i = 0; i < factorBase.length; i++) {
        if((m % factorBase[i]) == 0) {
            return false;
        }
    }
    return true;
}

function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var n = 600851475143;
    var sqrt_n = Math.floor(Math.sqrt(n));
    var maxPrimeDivider = 0;

    // Main Actions
    // // Calculate factorBase
    for(var p = 3; p <= sqrt_n; p+=2) {
        //debug: console.log("--- p = " + p.toString() + "; factorBase = " + factorBase.toString());
        if(isPrimeOnFactorBase(p)) {
            factorBase[factorBase.length] = p;
        }
    }
    // // Find maximum prime divider in factorBase
    for(i = 0; i < factorBase.length; i++) {
        if( (n%factorBase[i]) == 0) {
            maxPrimeDivider = factorBase[i];
        }
    }
    if(maxPrimeDivider == 0) {
        maxPrimeDivider = n;
    }
    console.log("Last prime factor of " + n.toString() + " equal " + maxPrimeDivider);

    // End program
    console.log("End program");
}

main()
