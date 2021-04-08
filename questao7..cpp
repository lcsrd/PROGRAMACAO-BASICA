#include <stdio.h>
#include <stdlib.h>

int main () {
	//declarando variaveis
	int a;
	float b;
	
	//imprindo variavel "a"
	printf("digite um valor pra a: ");
	
	//aguarda a digitacao de um valor
	scanf("%d", &a);
	printf("\n");
	
	//imprindo o valor digitado
	printf("o valor de a = %d", a);
	printf("\n");
	
	//imprindo variavel "b"
	printf("digite um valor decimal pra b: ");
	
	//aguarda a digitacao de um valor
	scanf("%f", &b);
	printf("\n");
	
	//imprindo o valor digitado
	printf("o valor de b = %.2f", b);
	printf("\n");
	
	return 0;
}
