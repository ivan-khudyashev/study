(
function() 
{
function f1(a) {
    function f2() {
        console.log("a = " + a.toString());
    }
    function f3(b) {
        console.log("Change a");
        a = b;
    }
    return {"getVal": f2, "setVal": f3};
}

o = f1(5);
o.getVal();
o.setVal(10);
o.getVal();
dd = Object.getOwnPropertyNames(this);
console.log(dd);
})();
