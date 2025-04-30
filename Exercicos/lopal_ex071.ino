// Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

String Nome = "";
String Cargo = "";
float Salario = 0;
float NovoSalario;
float Aumento;

void setup() {
  Serial.begin(9600);
}

void loop() {
    Serial.println("Digite o nome do funcionario:");
    while (!Serial.available());
    Nome = Serial.readStringUntil('\n');
    Serial.println("Digite o cargo do funcionario:");
    
    while (Serial.available() == 0);
    Cargo = Serial.readStringUntil('\n');
    Serial.println("Digite o salario do funcionario:");

    while (Serial.available() == 0);
    Salario = Serial.parseFloat();
    Serial.println();
   
    Aumento = Salario * 0.10;
    NovoSalario = Salario + Aumento;

    
    Serial.print("Nome: ");
    Serial.println(Nome);
    Serial.print("Cargo: ");
    Serial.println(Cargo);
    Serial.print("Novo salario com 10% de aumento: R$");
    Serial.println(NovoSalario);
    Serial.println();

    // Aguarda 5 segundos antes de repetir o processo
    delay(5000);
}