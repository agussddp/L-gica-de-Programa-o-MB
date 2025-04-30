 // Faça um programa que receba a medida em centímetros e exiba esse
 //número em polegadas. OBS: Uma polegada equivale a 2.54
 //centímetros.
 

float cm = 0;
float polegadas = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
   // Solicita a entrada do usuário (via monitor serial)
  Serial.println("Digite a medida em centimetros: ");
  while (!Serial.available());
  if (Serial.available() > 0) {
  cm = Serial.parseFloat();
  polegadas = cm / 2.54;

    // Exibe o resultado na tela serial
    Serial.print(cm);
    Serial.print(" cm equivale a ");
    Serial.print(polegadas);
    Serial.println(" polegadas.");
  }
}
