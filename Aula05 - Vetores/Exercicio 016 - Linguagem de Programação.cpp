#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomes[15][50]; // Uma matriz de strings para armazenar os nomes
    char pesquisa[50];

    // Ler 15 nomes
    printf("Digite 15 nomes de pessoas:\n");
    for (int i = 0; i < 15; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    // Começar a pesquisa
    while (1) {
        printf("Digite um nome para pesquisa (ou 'FIM' para encerrar): ");
        scanf("%s", pesquisa);

        // Verificar se o nome é "FIM" para encerrar
        if (strcmp(pesquisa, "FIM") == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        // Realizar a pesquisa
        int encontrado = 0;
        for (int i = 0; i < 15; i++) {
            if (strcmp(pesquisa, nomes[i]) == 0) {
                printf("O nome '%s' foi encontrado na posição %d.\n", pesquisa, i + 1);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("O nome '%s' não foi encontrado na lista.\n", pesquisa);
        }
    }

    return 0;
}

