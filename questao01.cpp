#include <stdio.h>

int Fibonacci(int n) {
    int a = 0, b = 1, c;
    
    if (n == a || n == b) 
		return 1;
		
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
        
        if (b == n) 
			return 1;			
    }
    
    return 0;
}

int main() {
    int numero;
    printf("Informe um numero: ");
    scanf("%i", &numero);

    if (Fibonacci(numero)) {
        printf(" %i pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf(" %i nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
