//Peça ao usuario para digitar a cor de um semaforo
//(vermelho ou verde). Se digitar "verde", mostre "siga".
//Caso contrario, mostre "pare"


String Cor = "";


void setup()
{
  Serial.begin(9600);
}


void loop()
{
  Serial.println("Digite a cor de um semaforo");
  while ( !Serial.available() );
  Cor = Serial.readString();
  
  
  if (Cor == "Verde"){
    Serial.println("Siga"); 
  }
  
  if (Cor == "Vermelho") {
    Serial.println("Pare");
  }
  
     Serial.println ();
  
  delay(1000);
}