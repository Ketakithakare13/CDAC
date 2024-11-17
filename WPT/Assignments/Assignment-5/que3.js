console.log("Program Started");
const myPromise = new Promise((resolve,reject)=>{
    resolve("Hello Friends!",null);
},5000)

console.log(myPromise);
console.log("Program in Progress");

myPromise.then((val)=>{
    console.log(val);
    return new Promise((resolve,reject)=>{
       setTimeout(()=>{
         resolve("First promise chain complete!");
       },2000)
    })
}).then((val)=>{
    console.log(val);
})

myPromise.then((val)=>{
    console.log(val);
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("Second promise chain complete!");
        },10000)
    })
}).then((val)=>{
    console.log(val);
})