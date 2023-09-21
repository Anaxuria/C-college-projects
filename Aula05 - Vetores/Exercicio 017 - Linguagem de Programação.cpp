#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float vetor[10];
    float soma = 0.0, maior, menor;

    // Preencha o vetor com 10 n�meros float
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%f", &vetor[i]);

        // Se for o primeiro n�mero, defina-o como o maior e o menor
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            // Verifique se � maior ou menor
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }

        soma += vetor[i];
    }

    // Calcule a m�dia dos n�meros
    float media = soma / 10;

    // Mostre os resultados
    printf("Media dos numeros: %.2f\n", media);
    printf("Maior numero: %.2f\n", maior);
    printf("Menor numero: %.2f\n", menor);

    return 0;
}

