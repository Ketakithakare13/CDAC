var items = [{price: 200}, {price: 300}];
var totalPrice = items.reduce((total,item) => total + item.price,0);
console.log(totalPrice);