#include <stdio.h>
/*precisa incluir a biblioteca math.h para usarmos a funcao de raiz quadrada*/
#include <math.h>

	int main(){
		int numero, quadrado;
		float raiz;
		
		printf("\n Bem vindo, siga as instrucoes abaixo. \n");
		
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &numero);
		
		if(numero % 2 == 0){
			raiz = sqrt(numero);
			printf("\n O numero e par.");
			printf("\n A raiz quadrada e: %f", raiz);
		} else {
			quadrado = numero * numero;
			printf("\n O numero e impar.");
			printf("\n A raiz quadrada e: %d", quadrado);
		}
		
		return 0;
	}