#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 

int main() {
	setlocale(LC_ALL, "portuguese"); 
	
	//exemplos da aula 5
	
	int vet[5] = {1,2,3,4,5};
	
	printf("Primeiro valor : %i",vet[0]);
	printf("\n Ultimo valor : %i", vet[4]);
	printf("\n Somando o segundo e o quarto elementos: %i",vet[1] + vet[3]);
	
	vet[2] = 27;
	printf("\n Mudamos o valor do terceiro elemento para: %i",vet[2]);
	
	return 0;
	
}
