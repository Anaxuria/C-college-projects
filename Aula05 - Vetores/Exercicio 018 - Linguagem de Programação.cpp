#include <stdio.h>
#include <locale.h>
#include <math.h>

// Função para verificar se um número é primo
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Encontrou um divisor, não é primo
        }
    }
    return 1; // É primo
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[10];
    int qtdPrimos = 0;
    int somaMaiores10Multiplos5 = 0;
    int qtdEntre50e100 = 0;

    // Preencha o vetor com 10 números inteiros
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
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
    printf("Quantidade de números primos: %d\n", qtdPrimos);
    printf("Soma de números maiores que 10 e múltiplos de 5: %d\n", somaMaiores10Multiplos5);
    printf("Quantidade de números entre 50 e 100: %d\n", qtdEntre50e100);

    return 0;
}

