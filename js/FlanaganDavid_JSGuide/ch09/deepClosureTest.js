// (C) Copyright Khudyashev Ivan, 2020

main()

function main()
{
    console.log("Start program");

    // Action
    var lvl = 3;
    var propName = "test";
    var primitiveValue = "hello";
    var o = createDeepLevelObject(lvl, propName, primitiveValue);
    var f = getObjWithClosureFunc(o);
    f.print();
    o.level = 10, o.test.level = 9, o.test.test.level = 8;
    f.change("newfield", "somevalue");
    console.log("Main object after change: ", o);
    console.log("Inner object must be same, but little itself change");
    f.print();
    console.log("Wrong :(");

    console.log("Program successfully finished");
}

function createDeepLevelObject(lvl, propName, primitiveValue)
{
    if(lvl < 1 || Math.ceil(lvl) != lvl) {
        throw new Error("Level must be positive integer greater than 0");
    }
    var o = {"level": lvl};
    o[propName] = primitiveValue;
    if(lvl > 1) {
        o[propName] = createDeepLevelObject(lvl - 1, propName, primitiveValue);
    }
    return o;
}

function getObjWithClosureFunc(o)
{
    function printInnerObj()
    {
        console.log("Inner Object: ", o);
    }

    function changeInnerObj(fieldName, fieldValue)
    {
        o[fieldName] = fieldValue;
    }
    return {"print": printInnerObj, "change": changeInnerObj};
}
