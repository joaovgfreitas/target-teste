#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int cont = 0;
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            cont++;
        }
    }

    if (cont > 0) {
        printf("\nA letra a aparece %d vezes.", cont);
    } else {
        printf("\nA letra a nao foi encontrada.");
    }

    return 0;
}

