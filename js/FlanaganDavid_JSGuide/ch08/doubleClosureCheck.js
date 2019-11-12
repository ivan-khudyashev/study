// (C) Copyright Khudyashev Ivan, 2019

function createClosure()
{
    var innerVar = 10;
    var f1 = function() { innerVar++; console.log("Inc: " + innerVar.toString()); return innerVar; }
    var f2 = function() { innerVar <<= 1; console.log("Mul: " + innerVar.toString()); return innerVar; }
    return {"funcIncrement": f1, "funcDoubling": f2};
}


function main()
{
    console.log("Start program");

    // Action
    var funcs = createClosure();
    var funcs2 = createClosure();
    funcs.funcIncrement();
    funcs.funcDoubling();
    funcs.funcIncrement();
    funcs.funcIncrement();
    funcs.funcDoubling();
    console.log("Start New object");
    funcs2.funcDoubling();
    funcs2.funcIncrement();


    console.log("Program successfully finished");
}

main()
