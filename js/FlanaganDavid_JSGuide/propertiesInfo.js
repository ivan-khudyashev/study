(function defineProperties() {
    //This is the function that becomes a method of all object
    function properties() {
        var names; // An array of property names
        if(arguments.length == 0) {
            // when arguments are absence, then use all properties of this
            names = Object.getOwnPropertyNames(this);
        }
        else if (arguments.length == 1 && Array.isArray(arguments[0])) {
            // when arguments have one array, then it's content use as names of properties
            names = arguments[0];
        }
        else {
            // in other cases, use all arguments as names of properties
            names = Array.prototype.splice.call(arguments, 0); // get real array from array-like object
        }
        return new Properties(this, names);
    }

    // Make it a new nonenumerable property of Object.prototype
    Object.defineProperty(Object.prototype, "properties",{
            value: properties,
            enumerable: false, writable: true, configurable: true
        }
    );

    // Define constructor for special Proxy-object between 'object' and it's properties
    function Properties(o, names) {
        this.o = o; // save object
        this.names = names; // save names of object's properties
    }

    Properties.prototype.hide = function() {
        var o = this.o, hidden = {enumerable: false};
        this.names.forEach(
            function(n) {
                if( o.hasOwnProperty(n)) {
                    Object.defineProperty(o, n, hidden);
                }
            }
        );
        return this;
    }
    
    Properties.prototype.freeze = function() {
        var o = this.o, frozen = {writable: false, configurable: false};
        this.names.forEach(
            function(n) {
                if( o.hasOwnProperty(n)) {
                    Object.defineProperty(o, n, frozen);
                }
            }
        );
        return this;
    }

    // Return an object that maps names to descriptors for these properties
    // API for usage this method for full-copy object with properties and its' attributes:
    //    Object.defineProperties(destination, source.properties().descriptors());
    Properties.prototype.descriptors = function() {
        var o = this.o, desc = {};
        this.names.forEach(
            function(n) {
                if(!o.hasOwnProperty(n)) return;
                desc[n] = Object.getOwnPropertyDescriptor(o, n);
            }
        );
        return desc;
    }

    // Return a nicely formatted list of properties.
    Properties.prototype.toString = function() {
        function nameToString(n) {
            var s = "", desc = Object.getOwnPropertyDescriptor(o, n);
            if(!desc) return "nonexistent " + n + ": undefined";
            if(!desc.configurable) s += "permanent ";
            if((desc.get && !desc.set) || !desc.writable) s += "readonly ";
            if(!desc.enumerable) s += "hidden ";
            if(desc.get || desc.set) s += "accessor " + n;
            else s += n + ": " + ((typeof desc.value === "function")?"function":desc.value);
            return s;
        }

        var o = this.o;
        var lines = this.names.map(nameToString);
        return "{\n " + lines.join(",\n  ") + "\n}";
    }

    // Return methods
    exports.properties = properties;
}()
)
