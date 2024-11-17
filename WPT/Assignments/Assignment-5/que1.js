console.log("Program Started");

        const myPromise = new Promise((resolve,reject)=>{
            setTimeout(()=>{
                resolve();
            },3000)

            setTimeout(()=>{
                reject();
            },2000)
        })

        console.log(myPromise);
        console.log("Program in Progress...");

        myPromise.then(()=>{
            console.log("Progrm Completed");
        }).catch(()=>{
            console.log("Program Failure");
        })