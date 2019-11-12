// (C) Copyright Khudyashev Ivan, 2019

function main()
{
    console.log("Start program");

    // Action
    f(5);


    console.log("Program successfully finished");
}

main()

function f(x)
{
    console.log("function f(x), x = " + x.toString());
    console.log("function f(x), arg[0] = " + arguments[0].toString());
    arguments[0]++;
    console.log("After increment arg[0], x = " + x.toString());
}
