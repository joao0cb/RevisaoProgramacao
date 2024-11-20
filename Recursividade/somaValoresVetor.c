#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int somaVetor(int v[], int n);

int main() {
    srand(22);
    int v[TAM], result;
    for(int i = 0; i < TAM; ++i) {
        v[i] = rand() % 100;
    }

    for(int i = 0; i < TAM; ++i) {
        printf("%d\t", v[i]);
    }
    printf("\n\n");

    result = somaVetor(v, TAM);
    printf("Soma dos valores do vetor: %d", result);

    return 0;
}

int somaVetor(int v[], int n) {
    if(n == 0) {
        return 0;
    }

    return v[n-1] + somaVetor(v, n-1);
}