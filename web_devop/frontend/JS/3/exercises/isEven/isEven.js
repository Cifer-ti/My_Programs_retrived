function isEven(num) {
    if(num === 0)
        return true;
    else if(num === 1)
        return false;
    else if(num > 0)
        return isEven(num - 2)
    else if(num < 0)
        return isEven(num + 2);
}

function printEvenOrOdd(booleanVa) {
    return booleanVa ? "Even" : "Odd";
}

console.log("50 is " + printEvenOrOdd(isEven(50)));
console.log("75 is " + printEvenOrOdd(isEven(75)));
console.log("-1 is " + printEvenOrOdd(isEven(-1)));