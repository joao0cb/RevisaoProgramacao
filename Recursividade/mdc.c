#include <stdio.h>

int mdc(int x, int y);

int main() {
    int x, y, result;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    result = mdc(x, y);

    printf("MDC(%d, %d) = %d", x, y, result);

    return 0;
}

int mdc(int x, int y) {
    if(x == y) {
        return x;
    }
    if(y > x) {
        return mdc(y, x);
    }

    return mdc(x-y, y);
}