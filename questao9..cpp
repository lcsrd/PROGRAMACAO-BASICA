#include <stdio.h>
#include <stdlib.h>

int main () {
	//declaracao de variaveis
	int a, b;
	
	//imprindo variavel "a"
	printf("digite um valor pra a:");
	//aguarda a digitacao de um valor
	scanf("%d", &a);
	printf("\n");
	
	//imprindo variavel "b"
	printf("digite um valor pra b:");
	//aguarda a digitacao de um valor
	scanf("%d", &b);
	printf("\n");
	
	//soma das variaveis
	printf("\n a soma de %d + %d = %d", a, b, a + b);
	
	//subtracao
    	printf("\n a subtracao de %d - %d = %d", a, b, a - b);

    	//multiplicacao
    	printf("\n a multiplicacao de %d * %d = %d", a, b, a * b);

    	//divisao
	printf("\n a divisao de %d / %d = %d", a, b, a / b);
    
    	return 0;
}
