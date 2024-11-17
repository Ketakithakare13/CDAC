const promise = new Promise((resolve) => {
    setTimeout(() => resolve("Resolved after 3 seconds"), 3000);
});
promise.then(console.log);
