
  String frutas[5];//vetor vazio 0-4
  float precos [5];
  int quantidade[5];

  void setup()
  {
    Serial.begin(9600);
  }

  void loop()
  {
      //imprime um cabeçalho
    Serial.println("****** PROGRAMA CADASTRO DE FRUTAS ******");
    Serial.println();
    delay(1500);

    

        //pedir frutas para o usuario
        //guardar as frutas no compartimento correto
	  for(int i = 0; i <5; i++){
      	Serial.println("digite uma fruta "); 
      	while(! Serial.available());
      	frutas [i] = Serial.readString();
        
        Serial.println("digite a quantidade de "+frutas[i]); 
      	while(! Serial.available());
      	quantidade [i] = Serial.parseInt();
        
        Serial.println("digite preco da fruta "+frutas[i]); 
      	while(! Serial.available());
      	precos [i] = Serial.parseFloat();
        
      }
		
    	Serial.println();
    
        //exibir dados cadastrados
      Serial.println("****** LISTAGEM DAS FRUTAS ******");
      Serial.println();

       //usar o for para exibir as frutas cadastradas
      for(int i = 0; i <5; i++){  
         Serial.println("Fruta: " + frutas[i]);
         Serial.println("Quantidade: "+String(quantidade[i]));
         Serial.println("preco: R$" + String(precos[i]));
         Serial.println();
         delay(1800);
       }

  
  
}