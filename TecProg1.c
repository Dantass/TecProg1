#include <stdio.h>
#include <stdlib.h>
/*Linguagem de alto nivel -> blueprint(Programaçao em blocls)*/
int a = 0;
int main() {
	//1. Declarar as variáveis
	int anos;
	int meses;
	
	//2. Pegar os valores do usario (input)
	printf("Digite os anos:\n");
	scanf("%d",&anos);
	// \n quebra para linha de baixo
	// o & indica a memória onde o valor será armazenado
	//&anos é um endereço de mémoria, onde armazena o valor
	//scanf precisa de 2 argumentos
	//"%d" string, place holder do tipo inteiro
	
	printf("%d \n", anos);
	
	//3. Fazer o calculo
	meses = anos * 12;
	printf("%d", meses);
	

	return 0;
}

