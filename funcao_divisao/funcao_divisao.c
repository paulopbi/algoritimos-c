#include <stdio.h>
#include <stdlib.h>

float divisao(float n1, float n2){
	float total;
	total = n1 / n2;
	
	return(total);
 }
	

int main() {
	float num1, num2, resposta;
	system("cls");
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	resposta = divisao(num1, num2);
	
	printf("A divisao e igual a %.2f\n", resposta);
		
	return 0;
}