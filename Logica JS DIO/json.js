let inVoice = {
    name: "André",
    age: 23,
    products: {
        0: ["Mouse 2xwm", 29.90],
        1: ["Teclado mecânico", 129.99],
        2: ["Monitor", 899.99]
    }
}

generateInVoice(inVoice)

function generateInVoice(inVoice){
    console.log(`O nome é ${inVoice.name}`)
    console.log(`A idade é ${inVoice.age}`)

    for(const index in inVoice.products){
        let [productName, productPrice] = inVoice.products[index]
        console.log(`Produto e preço: ${productName} R$${productPrice}`)
    }
}