// C++ code
//Elabore um programa para cálculo de preços de produtos que 
//solicite o preço de compra do produto e o percentual a ser 
//aplicado em cima desse valor para a venda. Calcule e exiba o 
//preço de venda do produto. Se o percentual a ser aplicado for
//inferior a 50%, exiba uma mensagem informando ao usuário que o
//produto será vendido com uma margem muito pequena de lucro.


float precodecompra = 0;
float percentual= 0;
float precodevenda = 0;



void setup()
{
 Serial.begin(9600);
}


void loop()
{
	Serial.println("Digite o preço de compra");
	while (!Serial.available());
	precodecompra = Serial.parseFloat();
  
  	Serial.println("Digite o percentual");
	while (!Serial.available());
	percentual = Serial.parseFloat();

 	if (percentual < 50){
    Serial.println("o produto será vendido com uma margem muitopequena de lucro.");
  	}
  
	precodevenda = precodecompra + (precodecompra * 100/percentual);
    
	Serial.println("Preco de venda: " + String(precodevenda));
  	Serial.println();
    
                       
                       

  delay(1000); 
}