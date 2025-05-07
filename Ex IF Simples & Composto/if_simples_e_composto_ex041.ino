// C++ code
//Faça um programa que receba um número inteiro do usuário e 
//informe se este número é positivo ou negativo.

int numero = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
	Serial.println("Digite um numero");
	while (!Serial.available());
	numero = Serial.parseFloat();
  
  if ( numero < 0){
    Serial.println("esse numero e negativo");
  }
    else {
   Serial.println("esse numero e positivo");
    }
  
  
  
  
  
  
  
  delay(1000);
}