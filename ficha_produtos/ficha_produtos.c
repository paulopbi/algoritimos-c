#include <stdio.h>
#include <stdlib.h>

struct produto {
	int codigo;
	char descricao[50];
	float preco;
	int saldo;
};

int main () {
	struct produto ficha;
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &ficha.codigo);
	
	printf("Digite a descricao do produto: ");
	scanf("%s", &ficha.descricao);
	
	printf("Digite o preco do produto: ");
	scanf("%f", &ficha.preco);
	
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	
	printf("Codigo: %d\n", ficha.codigo);
	printf("Descricao: %s\n", ficha.descricao);
	printf("Preco: %.2f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return 0;
}