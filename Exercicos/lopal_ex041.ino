// Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
//(altura * altura).
/*Faça um programa que receba o nome, o peso e a altura de uma
pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
/ (altura * altura).
*/
//Declaração de variáveis
String nome = "";
float peso;
float altura;
float IMC;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println ("Digite seu nome:");
  while( !Serial.available() );
  nome = Serial.readString();
  
   Serial.println ("Digite seu peso:");
  while( !Serial.available() );
  peso = Serial.parseFloat();
  
   Serial.println ("Digite sua altura");
  while( !Serial.available() );
  altura = Serial.parseFloat();
  
  
  //Processamento
  IMC = peso / (altura * altura);
  
  
  //Saída
    
   Serial.println();
   Serial.println("Nome:" + (nome));
   Serial.println("Seu IMC:" + String(IMC));
   Serial.println();
  
  delay(1000);
}