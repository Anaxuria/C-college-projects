#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("Insira um numero: \n");
	scanf("%i", &n);
	
	if ( n % 2 == 0) {
		printf("O numero é par \n");
	} else {
		printf("O numero é impar \n");
	}
	
	if (n < 0) {
		printf("O numero é negativo \n");
	} else {
		printf("O numero é positivo \n");
	}
	
	if ( n % 5 == 0) {
		printf("O numero é divisivel por 5 \n");
	} else { 
	printf("O numero não é divisivel por 5 \n");
	}
}
