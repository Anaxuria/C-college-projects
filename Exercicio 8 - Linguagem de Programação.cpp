#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int n10, idade, plus_90kg=0, idade_total=0;
    float peso, media_idades;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    for(n10=1; n10 < 10; n10++){
        if(peso > 90){
            plus_90kg++;
        }

        idade_total += idade;

         printf("Digite a idade: ");
        scanf("%i", &idade);

        printf("Digite o peso: ");
        scanf("%f", &peso);
    }

    media_idades = idade_total/10;

    printf("\nQuantidade de pessoas com mais de 90kg: %i", plus_90kg);
    printf("\nMedia das idades: %.2f", media_idades);
}