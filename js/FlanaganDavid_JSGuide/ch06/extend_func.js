// (C) Copyright Khudyashev Ivan, 2019

// Function extend copy property from <o_src> to <o_dst> rewriting existing
function extend(o_dst, o_src)
{
    for(var p in o_src) {
        var prop_desc = Object.getOwnPropertyDescriptor(o_src, p);
        Object.defineProperty(o_dst, p, prop_desc);
    }
    return o_dst;
}

function listAllOwnPropDescriptors(o)
{
    if(typeof(o) !== 'object') throw "function listAllOwnPropDescriptor(o): o must be object";
    for(var p in o) {
        console.log("* <" + p + ">: ", Object.getOwnPropertyDescriptor(o, p).valueOf());
    }
}

function main()
{
    console.log("Start program");

    // Action
    var a = {};
    Object.defineProperty(a, "myprop", {value: 111, writable:true, configurable:true,enumerable:true});
    var b = extend({}, a);
    listAllOwnPropDescriptors(b);


    console.log("Program successfully finished");
}

main()
