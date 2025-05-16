  /* 
    For - É uma estrutura de repetição com a inicialização, condição e incremento definidos. 
    Assim como while, só executa quando a condição for verdadeira
  */


  /* A função SETUP() tem como objetivo de inicializar o programa.
  POdemos chamar de configuração*/


    void setup()
   {
     Serial.begin(9600);

        
    // Do 1 ao 5  
   for(int contador = 1; contador <= 5; contador++){
    Serial.println("Contando: " + String(contador));
}
     
      
   
   for(int contador = 1; contador <= 100; contador++){
         Serial.println("Contando: " + String(contador));
        delay(900);
}
      
      
      
      }









void loop()
{
}
    
     
