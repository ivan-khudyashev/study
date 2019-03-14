const o = {
        name: "Ivan",
        greetBackward: function() {
                const somevar = this;
                function getReverseName() {
                        let nameBackward = '';
                        for(let i = somevar.name.length - 1; i >= 0; i--) {
                                nameBackward += somevar.name[i];
                        }
                        return nameBackward;
                }
                return `${getReverseName()} si eman ym ,olleH`;
        },
};
console.log(o.greetBackward());
