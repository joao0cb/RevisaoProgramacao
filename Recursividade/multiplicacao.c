#include <stdio.h>

int multiplicacao(int n, int x);

int main() {
    int n, x, result;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite outro numero: ");
    scanf("%d", &x);
    result = multiplicacao(n, x);
    printf("Resultado: %d x %d = %d\n", n, x, result);

    return 0;
}

int multiplicacao(int n, int x) {
    if(n ==0 || x == 0) {
        return 0;
    }

    return x + multiplicacao(n-1, x);
}