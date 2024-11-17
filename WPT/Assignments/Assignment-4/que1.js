function toUpperCase(string){
    return string.toUpperCase();
}

function processData(inputString, callback){
    const result = callback(inputString);
    console.log(result);
}
processData("javascript",toUpperCase);