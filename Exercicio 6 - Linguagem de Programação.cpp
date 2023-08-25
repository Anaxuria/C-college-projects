#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int num, soma3=0, media=0, quant=0, cont2=0, mnum; 
	
	printf("Digite um numero maior que 0: ");
	scanf("%i", &num);
	
	if( num <= 0){
		printf("Aceitamos apenas numeros positivos.");
	} else {
		while(num > 0) {
		
		if (num % 3 == 0) {
			soma3+= num;
		}
		
		if (num % 2 == 0) {
			cont2++;
			media+=num;
		}
		
		if (num < mnum){
			mnum = num;
		}
		
		if (num > 50 && num % 5 == 0) {
			quant++;
		}
		
		printf("\nDigite 0 para terminar o programa: ");
		scanf("%i", &num);
		}
		
		printf("\nA soma dos numeros multiplos de 3 �: %.2i", soma3);
	
		if(media > 0){
			printf("\nA media dos numeros pares �: %.2i", media/cont2);
		} else {
			printf("\nN�o teve numeros pares para fazer a m�dia.");
		}
		
		printf("\nO menor numero digitado �: %.2i", mnum);
	
		printf("\nA quantidade dos numeros multiplos de 5 e maior que 50 �: %.2i", quant);
	}	
}
