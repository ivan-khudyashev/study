// (C) Copyright Khudyashev Ivan, 2019

main()

function main()
{
    console.log("Start program");

    // Action
    f(5, 7, 9);
    var g = decArity(f, null);
    g(50, 70, 90);
    console.log("Arity of g = ", g.length);


    console.log("Program successfully finished");
}

function f(p1, p2, p3)
{
    console.log('-'.repeat(20));
    console.log("This function with 3 arg: ", p1, " - ", p2, " - ", p3);
    console.log("Arity of function = " + arguments.callee.length);
    console.log('-'.repeat(20), '\n');
}

function decArity(f, o)
{
    return f.bind(o, 1);
}
