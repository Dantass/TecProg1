#include <stdio.h>
#include <stdlib.h>
/*Linguagem de alto nivel -> blueprint(Programa�ao em blocls)*/
int a = 0;
int main() {
	//1. Declarar as vari�veis
	int anos;
	int meses;
	
	//2. Pegar os valores do usario (input)
	printf("Digite os anos:\n");
	scanf("%d",&anos);
	// \n quebra para linha de baixo
	// o & indica a mem�ria onde o valor ser� armazenado
	//&anos � um endere�o de m�moria, onde armazena o valor
	//scanf precisa de 2 argumentos
	//"%d" string, place holder do tipo inteiro
	
	printf("%d \n", anos);
	
	//3. Fazer o calculo
	meses = anos * 12;
	printf("%d", meses);
	

	return 0;
}

