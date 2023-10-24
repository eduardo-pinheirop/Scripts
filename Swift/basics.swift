func teste1() {
  var nomeVariavel = "Fulano"
  let nomeImutavel = "Beltrano"

  nomeVariavel = "Zezin"
  
  print("O nome variável é \(nomeVariavel)")
  print("\nO nome que nn sera mudado é \(nomeImutavel)")
  
  ////
  
  var compras: [String:String] = [:]
  print(compras)

  compras["José"] = "Carpinteiro"
  print(compras)
}
////

for num in 10..<20{
  print(num)
}

/////

var nome: String? 

if nome == nil {
  print("A variavel não tem valor")
} else {
  //print(nome)
}

var idadeOpicional: Int? = 19

//if let é usado pra desempacotar uma variável opicional de forma segura
if let idade = idadeOpicional {
  print(idade)
}

//"if let" e "case let"

var idadeOpicional: Int?

//if let é usado pra desempacotar uma variável opicional de forma segura
if let idade = idadeOpicional {
  print(idade)
}


////////

let numbers = 1...40

for num in numbers where num <= 20{
  print(num)
}

for num in numbers{
  if num <= 20{
    print(num)
  }
}

//// 

var nome = "Ed Sheeran"

switch nome{
  case "Daniel":
    print("Usuário padrão, bem-vindo de volta!")
  case "Marinho":
    print("Usuário cadastrado como visitante, é bom vê-lo") 
  default:
    print("Sai fora")
}