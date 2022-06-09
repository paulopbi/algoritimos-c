#include <stdio.h>
#include <stdlib.h>

int main () {
	
	/*
	Exercicio algoritimo
	
		Objetivo: Escreva um programa que leia um numero inteiro e apresente seu antecessor e seu sucessor	
	*/
	
	//Inicio do algoritimo
	
	int numero, antecessor, sucessor;
	
	printf("Escreva um numero inteiro (sem ponto ou virgula) \n");
	scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("o sucessor e: %d \n", sucessor);
	printf("o antecessor e: %d \n", antecessor);
	
	return 0;
}