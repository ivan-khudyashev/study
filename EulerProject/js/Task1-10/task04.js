// (C) Copyright Khudyashev Ivan, bahek1983@gmail.com, 2019
function isPolindrom(n)
{
    var str_n = n.toString();
    var strLen = str_n.length;
    for(var i = 0, halfLen = Math.floor(strLen / 2); i < halfLen; i++) {
        if(str_n[i] != str_n[strLen - 1 - i]) {
            return false;
        }
    }
    return true;
}

function main()
{
    // Start program
    console.log("Start program");

    // Define variables
    var minNumber = 100;
    var maxNumber  = 999;
    var maxMulPolindrom = 0;
    var prod = 0;

    // Main Actions
    for(var i = minNumber; i <=maxNumber; i++) {
        for(var j = minNumber; j <= maxNumber; j++) {
            prod = i * j;
            if(isPolindrom(prod) && prod > maxMulPolindrom) {
                maxMulPolindrom = prod;
            }
        }
    }
    console.log("Max Polindrom which is product from " + minNumber + " to " + maxNumber
        + " is " + maxMulPolindrom
    );

    // End program
    console.log("End program");
}

main()
