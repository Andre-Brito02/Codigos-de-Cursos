function verificaNivelHeroi(quantidadeDeXP){
    let nivel
    
    if(quantidadeDeXP < 1000){
        nivel = "Ferro"
    }
    
    else if(quantidadeDeXP > 1000 && quantidadeDeXP <= 2000){
        nivel = "Bronze"
    }
    
    else if(quantidadeDeXP > 2000 && quantidadeDeXP <= 5000){
        nivel = "Prata"
    }
    
    else if(quantidadeDeXP > 5000 && quantidadeDeXP <= 7000){
        nivel = "Ouro"
    }
    
    else if(quantidadeDeXP > 7000 && quantidadeDeXP <= 8000){
        nivel = "Platina"
    }
    
    else if(quantidadeDeXP > 8000 && quantidadeDeXP <= 9000){
        nivel = "Ascendente"
    }
    
    else if(quantidadeDeXP > 9000 && quantidadeDeXP <= 10000){
        nivel = "Imortal"
    }
    
    else if(quantidadeDeXP > 10000){
        nivel = "Radiante"
    }
    
    return nivel
}

function verificaRanking(numeroDeVitorias, numeroDeDerrotas){
    let saldo = numeroDeVitorias - numeroDeDerrotas
    if(numeroDeVitorias < 10){
        return [saldo, "Ferro"]
    }
    
    else if(numeroDeVitorias >= 11 && numeroDeVitorias < 20){
        return [saldo, "Bronze"]
    }
    
    else if(numeroDeVitorias >= 21 && numeroDeVitorias < 50){
        return [saldo, "Prata"]
    }
    
    else if(numeroDeVitorias >= 51 && numeroDeVitorias < 80){
        return [saldo, "Ouro"]
    }
    
    else if(numeroDeVitorias >= 81 && numeroDeVitorias < 90){
        return [saldo, "Diamante"]
    }
    
    else if(numeroDeVitorias >= 91 && numeroDeVitorias < 100){
        return [saldo, "Lendário"]
    }
    
    else if(numeroDeVitorias >= 101){
        return [saldo, "Imortal"]
    }
}

function exibirMensagem(nomeDoHeroi, nivel, saldo, ranking){
    console.log("O personagem ", nomeDoHeroi, " está no nível ", nivel, " com saldo ", saldo, " e ranking ", ranking)
}

let nomeDoHeroi = "MrharryPorco"
let quantidadeDeXP = 500
let horasFarmando = 8
let quantidadeDeXPFarmadaPorHora = 1000
let nivel;
let numeroDeVitorias = 101
let numeroDeDerrotas = 200
let [saldo, ranking] = verificaRanking(numeroDeVitorias, numeroDeDerrotas)

nivel = verificaNivelHeroi(quantidadeDeXP)
exibirMensagem(nomeDoHeroi, nivel, saldo, ranking)

for(let contador = 0; contador < horasFarmando; contador++){
    quantidadeDeXP += quantidadeDeXPFarmadaPorHora
}

nivel = verificaNivelHeroi(quantidadeDeXP)
exibirMensagem(nomeDoHeroi, nivel, saldo, ranking)