// (C) Copyright Khudyashev Ivan, 2019

main()

function main()
{
    console.log("Start program");

    // Action
    testfunc(1, 2, 3);
    testfunc(1);
    testfunc(1, 2, 3, 4, 5);


    console.log("Program successfully finished");
}

function testfunc(arg1, arg2, arg3)
{
    console.log('-'.repeat(20));
    console.log("Test function\n Arguments:", arg1, arg2, arg3);
    checkArgs(arguments);
    console.log('-'.repeat(20));
    console.log('\n');
}

function checkArgs(args)
{
    if(args.length != args.callee.length) {
        console.log("Different number of arguments. Function declare " + args.callee.length + " but get " + args.length + " args");
    }
}
