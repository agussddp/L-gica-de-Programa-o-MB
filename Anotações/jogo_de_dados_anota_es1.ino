//funções

	void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
    {
      for(int i = 1; i <= qtdPontos; i++){
      Serial.print(".");}
       Serial.println();
    }
  
  
    void desenhaCabecalho()
  {  Serial.println(" ");
     Serial.println(" ");
     Serial.println("--- PROGRAMA JOGO DE DADOS --- ");
     Serial.println(" ");
     Serial.println(" "); 
  }//fim da função


	String devolveTexto()
   {  String texto = "uma linha de texto/n";
             texto += "Mais uma linha de texto/n";
      		 texto += "Terceira linha/n";
      return texto;
   }



    void setup()
    {
     Serial.begin(9600);
      randomSeed(analogRead(0));}
     //inicia e normaliza a porta randômica para evitar o mesmo valor
    



    void loop()
  {
      desenhaCabecalho();//invoca a função que dá print e não devolve nada(void)
   
      Serial.println("Quantas vezes voce quer jogar");
      while(! Serial.available());//esperar o usuário digitar e dar um enter
      int rodadas = Serial.parseInt();
      
      int vetPalpites[rodadas];//tamanho do vetor é igual o tamanho da quantidade de rodadas
      int vetResultados[rodadas];
      
     
      //criar um for para a quantidade de rodadas
      for(int r = 0; r < rodadas; r++){
        
       //o jogo vem aqui dentro 
        
      //pedir palpite de usuario
      Serial.println("Digite um palpite de 1 a 6");
      while (! Serial.available());
      int palpite = Serial.parseInt();

      //sortear dado
      int numeroSorteado = random(1,7);//gera um numero aleatorio entre 1 e 6
      
      Serial.print("Jogando o dado");
        desenhaPontinhos();
         


      //mostrar o resultado
       Serial.println("Seu palpite: " + String(palpite));
       Serial.println("Numero do dado: " + String(numeroSorteado));
	
      //guardar os dados nos vetores para posteriormente montar  o relatorio
       vetPalpites[r] = palpite;
       vetResultados[r] = numeroSorteado; 
        
        
      //se acertou dar os parabens, senao que pena
      if(palpite == numeroSorteado){
       Serial.println("Parabens, voce acertou!");}
      else{
        Serial.println("Que pena, tente outra vez!");}

      delay(1000);
      
     }//fim do for
      
      //exibir o final - relatorio
      Serial.println();
      Serial.println("ESTATISTICAS DO JOGO");
      Serial.println();
      
      for(int i =0; i < rodadas; i++){
        Serial.println("Rodada "  +String(i) + ":");
        Serial.println("  Palpite: " + String(vetPalpites[i]));
        Serial.println("  Dado: " + String(vetResultados[i]));
        
        /*if(vetPalpites[i] == vetResultados[i]){
          Serial.println("Resultado: Acertou");}
        else{
          Serial.println("Resultado: Errou");}*/
        
        //operador ternário
        //(expression) ? "true" : "false"
        Serial.println("Resultado: " + String(vetPalpites[i] == vetResultados[i] ? "Acertou!" : "Errou!" ));
           
        Serial.println("----------------");
        Serial.println();
        delay (1475);
       }

      Serial.println("FIM DO JOGO! REINICIANDO O SISTEMA");
      delay(1000);
    }