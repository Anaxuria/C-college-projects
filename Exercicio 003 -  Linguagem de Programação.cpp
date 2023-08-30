#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float sal, alm, tot;
	
	printf("Digite o valor do salário: \n");
	scanf("%f", &sal);
	
	if (sal <= 280) {
		printf("Recebeu um aumento de 20% \n");
		tot = sal + (sal * 0.2);
	} else if (sal <= 700) {
		printf("Recebeu um aumento de 15% \n");
		tot = sal  + (sal * 0.15);
	} else if ( sal <= 1500) {
		printf("Recebeu um aumento de 10% \n");
		tot = sal  + (sal * 0.1);
	} else if ( sal > 1500) {
		printf("Recebeu um aumento de 5% \n");
		tot = sal  + (sal * 0.05);
	}
	
	printf("O valor do seu salario era: %.2f \n", sal);
	printf("O valor do seu aumento foi: %.2f \n", tot - sal);
	printf("O valor do seu salario com o aumento é: %.2f \n", tot);
}

