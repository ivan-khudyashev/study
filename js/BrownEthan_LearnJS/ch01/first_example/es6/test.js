'use strict';
// tool es6: block of "left" definitions
const sentences = [
        {subject: 'JavaScript', verb: 'is', object: 'great'},
        {subject: 'Elephants', verb: 'are', object: 'large'},
];
// tool es6: destructure object
function say({subject, verb, object}) {
        // tool es6: pattern's strings
        console.log(`${subject} ${verb} ${object}`);
}
// tool es6: for..of
for(let s of sentences) {
        say(s);
}
