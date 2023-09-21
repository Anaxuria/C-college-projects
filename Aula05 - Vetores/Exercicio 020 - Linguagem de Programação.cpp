#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetorA[10];
    float vetorB[10];

    // Ler os 10 números e preencher o vetorA
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] / 2.0; // Preencher vetorB com a metade de vetorA
    }

    // Ordenar o vetorA em ordem decrescente
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetorA[i] < vetorA[j]) {
                // Trocar os elementos de posição
                int temp = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = temp;
            }
        }
    }

    // Ordenar o vetorB em ordem crescente
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetorB[i] > vetorB[j]) {
                // Trocar os elementos de posição
                float temp = vetorB[i];
                vetorB[i] = vetorB[j];
                vetorB[j] = temp;
            }
        }
    }

    // Exibir vetorA em ordem decrescente
    printf("Vetor A em ordem decrescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorA[i]);
    }
    printf("\n");

    // Exibir vetorB em ordem crescente
    printf("Vetor B em ordem crescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetorB[i]);
    }
    printf("\n");

    return 0;
}

