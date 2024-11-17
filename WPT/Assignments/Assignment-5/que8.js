const fetchFast = ()=>{
    return new Promise((resolve, reject) => {
        setTimeout(()=>{
            resolve("Fast Done!");
        },2000)
    })
}

const fetchSlow = () => {
    return new Promise((resolve, reject) => {
        setTimeout(()=>{
            resolve("Slow Done!");
        },6000)
    })
}

console.log("Program Starting...");

const firstTimeStamp = new Date();
//console.log(new Date() = firstTime);

const useData = async()=>{
    const fastResult = fetchFast();
    console.log(fastResult);
    const slowResult = fetchSlow();
    console.log(slowResult);

    const result = await Promise.all([fastResult, slowResult])
    console.log(result);

    const secondTimeStamp = new Date();
    const timeElasped = secondTimeStamp - firstTimeStamp;
    console.log("Program Completed", timeElasped);
}

useData();
