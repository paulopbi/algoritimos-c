#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	Exercicio de algoritimo
	
		Objetivo: elabore um programa que leia nome, idade, altura e ano de nascimento!
	*/
	
	
	//Algoritimo abaixo
	
	int idade, ano;
	float altura;
	char nome [30];
	
	printf("\n Bem vindo ao meu algoritimo \n");
	printf("\n Digite as informacoes abaixo \n\n\n");
	
	printf("\n Informe o seu nome: ");
	scanf("%s", nome);  
	
	printf("\n Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("\n Informe sua altura: ");
	scanf("%f", &altura);
	
	ano = 2022 - idade;
	
	printf("\n O nome e: %s", nome);
	printf("\n A altura e: %.2f", altura);
	printf("\n A idade e: %d", idade);
	printf("\n O ano de nascimento e: %d", ano);
	
	return 0;
}