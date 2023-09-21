#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	float tot = 0;
	char calc;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("\nDigite o operador que deseja: (+ , - , x , /) ");
	scanf("%s", &calc);
	
	printf("\nDigite o segundo numero: ");
	scanf("%f", &n2);
	
	switch(calc){
		case '+':
			tot = n1 + n2;
			break;
		case '-':
			tot = n1 - n2;
			break;
		case 'x':
			tot = n1 * n2;
			break;
		case '/':
			tot= n1/n2;
			break;
		default:
			printf("\nOperador não reconhecido \n");
	}
	
	printf("\nO seu resultado é: %.2f", tot);
}
