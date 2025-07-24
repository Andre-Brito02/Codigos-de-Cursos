let nomeDoHeroi = "MrharryPorco"
let quantidadeDeXP = 5
let horasFarmando = 8
let quantidadeDeXPFarmadaPorHora = 1000
let nivel;

if(quantidadeDeXP <= 1000){
    nivel = "Ferro"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 1000 && quantidadeDeXP <= 2000){
    nivel = "Bronze"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 2000 && quantidadeDeXP <= 5000){
    nivel = "Prata"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 5000 && quantidadeDeXP <= 7000){
    nivel = "Ouro"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 7000 && quantidadeDeXP <= 8000){
    nivel = "Platina"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 8000 && quantidadeDeXP <= 9000){
    nivel = "Ascendente"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 9000 && quantidadeDeXP <= 10000){
    nivel = "Imortal"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 10000){
    nivel = "Radiante"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

for(let contador = 0; contador < horasFarmando; contador++){
    quantidadeDeXP += quantidadeDeXPFarmadaPorHora
}

if(quantidadeDeXP < 1000){
    nivel = "Ferro"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 1000 && quantidadeDeXP <= 2000){
    nivel = "Bronze"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 2000 && quantidadeDeXP <= 5000){
    nivel = "Prata"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 5000 && quantidadeDeXP <= 7000){
    nivel = "Ouro"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 7000 && quantidadeDeXP <= 8000){
    nivel = "Platina"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 8000 && quantidadeDeXP <= 9000){
    nivel = "Ascendente"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 9000 && quantidadeDeXP <= 10000){
    nivel = "Imortal"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}

else if(quantidadeDeXP > 10000){
    nivel = "Radiante"
    console.log("O Herói de nome ", nomeDoHeroi,  "está no nível ", nivel)
}