#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int n10, idade, mai_idade=0, men_idade=9999;
    float media, total=0;

    printf("Digite a idade: ");
    scanf("%i", &idade);

	for(n10=1; n10 <10; n10++){
		
		if(idade > mai_idade){
			mai_idade = idade;
		}	
		
		if(idade < men_idade){
			men_idade = idade;
		}
		
		total += idade;
		
		printf("Digite a idade: ");
    	scanf("%i", &idade);
	}
	
	total += idade;
	media = total/10;
	
	printf("\nA maior idade é: %i", mai_idade);
	printf("\nA menor idade é: %i", men_idade);
    printf("\nA media das idades é: %.2f", media);
}
