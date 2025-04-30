//Faça um programa que receba um número e exiba o seu dobro.
//

int numero;
int dobro;

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  Serial.println("Insira um numero:");
   while (!Serial.available());
  if (Serial.available() > 0) {
    numero = Serial.parseInt(); // Lê o número digitado
    dobro = numero * 2;
    Serial.print("O dobro de ");
    Serial.print(numero);
    Serial.print(" e ");
    Serial.println(dobro);
    
    // Aguarda nova entrada
    Serial.println("Digite outro numero:");
  }
}
