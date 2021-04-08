#include <stdio.h>
#include <stdlib.h>

int main () {

	//declaracao de variaveis
	int distancia = 100, combustivel = 25;
	float consumomedio;

	//processamento
	consumomedio = distancia/combustivel;	
	
	//escrevendo valores na tela	
	printf("\n a distancia percorrida foi: %d", distancia);
	printf("\n o combustivel gasto foi: %d", combustivel);
	printf("\n o consumo medio foi: %.2f", consumomedio);

	return 0;	
}
