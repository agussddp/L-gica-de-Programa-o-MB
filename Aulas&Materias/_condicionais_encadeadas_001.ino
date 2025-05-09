  /* Estruturas condicionais encadeadas (3 ou mais respostas)
  */


  //Ifatil - 5 até 8 anos
  //Cdete - 8 até 12 anos
  //Jvenil - 12 até 15 anos
  //Jnior - 15 até 18 anos
  //Aulto - acima de 18
  //Qualquer outra idade não pode participar do esporte



  int idade = 16;



     void setup()
   {
       Serial.begin(9600);

       Serial.println("Academia do Davi");
       Serial.println();

       Serial.println("Seu sobrinho tem " + String(idade) + " anos");


    if (idade >= 5 && idade <8){ //5 até 7 anos
        Serial.println("Cadastrado na categotia Infatil");}
    
    else if(idade >=8 && idade <12){  //8 até 11 anos
        Serial.println("Cadastrado na categotia Cadete");}
    
    else if (idade >=12 && idade <15){ //12 até 14 anos
        Serial.println("Cadastrado na categotia Juvenil");}
    
    else if (idade >=15 && idade  <18){ //15 até 17 anos
        Serial.println("Cadastrado na categotia Junior");}
    
    else if(idade >=18){
        Serial.println("Cadastrado na categotia Adulto");}
    
    else {//idade abaixo de 5 anos
        Serial.println("Na pode participar de esportes na academia do Davi");}

}






void loop()
{ }