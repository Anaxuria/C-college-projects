#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade, contador50Anos = 0, contadorPesoMenor40 = 0, contadorIdades1020 = 0;
    float altura, peso, somaAlturas1020 = 0.0, somaPesosMenor40 = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite a altura (em metros) da pessoa %d: ", i + 1);
        scanf("%f", &altura);

        printf("Digite o peso (em quilos) da pessoa %d: ", i + 1);
        scanf("%f", &peso);

        if (idade > 50) {
            contador50Anos++;
        }

        if (idade >= 10 && idade <= 20) {
            somaAlturas1020 += altura;
            contadorIdades1020++;
        }

        if (peso < 40) {
            contadorPesoMenor40++;
        }
    }

    float mediaAlturas1020 = 0.0;
    if (contadorIdades1020 > 0) {
        mediaAlturas1020 = somaAlturas1020 / contadorIdades1020;
    }

    float percentagemPesoMenor40 = (float)contadorPesoMenor40 / 10.0 * 100.0;

    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", contador50Anos);
    printf("Média das alturas das pessoas com idades entre 10 e 20 anos: %.2f metros\n", mediaAlturas1020);
    printf("Percentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", percentagemPesoMenor40);

    return 0;
}

