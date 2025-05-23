// C++ code
//

int ledIntegradogreen = 13;
int ledIntegradored = 12;
int ledIntegradoamarelo = 8;

void setup()
{
  pinMode(ledIntegradogreen, OUTPUT);
  pinMode(ledIntegradoamarelo, OUTPUT);
  pinMode(ledIntegradored, OUTPUT);
  
}

void loop()
{
  digitalWrite(ledIntegradogreen, HIGH);
  delay(1000);
  digitalWrite(ledIntegradoamarelo, HIGH);
  delay(1000);
  digitalWrite(ledIntegradogreen, LOW);
  digitalWrite(ledIntegradored, HIGH);
  delay(1000);
  digitalWrite(ledIntegradoamarelo, LOW);
  delay(1000);
  digitalWrite(ledIntegradored, LOW);
  delay(1000); 
  
  
   
  
  
}