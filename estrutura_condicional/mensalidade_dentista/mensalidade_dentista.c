#include <stdio.h>
#include <stdlib.h>

int main () {

	int idade;
	char nome [30];
	
	printf("Bem vindo ao programa de mensalidade da clinica: +Dentistas \n \n");
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade == 18 || idade < 18){
		printf("\nOla %s, voce tem %d anos, o valor da sua mensalidade e: R$ 50,00", nome, idade);
	} else if (idade >= 19 && idade <= 29){
		printf("\nOla %s, voce tem %d anos, o valor da sua mensalidade e: R$ 70,00", nome, idade);
	} else if (idade >= 30 && idade <= 45){
		printf("\nOla %s, voce tem %d anos, o valor da sua mensalidade e: R$ 90,00", nome, idade);
	} else if (idade >= 46 && idade <= 65) {
		printf("\nOla %s, voce tem %d anos, o valor da sua mensalidade e: R$ 130,00", nome, idade);
	} else {
		printf("\nOla %s, voce tem %d anos, o valor da sua mensalidade e: R$ 170,00", nome, idade);
	}
	
	return 0;
}