// (C) Copyright Khudyashev Ivan, 2019

function main()
{
    console.log("Start program");

    // Action
    // First variant of Unicode name (normalize)
    var a\u00E9 = 0;
    // Second variant of Unicode name (not normalize)
    var a\u0065\u0301 = 0;
    // Set different values
    a\u00E9 = 10;
    a\u0065\u0301 = 11;
    console.log("Using same Unicode values for variables: a\u00E9 and a\u0065\u0301");
    console.log(a\u00E9);
    console.log(a\u0065\u0301);
    
    console.log("Program successfully finished");
}

main()
