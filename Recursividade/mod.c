#include <stdio.h>

int mod(int x, int y);

int main() {
    int x, y, result;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    result = mod(x, y);

    printf("MOD(%d, %d) = %d", x, y, result);

    return 0;
}

int mod(int x, int y) {
    if(x == y) {
        return 0;
    }
    if(x < y) {
        return x;
    }

    return mod(x-y, y);
}