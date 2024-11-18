#include <stdio.h> 

int divisaoRecursiva(int num, int  div);

int main() {
    int num, div;
    printf("Qual número você quer dividir? ");
    scanf("%d", &num);
    printf("Por quanto? ");
    scanf("%d", &div);
    int result = divisaoRecursiva(num, div);
    printf("Resultado: %d\n", result);
}

int divisaoRecursiva(int num, int  div) {
    if(num < div) {
        return 0;
    }

    return 1 + divisaoRecursiva(num-div, div);
}