// C++ code
//Faça um programa que receba um número de usuário e exiba este
//número, apenas se for par.


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
  
  if ( numero % 2==0){
    Serial.println("numero par: " + String(numero));
    Serial.println();
  }
    else {
   Serial.println("numero invalido");
      Serial.println();
    }
  
  
  
  
 
  delay(1000);
}