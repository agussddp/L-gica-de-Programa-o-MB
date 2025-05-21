
  void setup()
  {
   Serial.begin(9600);
  }


  void loop()
  {           //Indices   0         1       2      3
             // tamanho
    String nomes[4] = {"Eduardo","Lucas","Rafa","Salgado"};
    Serial.println(nomes[2]);//imprimir o valor que está no indice/caixinha2

    nomes[2] = "Diogo";
    Serial.println(nomes[2]);//imprime o texto "Diogo" que é o 3o elemento (indice 2)
     delay(2000);

    int idade[5];//criando um vetor vazio/nulo tamanho 5(0-4)

    Serial.println(idade[2]);
     idade[0] = 50;
     idade[1] = 55;
     idade[2] = 5;
     idade[3] = 15;
     idade[4] = 12;

    Serial.println(idade[0]);//50
    Serial.println(idade[1]);//55
    Serial.println(idade[2]);//5
    Serial.println(idade[3]);//15
    Serial.println(idade[4]);//12
    Serial.println(idade[5]);//??
     delay(2000);
}