class heroi{
    constructor(nome, nivel, tipo){
        this.nome = nome
        this.nivel = nivel
        this.tipo = tipo
    }

    toString(){
        let ataque
        switch(this.tipo){
            case "mago":
                ataque = "magia"
                break
            case "guerreiro":
                ataque = "espada"
                break
            case "monge":
                ataque = "artes marciais"
                break
            case "ninja":
                ataque = "shuriken"
                break
        }

        console.log(`O ${this.tipo} ${this.nome}, nível ${this.nivel}, atacou usando ${ataque}`)
    }
}

let personagem = new heroi("Mrharryporco", 23, "ninja")
personagem.toString()