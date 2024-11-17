function processNumbers(numbers) {
    return numbers
        .filter(num => num % 2 === 0) // Keep only even numbers
        .map(num => num * 2)          // Double each number
        .reduce((total, num) => total + num, 0); // Sum them
}
console.log(processNumbers([1, 2, 3, 4, 5, 6])); // Output: 24
