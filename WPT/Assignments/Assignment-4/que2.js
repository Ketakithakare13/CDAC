function forEachElement(arr,callback){
    for(i = 0; i<=arr.length; i++){
        callback([i],i);
    }
}

forEachElement([1,2,3,4,5], function(element , index){
console.log(element *2)
})