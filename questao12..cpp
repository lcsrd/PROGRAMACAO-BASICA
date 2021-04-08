#include <stdio.h>
#include <stdlib.h>

int main () {
	
	//declaracao das variaveis
	float nota1, nota2, nota3, media;
	
	//entrada de dados
	printf("digite a primeira nota do aluno: ");
	scanf("%f", &nota1);
	
	printf("digite a segunda nota do aluno: ");
	scanf("%f", &nota2);
	
	printf("digite a terceira nota do aluno: ");
	scanf("%f", &nota3);
	
	//procesamento
	media = (nota1 + nota2 + nota3) / 3;
	
	//saída
	printf("media do aluno = %.1f", media);
	
	return 0;
	
}
