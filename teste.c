//Fun��o Principal
/*
-fun��o sem argumentos � estatica
-void n�p recisa de return
-o main precisa chamar a fun��o, sen�o n�o � executada ex: mensagem(), dentro das chaves do main
-o main � chamddo pelo sistema operacional
- %f -> float
- %d -> int
- %s -> string
- %c -> caracter (apenas uma letra)
- as variaveis s� funcionam dentro do escopo ({})
*/

/*
void mensagem(int a){
	printf("a = %d", a);
}
*/

/*
void ping(int valor, int dist){
	printf("Seu ping eh %d ms, a %d km de distancia.", valor, dist);
}
*/


/*
int quad(int num){
	int r = num * num;
	return r;
}
*/

int multiplicacao(int n1 , int n2){
	return n1 * n2;
}

int main(){
//	mensagem(10);
//	ping(60, 100);


/*
// duas formas de printar o return:
	printf(" resultado = %d\n", quadrado(10)) // aqui o return � printado direto, n�o � salvo em uma vari�vel
// ou
	int res = quad(5); // aqui armazena o return numa vari�vel
*/

	printf("A multiplica��o eh %d", multiplicacao(2, 3));

	return 0;
}
