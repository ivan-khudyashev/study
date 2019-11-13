// (C) Copyright Khudyashev Ivan, 2019
Function.prototype.newbound = function(o /* args */)
{
    // Save current function as obj, and current args list as obj
    var self = arguments.callee, boundArgs = arguments;
    
    // return function which bounded to object 'o'
    return function() {
        var args = [], i;
        // first add application arguments in newbound() definition call
        for(i = 1 /* start with 1, because 0 is 'o' */; i < boundArgs.length; i++) {
            args.push(boundArgs[i]);
        }
        // now using arguments in real invocation of bounded func
        for(i = 0; i < arguments.length; i++) {
            args.push(boundArgs[i]);
        }
        // set length property of returned bounded func
        arguments.callee.length = (self.length || 0) - boundArgs.length;
        if(arguments.callee.length < 0) {
            arguments.callee.length = 0;
        }
        // apply bound self-function (that function at calling newbound() )
        //  acording object o - as we need
        //  such as make application arguments from newbound()
        return self.apply(o, args);
    }
}

main()

function main()
{
    console.log("Start program");

    // Action
    var o = {};
    var f1 = f;
    var f2 = f.newbound(o "appl_f2_1", "appl_f2_2");
    var f3 = f.newbound(o);
    var f4 = f.newbound(o, "appl_f4_1", "appl_f4_2", "appl_f4_3");

    console.log("f1 arity = ", f1.length);
    console.log("f2 arity = ", f2.length);
    console.log("f3 arity = ", f3.length);
    console.log("f4 arity = ", f4.length);

    f1("one", "two", "three");
    f2("one", "two", "three");
    f3("one", "two", "three");
    f4("one", "two", "three");


    console.log("Program successfully finished");
}

function f(p1, p2, p3)
{
    console.log("function f with 3 arg: ", p1, " - ", p2, " - ", p3);
}

