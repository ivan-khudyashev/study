    function hideProps(o) {
        var props = (arguments.length == 1)?
            Object.getOwnPropertyNames(o):
            Array.prototype.splice.call(arguments, 1);
        props.forEach(function(n) {
            if(!Object.getOwnPropertyDescriptor(o, n).configurable) return;
            Object.defineProperty(o, n, {enumerable: false});
        }
        );
        return o;
    }
    function Range(from, to)
    {
        if(from > to) throw new Error("Range: from must be <= to");

        function getFrom() {return from; }
        function getTo() {return to;}
        function setFrom(f) {
            console.log("In setFrom(). this = ", this);
            if( f <= to) from =f;
            else throw new Error("Range: from must be <= to");
        }
        function setTo(t) {
            if( t >= from) to = t;
            else throw new Error("Range: to must be >= from");
        }

        Object.defineProperties(this, {
            from: {get: getFrom, set: setFrom, enumerable:true, configurable:false},
            to: {get: getTo, set: setTo, enumerable: true, configurable: false}
        });
    }

    Range.prototype = hideProps( {
        constructor: Range,
        includes: function(x) { return this.from <= x && x <= this.to;},
        foreach: function(f) {for(var x=Math.ceil(this.from);x<=this.to;x++) f(x);},
        toString: function() { return "(" + this.from + "..." + this.to + ")";}
    }
    );
    

    function main()
    {
        r = new Range(0, 9);
        console.log("Range:", r.toString());
        console.log("r.includes(5): ", r.includes(5));
        r.from = 5;
        console.log("Range:", r.toString());
        console.log("Properties r (instance of Range):");
        console.log(Object.getOwnPropertyNames(r))
        console.log("Properties Range.prototype: ");
        console.log(Object.getOwnPropertyNames(Range.prototype));
        console.log("And now print main context:");
        dd = Object.getOwnPropertyNames(this);
        console.log(dd);
    }

    main();
    console.log("And now print global context:");
    dd = Object.getOwnPropertyNames(this);
    console.log(dd);
