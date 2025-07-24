// Testando comparações de igualdade e desigualdade
let frase = "Bom dia"
let valor = "5"

console.log("Comparação utilizando '==' entre 5(STR) e 5(NUM)", valor == 5)// Usado para comparar o valor
console.log("Comparação utilizando '===' entre duas frases iguais ", frase === "Bom dia") // Usado para comparar o valor e o tipo
console.log("Comparação utilizando '!==' entre duas frases diferentes ", frase !== "Boa Noite") // Usado para comparar se valores são diferentes

// Testando comparações de menor, maior e igual
let idadePermitida = 18
let idadeUm = 17
let idadeDois = 18

console.log("A pessoa com idade ", idadeUm, " está autorizada para entrar? ", idadeUm > idadePermitida)
console.log("A pessoa com idade ", idadeDois, " está autorizada para entrar? ", idadeDois >= idadePermitida)

let quilos = 80
let pesoUm = 90
let pesoDois = 80
console.log("A pessoa com peso ", pesoUm, " tem menos de ", quilos, "?",  pesoUm < quilos)
console.log("A pessoa com peso ", pesoDois, " tem menos de ", quilos, "?",  pesoDois <= quilos)