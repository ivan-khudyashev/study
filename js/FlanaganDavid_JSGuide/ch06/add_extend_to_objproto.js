// (C) Copyright Khudyashev Ivan, 2019

function add_extend_to_obj_proto()
{
    Object.defineProperty(
        Object.prototype,
        "extend",
        {
            writable: true,
            enumerable: false,
            configurable: true,
            value: 
                /* extend is function, that copy all props to 
                 * current object from arg-object and skipped
                 * existed props
                 */
                function(o) {
                    var allOwnProps = Object.getOwnPropertyNames(o);
                    for(var i = 0; i < allOwnProps.length; i++) {
                        if(allOwnProps[i] in this) continue;
                        Object.defineProperty(
                            this,
                            allOwnProps[i],
                            Object.getOwnPropertyDescriptor(o, allOwnProps[i])
                        )
                    }
                }
        });
}

function main()
{
    console.log("Start program");

    // Action
    add_extend_to_obj_proto();
    var a = {"one": 1, "two": 2};
    var b = {"four": 4, "seven": 7, "two": 22};
    console.log("a = ", a);
    console.log("b = ", b);
    a.extend(b);
    console.log("a.extend(b) = ", a);


    console.log("Program successfully finished");
}

main()
