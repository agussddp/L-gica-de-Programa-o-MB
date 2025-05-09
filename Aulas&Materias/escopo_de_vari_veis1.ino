// C++ code
//

//Variáveis - escopo de variáveis (global)



  void setup()
  {//Função que roda só a inicialização do programa
    Serial.begin(9600)//Carrega o módulo serial para usar com o arduino

    String nome = "Edu Paz"; //Escopo local só vale dentro de setup
    Serial.println("Nome eh: " + nome); //Escreve "Edu Paz" na serial
    nome = "bia paz"; //Muda o valor da variável nome para "bia paz"
  }


  void loop()
  {//função que roda eternamente, até que você desligue o Arduino
    String nomeDele = "Paulo Vieira";//Variável local dentro do loop

    if (nomeDele == "Paulo Vieira")
    {//Estrutura condicional simples
      int idade = 16; //Variável local dentro do if
    }

    
    Serial.println("Nome dele eh: " + nomeDele); // Imprime "Paulo Vieira"
    Serial.println("Idade dele eh: " + String(idade)); //dá erro, pois a variável idade não existe neste escopo


    delay(10000); //aguarda 10 segundos antes de recomeçar a rodar o loop novamente
  }