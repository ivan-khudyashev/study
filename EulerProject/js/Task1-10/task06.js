// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
/*
 * Calculate (a1 + a2 + ... + an)^2 - ( a1^2 + ... + an^2)
 *
 * Analysis. We get:
 * (a1 + a2 + ... + an)^2 = a1^2 + a2^2 + ... + an^2 
 *  + 2(a1*a2 + ... + a1*an + a2*a3 + ... + a2*an + ... + a_(n-1)*an )
 * Hence aquiring difference equal to 
 *   2(a1*a2 + ... + a1*an + a2*a3 + ... + a2*an + ... + a_(n-1)*an )
*/
function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var sum = 0;
    var n = 100;

    // Main Actions
    for(var i = 1; i < n; i++) {
        for(var j = i + 1; j <= n; j++) {
            sum += (i * j);
        }
    }
    sum <<=1;
    console.log("Difference of square of sum with sum of square for n = " + n + " equal: " + sum);

    // End program
    console.log("End program");
}

main()
