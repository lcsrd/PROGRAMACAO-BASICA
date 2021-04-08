#include <stdio.h>
#include <stdlib.h>

int main () {
	//declarando variaveis
	float salario, vendas, comissao, salariofinal;
	
	//entrada de dados
	printf("digite o valor do salario: ");
	scanf("%f", &salario);
	printf("digite o total de vendas deste mes: ");
	scanf("%f", &vendas);
	
	comissao = (vendas/100) * 15;
	salariofinal = comissao + salario;
	
	//saida de dados
	printf("\n salariofixo = %.2f", salario);
	printf("\n salario do mes = %.2f", salariofinal);
	
	return 0;
	
}
