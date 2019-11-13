// (C) Copyright Khudyashev Ivan, 2019
Function.prototype.newbound = function(o /* args */)
{
    // Save current function as obj, and current args list as obj
    //  "this" here because call `func.newbound()` execute at function
    //    which must using in .apply() method
    var self = this, boundArgs = arguments;
    
    // return function which bounded to object 'o'
    return function() {
        var args = [], i;
        // first add application arguments in newbound() definition call
        for(i = 1 /* start with 1, because 0 is 'o' */; i < boundArgs.length; i++) {
            args.push(boundArgs[i]);
        }
        // now using arguments in real invocation of bounded func
        for(i = 0; i < arguments.length; i++) {
            args.push(arguments[i]);
        }
        // set length property of returned bounded func
        var lenFuncProp = Object.getOwnPropertyDescriptor(arguments.callee, "length");
        console.log("\tDEBUG. LenProp: ");
        lenFuncProp.value = (self.length || 0) - (boundArgs.length - 1);
        if(lenFuncProp.value < 0) {
            lenFuncProp.value = 0;
        }
        Object.defineProperty(arguments.callee, "length", lenFuncProp);
        var prop = Object.getOwnPropertyDescriptor(arguments.callee, "length");
        for(var p in prop) {
            //console.log("\t\tkey = " + p + "; value = " + prop[p]);
        }
        // apply bound self-function (that function at calling newbound() )
        //  acording object o - as we need
        //  such as make application arguments from newbound()
        console.log("\tDEBUG. Current func len:", arguments.callee.length);
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
    console.log("Preliminary test:");
    console.log("Arity func: ", f.newbound(null, "test").length);
    console.log("\n");
    var f2 = f.newbound(null, "appl_f2_1", "appl_f2_2");
    var f3 = f.newbound(null);
    var f4 = f.newbound(null, "appl_f4_1", "appl_f4_2", "appl_f4_3");

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
    console.log("My arity = " + arguments.callee.length);
}

