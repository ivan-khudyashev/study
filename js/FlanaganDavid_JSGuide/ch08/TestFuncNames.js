// (C) Copyright Khudyashev Ivan, 2019



function main()
{
    console.log("Start program");

    // Action
    console.log("somef type: ", typeof(somef));
    console.log("myf type: ", typeof(myf));
    var somef = function() { console.log("somef() exp.func");};
    somef();


    console.log("Program successfully finished");
}

main()

function myf()
{
    console.log("function myf()");
}
