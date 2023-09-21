#include <stdio.h>
#include <locale.h>
#include <math.h>

// Fun��o para verificar se um n�mero � primo
int isPrime(int num) {
    if (num <= 1) {
        return 0; // N�meros menores ou iguais a 1 n�o s�o primos
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Encontrou um divisor, n�o � primo
        }
    }
    return 1; // � primo
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int qtdPrimos = 0;
    int somaMaiores10Multiplos5 = 0;
    int qtdEntre50e100 = 0;

    // Preencha o vetor com 10 n�meros inteiros
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &vetor[i]);

        if (isPrime(vetor[i])) {
            qtdPrimos++;
        }

        if (vetor[i] > 10 && vetor[i] % 5 == 0) {
            somaMaiores10Multiplos5 += vetor[i];
        }

        if (vetor[i] >= 50 && vetor[i] <= 100) {
            qtdEntre50e100++;
        }
    }

    // Mostre os resultados
    printf("Quantidade de n�meros primos: %d\n", qtdPrimos);
    printf("Soma de n�meros maiores que 10 e m�ltiplos de 5: %d\n", somaMaiores10Multiplos5);
    printf("Quantidade de n�meros entre 50 e 100: %d\n", qtdEntre50e100);

    return 0;
}

