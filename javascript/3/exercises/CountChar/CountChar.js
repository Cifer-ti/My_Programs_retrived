function countChar(string, char) {
    let count = 0;
    for(let i = 0; i < string.length; i++) {
        if(string[i] === char)
            count++;
    }

    return count;
}

let string1 = "If I can't see it then it can't see me (or so they think) }:).";
let string2 = "If Death was a curse then Birth too will be a curse. Cause we are Born to die."


console.log("the string: " + string1 + " Has..\n" + countChar(string1, "t") + " t character(s)");
console.log("the string: " + string2 + " Has..\n" + countChar(string2, "B") + " B character(s)");