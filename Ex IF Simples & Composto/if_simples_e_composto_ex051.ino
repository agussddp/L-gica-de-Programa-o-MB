// C++ code
//Faça um programa que receba um número do usuário e informe se
//este número é par ou ímpar.

int numero = 0;

void setup()
{ Serial.begin(9600);
}

void loop()
{
	Serial.println("Digite um numero");
	while (!Serial.available());
	numero = Serial.parseFloat();
  
  if ( numero % 2==0){
    Serial.println("esse numero e par");
    Serial.println();
  }
    else {
   Serial.println("esse numero e impar");
      Serial.println();
    }
  
  
 
  delay(1000);}