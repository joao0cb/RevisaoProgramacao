// Encontrar maior valor no vetor de forma recursiva

#include <stdio.h>

#define TAM 30

int encontrarValorVetorRecursivo(int v[], int u);

int main() {
    srand(22);
    int v[TAM], i = 0;
    for(int i = 0; i < TAM; ++i) {
        v[i] = rand() % 100;
    }

    for(int i = 0; i < TAM; ++i) {
        printf("%d  ", v[i]);
    }

    int valor = encontrarValorVetorRecursivo(v, TAM);
    printf("\n\nMaior valor: %d\n\n", valor);

    return 0;
}

int encontrarValorVetorRecursivo(int v[], int u) {
    if(u == 1) {
        return v[0];
    }
    int resp = encontrarValorVetorRecursivo(v, u-1);
    if(v[u-1] > resp) {
        return v[u-1];
    }
    return resp;
}