// Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

int Idade = 0;
int IdadeSemanas = 0;
int AnoNascimento = 0;
int AnoAtual = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  // Solicita os dados do usuário 
  
  //Ano de nascimento
 Serial.println ("Digite o ano de seu nascimento: ");
 while (!Serial.available());
 AnoNascimento = Serial.parseInt();
  
  //Ano atual
  Serial.println ("Digite o ano atual: ");
  while (!Serial.available());
  AnoAtual = Serial.parseInt();  
  
  //Processamento
  Idade = AnoAtual - AnoNascimento;
  IdadeSemanas = Idade *52;
  
  //Saída
  Serial.println("Semanas: " + String(IdadeSemanas));
  Serial.println("Ano de nascimento: " + String(AnoNascimento));
  Serial.println("Ano atual: " + String(AnoAtual));
  Serial.println("Idade: " + String(Idade));
  Serial.println();
  
}
    
    