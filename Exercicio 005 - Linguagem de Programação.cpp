#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3;
	float media = 0;
	int op;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Escolha a opção: \n1- aritmética; \n2- ponderada. \n");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			media = (n1 + n2 + n3)/3;
			break;
		case 2:
			media = ((n1*5) + (n2*4) + (n3*3))/12;
			break;
		default:
			printf("Ocorreu algum erro com seus numeros digitados \n");
	}
	
	printf("Sua média é: %.2f", media);
}
