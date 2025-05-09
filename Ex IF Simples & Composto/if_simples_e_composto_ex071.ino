// C++ code
//Faça um programa receba dois valores e imprima qual é o maior
//número digitado.

int numero1 = 0;
int numero2 = 0;




void setup()
{
 Serial.begin(9600);
}


void loop()
{
  Serial.println("Digite o primeiro numero");
  while (!Serial.available());
  numero1 = Serial.parseFloat();
  
  Serial.println("Digite o segundo numero");
  while (!Serial.available());
  numero2 = Serial.parseFloat();
  
  
  if (numero1 > numero2){
    Serial.println("Maior numero: " + String(numero1));
    Serial.println();
}
    
   else {
   Serial.println("Maior numero: " + String(numero2));
   Serial.println();
}
  
  
  
  
  delay(1000);
}
