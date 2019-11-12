// (C) Copyright Khudyashev Ivan, 2019

function main()
{
    console.log("Start program");

    // Action
    console.log("Start deep in functions");
    f_lvl1('\t');

    console.log("Program successfully finished");
}

main()

function f_lvl1(indent)
{
    console.log(indent + "function level 1");
    f_lvl2(indent + '\t');
    f_lvl2_1(indent + '\t');
}

function f_lvl2(indent)
{
    console.log(indent + '-'.repeat(10));
    console.log(indent + "function level 2");
    f_lvl3(indent + '\t');
    console.log(indent + '-'.repeat(10));
}

function f_lvl2_1(indent)
{
    console.log(indent + "function level 2 (1)");
}

function f_lvl3(indent)
{
    console.log(indent + "function level 3");
    console.log(indent + '*'.repeat(15));
    console.log(indent + "and now test arguments");
    console.log(indent + "caller property:");
    //console.log(arguments.caller);
    console.log(arguments.callee);
    console.log(indent + '*'.repeat(15));
}
