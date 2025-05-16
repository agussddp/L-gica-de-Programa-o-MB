int tabuadaEscolhida;


void setup()
{
  Serial.begin(9600);
  Serial.println("Bem-vindo a tabuada");
  
  Serial.println("Digite a tabuada do numero que deseja(1 ao 10)");
  while (! Serial.available());
  tabuadaEscolhida = Serial.parseInt();

  for (int contador = 1; contador <= 10; contador++) {
  Serial.println(String(tabuadaEscolhida)+"x"+ String(contador) + "=" + String(tabuadaEscolhida * contador));


    delay (1000);
  }
}

void loop()
{

}