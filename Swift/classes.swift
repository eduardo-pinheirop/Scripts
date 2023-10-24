class Cat{
  var nome: String
  var cor: String
  var tamanho: String

  func miar(){//parametros
    print("\(nome) miou: Miaaaaauuuu!")
  }

  init(_ nome: String, _ cor: String, _ tamanho: String){
    self.nome = nome
    self.cor = cor
    self.tamanho = tamanho
  }
}

var gato1 = Cat.init("Mimi","Azul","Medio")

gato1.miar()


/////////////

class Pessoa{
  var nome: String
  var endereco: String
  var idade: Int

  func dirigir(km: Int){
    print("\(nome) dirigiu \(km) quilômetros")
  }
  func comer(_ qnt: Int){

    /*qnt == 1 ? 
    print("\(nome) comeu uma pizza!") : print("\(nome) comeu \(qnt) pizzas!")*/
    
    switch qnt{
      case 1:
        print("\(nome) comeu uma pizza!")
      default:
        print("\(nome) comeu \(qnt) pizzas!")
    }
  }

  init(name: String, address: String, old: Int){
    self.nome = name
    self.endereco = address
    self.idade = old
  }
}

var Joao = Pessoa.init(name:"Joao", address:"Rua JK", old:95) //poderia ser Pessoa(...) sem o ".init"

Joao.dirigir(km:10)

Joao.comer(3)


class Pessoa{
  var nome: String
  var endereco: String
  var idade: Int

  func dirigir(km: Int){
    print("\(nome) dirigiu \(km) quilômetros")
  }
  func comerpizza(_ qnt: Int){
    
    switch qnt{
      case 1:
        print("\(nome) comeu uma pizza!")
      default:
        print("\(nome) comeu \(qnt) pizzas!")
    }
  }
  
  init(name: String, address: String, age: Int){
    self.nome = name
    self.endereco = address
    self.idade = age  
  }
}

class Empregado: Pessoa{
  override func comerpizza(_ qnt: Int){ // sobrescrevendo/modificando um método existente da classe "mãe" para esta
    print("\(nome) guardou suas \(qnt) pizzas para depois do espediente")
    
    super.comerpizza(qnt) // puxando pra executar o método da classe "mãe" desta classe
  }
}

var ze = Empregado.init(name: "Ze", address: "Rua tá Complicado", age: 47)

ze.comerpizza(5)