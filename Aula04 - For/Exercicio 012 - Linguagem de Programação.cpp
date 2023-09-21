#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int k, num, soma;
	
	printf("\nDigite o numero: ");
	scanf("%d", &num);
	
	if (num > 0){
		while (num > 0 ){
		soma=0;
		for(k=1;k<num;k++){
		if (num %k == 0){
			soma+=k;
			}
		}
		
		if (soma == num){
			printf("\nO numero eh perfeito!\n");
		} else {
			printf("\nO numero nao eh perfeito!\n");
			}
		printf("\nDigite o numero ou digite 0 para terminar o programa: ");
		scanf("%d", &num);	
		}
	} else {
		printf("Numeros negativos nao sao reconhecidos");
	}
}

