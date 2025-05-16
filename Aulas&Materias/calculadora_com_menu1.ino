

int operacao;
float numero1;
float numero2;

void setup()
{
  Serial.begin(9600);
  
  int contador = 0;//variável inicializadora do 'do while'
  float resultado; //Irá guardar o resultado do calculo da respectiva operação
  
  do{  
    Serial.println("Bem-vindo(a) a calculadora inteligente\n"); //n/ enter via texto
    Serial.println("Escolha uma das operacoes");
    Serial.println("1 - Somar");
    Serial.println("2 - Dividir");
    Serial.println("3 - Subtrair");
    Serial.println("4 - Multiplicar");
    while (! Serial.available()){}
    operacao = Serial.parseInt();
    
    
    
    Serial.println("Digite o primeiro número");
    while (! Serial.available()){}
    numero1 = Serial.parseFloat();
    
    
    Serial.println("Digite o segundo número");
    while (! Serial.available()){}
    numero2 = Serial.parseFloat();
    
    
    switch(operacao){
      case 1: //Somar
      	resultado = numero1 + numero2;
        Serial.println("O resultado da soma foi: " + String(resultado));//concatenano
           break;
      case 2: //Dividir
        resultado = numero1/numero2;
        Serial.println("O resultado da divisao foi: " + String(resultado));
           break;
      case 3: //Subtrair 
      	resultado = numero1 - numero2;
        Serial.println("O resultado da subtracao foi: " + String(resultado));
           break;
      case 4: //Multiplicar
      	resultado = numero1 * numero2;
        Serial.println("O resultado da multiplicacao foi: " + String(resultado));
           break;
      default:
         Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4");
    }   
    
    
    Serial.println("quer voltar ao menu? Digite sim ou nao (em minusculo, por favor!)");
    while (! Serial.available()){}
    
    
    if (Serial.readString() == "sim"){
       contador = 1; }
    else{
     contador = 0;
      Serial.println("Obrigado por usar nossa calculadora! Ate breve");
      Serial.println("Caso queira voltar ao menu, reinicie o programa :)");}
    
    
  }
      
      
  while (contador != 0); //se o contador for diferente de 0, o mesmo repete.    
      
      
      
      
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  




void loop()
{ /*sem instrução */}