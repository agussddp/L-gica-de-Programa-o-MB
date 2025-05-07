// C++ code
//Faça um programa que receba o nome, cargo e salário de um 
//funcionário. Se o funcionário ganhar abaixo de 1000 reais,
// calcule o salário acrescido de 10%.
//Ao final exiba o nome, o cargo e o salário desse funcionário.


// Variáveis
String nome = "";
String cargo = "";
float salario = 0;



void setup()
{
  Serial.begin(9600);
}



void loop()
{
  Serial.println("Digite o nome do funcionario");
  while (!Serial.available());
  nome = Serial.readString();
  
  Serial.println("Digite o cargo do funcionario");
  while (!Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Digite o salario do funcionario");
  while (!Serial.available());
  salario = Serial.parseFloat();
  
  
  if (salario<1000){
    salario=salario * 1.10;}
  
  
    Serial.println("nome: " + nome);
    Serial.println("cargo: " + cargo);
    Serial.println("salario: " + String(salario));

     
  
  
  
  delay(1000);  }