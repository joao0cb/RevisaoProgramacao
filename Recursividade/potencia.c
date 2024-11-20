#include <stdio.h>

int potencia(int a, int n);

int main() {
    int a, n, result;
    printf("Digite a base: ");
    scanf("%d", &a);
    printf("Digite a potencia: ");
    scanf("%d", &n);
    result = potencia(a, n);
    printf("Resultado: %d^%d = %d\n", a, n, result);
}

int potencia(int a, int n) {
    if(n == 0) {
        return 1;
    }

    return a * potencia(a, n-1);
}