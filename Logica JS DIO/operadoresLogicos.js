// Testando operador lógico AND
let idade = 17
let vistoVerificado = true

console.log((idade >= 18) && (vistoVerificado === true))

// Testando operador lógico OR
let tempo = "sol"
let item = "guarda chuva"
let podeSair = (tempo !== "chuva") || (item === "guarda chuva")
console.log("Nosso personagem pode sair? ", podeSair)

// Testando operador lógico NOT
let clima = "chuva"
let resultado = clima !== "chuva"
console.log(!resultado)