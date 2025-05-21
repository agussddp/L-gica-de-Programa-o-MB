    void setup()
   {
     Serial.begin(9600);
   }


    void loop()
   {           //Indices   0         1       2      3
               // tamanho
      String nomes[4] = {"Eduardo","Lucas","Rafa","Salgado"};
      int numeral = 1;
      int idade[4];
      
       //pedir as idades para o usúario
      for(int i = 0; i <4; i++){
 		Serial.println("Digite a idade de "+nomes[i]); 
        while(! Serial.available());
        idade [i] = Serial.parseInt();
	  }
 
      
      //exibir todos os nomes do vetor
      //roda de 0 a 3
      for(int i = 0; i <4; i++){  
       Serial.println(String(i + 1) + "o nome: " + nomes[i]);
       Serial.println("idade: " + String(idade[i]));
       Serial.println();
        delay(2000);
      }
   }