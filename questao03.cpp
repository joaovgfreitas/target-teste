#include <stdio.h>

int main() {
    int indice = 12, soma = 0, k = 1;

    while (k < indice) {
        k++;
        soma = soma + k;
    }

    printf("O valor da soma eh: %i", soma);

    return 0;
}

