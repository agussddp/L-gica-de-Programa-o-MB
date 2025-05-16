float resultado;
int operacao;

    // Funções com return
    float somar(float n1, float n2) {
      resultado = n1 + n2;
      return resultado;
   }


    float dividir(float n1, float n2) {
	  resultado = n1 / n2;
      return resultado;
   }

    float subtrair(float n1, float n2) {
      resultado = n1 - n2;
      return resultado; }

    float multiplicar(float n1, float n2){
      resultado = n1 * n2;
 	  return resultado;
    }

  void setup() {
  Serial.begin(9600);
  delay(1000);

  int continuar = 1;
  float numero1;
  float numero2;

  do {
    Serial.println("\n--- Calculadora Inteligente ---");
    Serial.println("Escolha uma das operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Dividir");
    Serial.println("3 - Subtrair");
    Serial.println("4 - Multiplicar");

    while (!Serial.available()) {}
    operacao = Serial.parseInt();
    Serial.println(); 

    Serial.println("Digite o primeiro numero:");
    while (!Serial.available()) {}
    numero1 = Serial.parseFloat();
    Serial.println(); 

    Serial.println("Digite o segundo numero:");
    while (!Serial.available()) {}
    numero2 = Serial.parseFloat();
    Serial.println(); 

    switch (operacao) {
      case 1:
        resultado = somar(numero1, numero2);
        Serial.println("O resultado da soma foi: " + String(resultado));
        break;
      case 2:
        resultado = dividir(numero1, numero2);
        if (numero2 != 0)
          Serial.println("O resultado da divisao foi: " + String(resultado));
        break;
      case 3:
        resultado = subtrair(numero1, numero2);
        Serial.println("O resultado da subtracao foi: " + String(resultado));
        break;
      case 4:
        resultado = multiplicar(numero1, numero2);
        Serial.println("O resultado da multiplicacao foi: " + String(resultado));
        break;
      default:
        Serial.println("Opcao invalida! Escolha uma opcao de 1 a 4.");
    }

    Serial.println("Quer voltar ao menu? Digite 'sim' ou 'nao':");
    while (!Serial.available()) {}
    

    if (resposta == "sim") {
      continuar = 1;
    } else {
      continuar = 0;
      Serial.println("Obrigado por usar a calculadora! Até breve.");
    }

  } while (continuar != 0);
}

void loop() { 
}
  //sem instruções

