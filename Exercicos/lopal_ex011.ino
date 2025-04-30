//Faça um programa que receba a idaded de ua pessoas em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos

// Declaração de variáveis
int idadeAnos = 0;
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada
  Serial.println("Digite sua idade em anos:");
  while (!Serial.available()); // Espera o usuário digitar e pressionar <Enter>
  idadeAnos = Serial.parseInt(); // Lê a idade digitada e transforma em número
  
  // Processamento
  idadeMeses = idadeAnos * 12;
  idadeDias = idadeAnos * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;

  // Saída
  Serial.println();
  Serial.println("Idade em anos :");
  Serial.println("Meses: " + String(idadeMeses));
  Serial.println("Dias: " + String(idadeDias));
  Serial.println("Horas: " + String(idadeHoras));
  Serial.println("Minutos: " + String(idadeMinutos));
  Serial.println();

  delay(3000); // Aguarda 3 segundos antes de repetir
}
