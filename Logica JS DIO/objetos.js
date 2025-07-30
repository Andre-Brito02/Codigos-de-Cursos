class formaDebBolo{
    constructor(saborDaMassa, saborRecheio){
        this.saborDaMassa = saborDaMassa
        this.saborRecheio = saborRecheio
    }

    escrever(){
        console.log(`Um delicioso bolo de ${this.saborDaMassa} com ${this.saborRecheio}`)
    }
}

let boloFesta = new formaDebBolo("Massa de chocolate", "Recheio de nutella")
let boloPremium = new formaDebBolo("Massa de baunilha", "Recheio de coco")
boloFesta.escrever()
boloPremium.escrever()  