#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idades[10];
    int somaIdades = 0;
    int contador50Anos = 0;
    int contadorMenorMedia = 0;
    int contador30Anos = 0;

    // Receba as idades das 10 pessoas
    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        
        somaIdades += idades[i]; // Soma das idades para calcular a m�dia

        if (idades[i] > 50) {
            contador50Anos++;
        }

        if (idades[i] < somaIdades / (i + 1)) {
            contadorMenorMedia++;
        }

        if (idades[i] > 30) {
            contador30Anos++;
        }
    }

    float mediaIdades = (float)somaIdades / 10.0;
    float percentagem30Anos = (float)contador30Anos / 10.0 * 100.0;

    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", contador50Anos);
    printf("Media das idades: %.2f\n", mediaIdades);
    printf("Quantidade de pessoas com idade menor que a media: %d\n", contadorMenorMedia);
    printf("Percentagem de pessoas com idade superior a 30 anos: %.2f%%\n", percentagem30Anos);

    return 0;
}

