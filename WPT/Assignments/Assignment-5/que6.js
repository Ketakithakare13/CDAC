const fetchPokemon = () => {
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            reject(new Error("Danger,danger!"));
        },2000)
    })
}

console.log("Program Starting....");

const usePokemon = async() => {
    try{
        const data = await fetchPokemon();
        console.log(data);
        console.log("Done Fetching...");
    }catch(error){
        console.log(error);
    }
    console.log("There was an error with aour code");
}

usePokemon();
console.log("Program Completed");