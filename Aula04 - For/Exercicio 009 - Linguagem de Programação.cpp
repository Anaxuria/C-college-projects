#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

	int i, k, num, par=0, quant=0,soma=0, div=0;

	for(i=0;i<5;i++){
		printf("\nDigite um numero: ");
		scanf("%i", &num);

		if(num % 2 == 0){
			par+= num;
		}

		if(num < 10){
			quant++;
		}

		//encontrar numero primos 
		for(k=1;k<=num;k++){
			if(num % k == 0){
				div++;
			}
		}
		if(div == 2){
			soma+= num;
		}
	}
	printf("\nSoma dos numeros pares: %i", par);
	printf("\nSoma dos numeros primos: %i", par);
	printf("\nQuantidade de numeros inferiores a 10: %i", par);
}