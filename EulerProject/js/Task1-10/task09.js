// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
/*
 * Find a pythagorean triplet (a,b,c: a^2 + b^2 = c^2, a < b <c)
 * Limit on (a, b, c): a + b + c = 1000
 *
 * Make some simplifications:
 * 1000^2 = (a + b + c)^2 = ... = 2(ab + c*10^3)
 * 0.5 * 10^6 = ab + 10^3 * c
 * 5 * 10^5 - c * 10^3 = ab
 * ab = 10^3 (500 - c)
 *
 * Hence
 * 1 <= a < b < c < 500
 * Decision (a, b, c) met these conditions:
 * a) ab = 10^3 (500 - c)
 * b) 1 <= a < b < c < 500
 */
(function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var a, b, c;

    // Main Actions
    find_triplet: for(a = 1; a < 498; a++) {
        for(b = a + 1; b < 499; b++) {
            for( c = b + 1; c < 500; c++) {
                if(a * b == 1000 * (500 - c)) {
                    // additionally it is necessary check pythagorean triplet
                    if(a*a + b*b == c*c) {
                        break find_triplet;
                    }
                }
            }
        }
    }
    if ( a * b == 1000 * (500 - c)) {
        console.log("Found pythagorean triplet (" + a + ", " + b + ", " + c + ")");
        console.log("Product for this triplet = " + a*b*c);
    }
    else {
        console.log("Can't find pythagorean triplet");
    }

    // End program
    console.log("End program");
})()
