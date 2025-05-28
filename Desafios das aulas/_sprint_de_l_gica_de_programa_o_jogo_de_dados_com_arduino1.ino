#include <Servo.h>
const int ledVermelho = 7;
const int ledVerde = 10;
const int ledAzul1 = 4;
const int ledAzul2 = 3;
const int ledAzul3 = 2;

int acertos = 0;
Servo motor;


  void desenhaCabecalho() {
    Serial.println(" ");
    Serial.println(" ");
    Serial.println("--- PROGRAMA JOGO DE DADOS ---");
    Serial.println(" ");
    Serial.println(" ");
    Serial.println();
    delay(500);
 }

  void desenhaPontinhos(int qtdPontos = 5, int tempo = 700) {
    for (int i = 1; i <= qtdPontos; i++) {
      Serial.print(".");
      delay(700);		
    }
 }

    void setup() {
      Serial.begin(9600);
      motor.attach(8);
      randomSeed(analogRead(0));

      pinMode(ledVermelho, OUTPUT);
      pinMode(ledVerde, OUTPUT);
      pinMode(ledAzul1, OUTPUT);
      pinMode(ledAzul2, OUTPUT);
      pinMode(ledAzul3, OUTPUT);

      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledAzul1, LOW);
      digitalWrite(ledAzul2, LOW);
      digitalWrite(ledAzul3, LOW);
		
      motor.write(0);
    }



  void loop() {
    desenhaCabecalho();

    Serial.println("Bem-vindo(a) A Fortaleza do Dado Sagrado");
    Serial.println("Digite um palpite entre 1 e 6:");
    while (!Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7); 

    Serial.print("Jogando o dado ");
    desenhaPontinhos();
    Serial.println();
    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Número Sorteado: " + String(numeroSorteado));

    if (palpite == numeroSorteado) {
      Serial.println("Parabéns, você acertou!");
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledVermelho, LOW);
      acertos++;

        if (acertos == 1) digitalWrite(ledAzul1, HIGH);
        if (acertos == 2) digitalWrite(ledAzul2, HIGH);
        if (acertos == 3) {
          digitalWrite(ledAzul3, HIGH);
          Serial.println("Você conquistou as 3 joias! A Porta da Sabedoria se abre!");
          motor.write(90);
        }
  } 
    else {
      Serial.println("Que pena, tente outra vez!");
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelho, HIGH);
  }

    delay(1000); 
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, LOW);

    Serial.println("FIM DO JOGO");
    Serial.println("----------------");
    Serial.println();
    delay(700);
  }
