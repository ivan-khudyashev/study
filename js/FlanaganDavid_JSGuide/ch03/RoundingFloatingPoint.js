// (C) Copyright Khudyashev Ivan, 2019

function main()
{
    console.log("Start program");

    // Action
    // Hence of rounding according IEEE 754 we get this logical error
    console.log(.3 - .2  == .2 - .1); // false

    console.log("Program successfully finished");
}

main()
