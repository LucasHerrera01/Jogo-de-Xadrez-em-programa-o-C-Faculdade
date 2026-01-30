#include <stdio.h>
#include "jogo.h"

int main() {

    int opcao;

    while (1) {
        printf("\n===== MENU XADREZ =====\n");
        printf("1 - Jogar\n");
        printf("2 - Sobre\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            iniciarJogo();
        }
        else if (opcao == 2) {
            printf("\nXadrez em C\nProjeto educacional\n");
        }
        else if (opcao == 0) {
            break;
        }
    }

    return 0;
}
