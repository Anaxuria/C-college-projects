#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

    int n10=1, idade, plus_2k=0, m_idade=0;
    float salario, plus_5k=0, m_salario=0, plus_40y=0, s_40y=0, media_40y;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    while(n10 < 10){

        if(salario > 5000){
            plus_5k++;
        }

        if(salario > 2000){
            plus_2k++;
        }

        if(idade >= 40){
            plus_40y++;
            s_40y += salario;
        }

        if(idade > m_idade){
            m_idade = idade;
            m_salario = salario;
        }

        printf("Digite a idade: ");
        scanf("%i", &idade);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        n10++;
    }

    media_40y = s_40y/plus_40y;

    printf("\nA media de quantas pessoas ganham mais de 5 mil eh: %.2f", plus_5k/10);
    printf("\nA quantidade de pessoas que ganham mais de 2 mil eh: %.2i", plus_2k);
    printf("\nA media de salario das pessoas acima de 40 anos eh: %.2f", media_40y);
    printf("\nA maior idade eh %.i", m_idade);
    printf(" e seu salario eh de %.2f", m_salario);
}