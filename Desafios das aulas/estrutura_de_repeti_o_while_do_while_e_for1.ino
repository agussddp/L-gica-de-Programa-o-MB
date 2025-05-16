/* 
While - Estrutura de repetição que só executa quando a condição
for VERDADEIRA.
*/


/* A função SETUP() tem como objetivo de inicializar o programa.
POdemos chamar de configuração*/


      void setup()
    {
      Serial.begin(9600);


    // Do 5 ao 1
        int contadorWhile = 5; //variável local

        while ( contadorWhile >= 0){
        Serial.println("Contando (5 a 0): " + String(contadorWhile));
        contadorWhile--;
          delay(1000);}
        Serial.println();


     // Do 1 ao 100
        int contadorWhile2 = 0; //variável local

        while (contadorWhile2 <= 100) {
        Serial.println("Contando(0 ao 100): " + String(contadorWhile2));
        contadorWhile2 += 5;
          delay(850);}
        Serial.println();



     // Números pares
        int contadorWhile3 = 0; //variável local

        while (contadorWhile3 <= 20) {
        if (contadorWhile3 % 2 == 0) {
        Serial.println("Par (0 a 20): " + String(contadorWhile3));}
        contadorWhile3++;
          delay(977); }
        Serial.println();



     // Números ímpares de 1 ao 99
      int contadorWhile4 = 1; //variável local

      while (contadorWhile4 <= 99) {
      if (contadorWhile4 % 2 == 1) {
      Serial.println("Impar (1 a 99): " + String(contadorWhile4));}
      contadorWhile4++;
        delay(960); }
      Serial.println();


        
     // Números pares de 60 a 80 e impares de 81 a 101
      int contadorWhile5 = 60;
      int contadorWhile6 = 81;

      while (contadorWhile5 <= 80 || contadorWhile6 <= 101){
      if (contadorWhile5 <= 80 && contadorWhile5 % 2 == 0){
      Serial.println("Par (60 a 80): " + String(contadorWhile5));
      contadorWhile5 += 2;
        delay(1050);}
        }

       if (contadorWhile6 <= 101 && contadorWhile6 % 2 == 1) {
       Serial.println("Impar (81 a 101): " + String(contadorWhile6));
       contadorWhile6 += 2;
        delay(1050);}
        }


  
  



//O LOOP() tem como objetivo de repetir várias vezes o mesmo programa/

void loop()
{
}
    
     
    
/* ANOTAÇÕES


  /* Tipos de dados (Principais)
    - INT (números inteiros)
    - LONG (números inteiros - é um int com maior capacidade de armazenamento)
    - STRING (caracteres: alfanúmericos e especiais)
    - FLOAT (números com casas decimais)
    - BOOL (true e false)



     Operadores
    - aritmético: +, -, *, / e %
    - lógicos: - || (PIPI - OU)
               - && (E COMERCIAL - E)
               - !  (PONTO DE EXCLAMAÇÃO - NEGAÇÃO/INVERTE)
               
    - relacionional: - == (COMPARAÇÃO)
                     - >= (MAIOR IGUAL)
                     - >  (MAIOR QUE)
                     - <= (MENOR IGUAL QUE)
                     - != (DIFERENTE DE)
                     - <  (MENOR QUE)





   (variável)contadorWhile++; 
       //1a contadorWhile++
       //2a contadorWhile = contadorWhile + 1
       //3a contadorWhile += 2 (somar com valor diferente de 1)


*/
