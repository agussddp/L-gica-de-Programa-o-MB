//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

float cm = 0;
float polegadas = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  Serial.println("Digite a medida em polegadas: ");
  while (!Serial.available());
  if (Serial.available() > 0) {
  polegadas = Serial.parseFloat();
  cm = polegadas * 2.54;

    // Exibe o resultado na tela serial
    Serial.print(polegadas);
    Serial.print(" polegadas equivale a ");
    Serial.print(cm);
    Serial.println(" cm.");
  }
}