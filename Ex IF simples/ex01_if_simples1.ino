// Peça idade do usúario. Se for maior ou igual a 18, escreva "maior de idade".
//Caso contrario, escreva "menor de idade"

int Idade = 0;


void setup()
{ Serial.begin(9600); }


void loop()
{
  Serial.println ("Inserir idade: ");
  while (! Serial.available() );
  Idade = Serial.parseInt ();
  
  Serial.println ("Idade: " + String(Idade));
  
  if (Idade >= 18 ){
    Serial.println("Maior de idade"); }
  
   else{
     Serial.println("Menor de idade");}
  
    Serial.println ();
  
 
 delay(1000);}