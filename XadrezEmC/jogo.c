#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"

char T[8][8];

/* inicializa tabuleiro */
void init() {
    char p[8] = {'r','n','b','q','k','b','n','r'};
    char P[8] = {'R','N','B','Q','K','B','N','R'};

    for (int i = 0; i < 8; i++) {
        T[0][i] = p[i];
        T[1][i] = 'p';
        T[6][i] = 'P';
        T[7][i] = P[i];
    }

    for (int l = 2; l < 6; l++)
        for (int c = 0; c < 8; c++)
            T[l][c] = '.';
}

/* desenha tabuleiro */
void draw() {
    printf("\n  a b c d e f g h\n");
    for (int l = 0; l < 8; l++) {
        printf("%d ", 8 - l);
        for (int c = 0; c < 8; c++)
            printf("%c ", T[l][c]);
        printf("%d\n", 8 - l);
    }
}

/* jogada simples da cpu */
void cpu() {
    int l, c, nl, nc;

    while (1) {
        l = rand() % 8;
        c = rand() % 8;

        if (T[l][c] >= 'a' && T[l][c] <= 'z') {
            nl = l + (rand() % 3 - 1);
            nc = c + (rand() % 3 - 1);

            if (nl >= 0 && nl < 8 && nc >= 0 && nc < 8) {
                if (!(T[nl][nc] >= 'a' && T[nl][nc] <= 'z')) {
                    T[nl][nc] = T[l][c];
                    T[l][c] = '.';
                    break;
                }
            }
        }
    }
}

/* função principal do jogo */
void iniciarJogo() {

    char o[3], d[3];
    int ol, oc, dl, dc;

    srand(time(0));
    init();

    while (1) {
        draw();
        printf("\nJogada (ex: e2 e4) ou 0 para sair: ");
        scanf("%s", o);

        if (o[0] == '0') break;

        scanf("%s", d);

        oc = o[0] - 'a';
        ol = 8 - (o[1] - '0');
        dc = d[0] - 'a';
        dl = 8 - (d[1] - '0');

        if (ol < 0 || ol > 7 || oc < 0 || oc > 7 ||
            dl < 0 || dl > 7 || dc < 0 || dc > 7)
            continue;

        if (T[ol][oc] < 'A' || T[ol][oc] > 'Z')
            continue;

        T[dl][dc] = T[ol][oc];
        T[ol][oc] = '.';

        cpu();
    }
}
