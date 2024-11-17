console.log("Program Started");

const myPromise = new Promise((resolve,reject)=>{
    setTimeout(()=>{
        resolve();
    },3000)

})

console.log(myPromise);
console.log("Program in Progress...");

myPromise.then(()=>{
    console.log("Step 1 Completed");

    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("Step 2 Completed");
        },6000)
    })
}).then((val)=>{
    console.log(val)
})
