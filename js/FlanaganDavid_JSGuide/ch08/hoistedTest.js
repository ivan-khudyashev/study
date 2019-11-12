// (C) Copyright Khudyashev Ivan, 2019

function main()
{
    console.log("Start program");

    // Action
    var func = 
        function(x) {
            for(var i = 0; i < primes.length; i++) {
                while((x%primes[i]) == 0) {
                    x /= primes[i];
                }
            }
            return x;
        };
    var primes = [2, 3, 5, 7];

    var testNum = 440;
    console.log("testNum = " + testNum.toString() + "; after factorization: " + func(testNum));


    console.log("Program successfully finished");
}

main()
