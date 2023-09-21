#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor1[10];
    int vetor2[10];

    // Preencha o vetor1 com 10 números inteiros
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Monte o vetor2 com base no vetor1
    for (int i = 0; i < 10; i++) {
        if (vetor1[i] < 10) {
            vetor2[i] = 0;
        } else {
            vetor2[i] = 1;
        }
    }

    // Exiba o vetor1
    printf("Vetor1: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    // Exiba o vetor2
    printf("Vetor2: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}

