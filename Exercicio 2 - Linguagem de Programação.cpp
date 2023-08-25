#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float val, valdes, des;
	
	printf("Digite o valor total da compra \n");
	scanf("%f", &val);
	
	if (val <= 30) {
		printf("N�o recebe desconto \n");
		valdes = 0;
	} else if (val <= 100) {
		printf("recebeu cinco porcento de desconto!! \n");
		valdes = val  * 0.05;
	} else if ( val <= 250) {
		printf("recebeu dez porcento de desconto!! \n");
		valdes = val * 0.10;
	} else if ( val > 250) {
		printf("recebeu quinze porcento de desconto!! \n");
		valdes = val * 0.15;
	}
	
	des = val - valdes;
	
	printf("O valor total da sua compra �: %.2f \n", val);
	printf("O valor da sua compra com desconto �: %.2f \n", valdes);
	printf("O valor do desconto �: %.2f \n", des);

}

