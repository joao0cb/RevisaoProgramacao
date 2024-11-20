#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void inverterPosicao(int v[], int esq, int dir);

int main() {
    int v[TAM];
    srand(20);

    for(int i = 0; i < TAM; ++i) {
        v[i] = rand() % 100;
    }
    for(int i = 0; i < TAM; ++i) {
        printf("%d\t", v[i]);
    }
    printf("\n\n");

    inverterPosicao(v, 0, TAM-1);

    for(int i = 0; i < TAM; ++i) {
        printf("%d\t", v[i]);
    }
    printf("\n");

    return 0;
}

void inverterPosicao(int v[], int esq, int dir) {
    int t;
    if (esq >= dir) {
        return;
    }
    t = v[esq];
    v[esq] = v[dir];
    v[dir] = t;
    inverterPosicao(v, esq+1, dir-1);
}