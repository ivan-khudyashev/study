// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var upperBorder = 1000;
    var totalSum = 0;

    // Main Actions
    for(var i = 1; i < upperBorder; i++) {
        if(i%3 == 0 || i%5 == 0) {
            totalSum += i;
        }
    }

    console.log("Sum of all upper " + upperBorder.toString()
        + " numbers divided by 3 or 5 is equal ",
        totalSum
    );

    // End program
    console.log("End program");
}

main()
