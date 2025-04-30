// C++ code
// Variáveis


int Idade = 15;


void setup()
{ Serial.begin(9600); }


void loop()
{ 
  
  Serial.println("Inserir idade");
  while ( !Serial.available() );
  Idade = Serial.parseInt();
  
  
  Serial.println ("Idade: " + String(Idade));
 
  if (Idade >= 16 ){ // Se retornar verdadeiro - losango sim
    Serial.println("Voto obrigatorio"); }
 
  else{ //Falso - losango não
    Serial.println("Sem idade para votar");}
  
   Serial.println ();
  
 
 delay(1000);}

