#include <stdio.h>
#include <stdlib.h>

int calcQuadrado(int x){
	x = x * x;
}

int main() {
	int num, resposta;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	resposta = calcQuadrado(num);
	
	printf("Quadrado do numero %d, e igual a: %d \n", num, resposta);
	return 0;
}