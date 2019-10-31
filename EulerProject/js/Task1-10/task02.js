// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var upperBorder = 4e6;
    var secondFib = 1
    var firstFib = 2;
    var nextFib = 0;
    var sumEvenFibs = 0;

    // Main Actions
    while(firstFib < upperBorder) {
        if( (firstFib&1) == 0) {
            sumEvenFibs += firstFib;
        }
        nextFib = firstFib + secondFib;
        secondFib = firstFib;
        firstFib = nextFib;
    }

    console.log("Sum of even Fibbonacci less then " + upperBorder.toString() 
        + " equal ", sumEvenFibs
    );

    // End program
    console.log("End program");
}

main()
