/* Avaliação de Desempenho Escolar */

//Você foi contratado para criar um sistema que analisa a 
//situação de um aluno com base em suas notas e frequência.
//Calcule a média entre DUAS notas.
//Verifique se o aluno foi APROVADO.
//Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
//Caso contrário, exiba se foi reprovado por nota.
//Exiba se foi REPROVADO por frequência.
//Exiba se foi REPROVADO frequência e média da nota .
//Se a média for exatamente 10 e a frequencia for 10, exiba: "Parabéns! Nota máxima!".







float nota1 = 0;
float nota2 = 0;
float frequencia = 0;
float media = 0;
 


  void setup()  
  {
   Serial.begin(9600);
  }



  void loop()
  {
    Serial.println("Inserir primeira nota");
    while ( ! Serial.available ());
    nota1 = Serial.parseFloat ();

    Serial.println("Inserir segunda nota");
    while ( ! Serial.available ());
    nota2 = Serial.parseFloat ();
    
    Serial.println("Inserir frequencia");
    while ( ! Serial.available ());
    frequencia = Serial.parseFloat ();
  
  
    media = nota1 + nota2/2;
  
  
  
  if ( media == 10 && frequencia == 1.0){
    Serial.println ("Parabens! Nota maxima!");
    Serial.println ();}
    
  else if (media >=6 && media <=9 && frequencia <=1.0 && frequencia >=7.5){
    Serial.println("Aprovado");
    Serial.println ();}
    
  else if ( media <6 && frequencia >=7.5){
    Serial.println ("Reprovado por nota");
    Serial.println ();}
    
  else if (media <6 && frequencia <7.5){
    Serial.println ("Reprovado por frequencia");
    Serial.println ();}
  
  else {
    Serial.println("Reprovado por frequencia e media da nota");
    Serial.println ();}
  
  Serial.println ();
    
  
    

  
  delay(1000); 
}