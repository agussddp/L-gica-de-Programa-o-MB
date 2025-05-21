/*
Faça um programa para simular a organização de uma festa 
para o cadastro de convidados, 
registrando as seguintes informações:

  
Nome
Email,
Idade,
,

O programa deve solicitar os dados via monitor serial, 
armazená-los em vetores, e ao final do cadastro exibir uma
listagem completa dos convidados. 

OBS: A festa contratada será vip para apenas 7 convidados
*/

String nome[7];
String email[7];
int idade[7];

void setup()
{
  Serial.begin(9600);
}


void loop()
{
 for(int c = 0; c <7; c++){
      	Serial.println("Insira o nome do convidado"+String(c+1)); 
      	while(! Serial.available());
      	nome [c] = Serial.readString();

      	Serial.println("digite seu email"+String(c+1)); 
      	while(! Serial.available());
      	email [c] = Serial.readString();
   
   	    Serial.println("digite sua idade"+String(c+1)); 
      	while(! Serial.available());
      	idade [c] = Serial.parseInt();
 		}
   
    for(int c = 0; c <7; c++){  
       Serial.println("Convidados: " + String(c + 1));
       Serial.println("   Nome: "+ nome[c]);               
       Serial.println("   Idade: " + String(idade[c]));
       Serial.println("   Endereco de email: "+ email[c]);
       Serial.println("------");

       Serial.println();
        delay(1800);
     }
  
  
}