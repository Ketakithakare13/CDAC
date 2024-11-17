function outerFunction() {
    let count = 0;
    return function() {
        count++;
        return count;
    };
}
const counter = outerFunction();
console.log(counter());
console.log(counter());
