#include <stdio.h>
#include <stdlib.h>

int main(){
	float peso, altura, IMC;
	
	printf("Insira o peso:\n");
	scanf("%f", &peso);
	
	printf("Insira a altura:\n");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	printf("IMC: %.2f\n", IMC);
	
	if (IMC < 21.0) {
		printf("Abaixo do peso.\n");
	}
	else if (IMC > 30.75) { // IMC >= 21.0
		printf("Obeso.\n");	
	}
	
	else { // 21.0 <= IMC <= 30.75
		printf("Peso padrao.\n");
	}
}

