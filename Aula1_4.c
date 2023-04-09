#include <stdio.h>
#include <stdlib.h>

// Função soma
int soma (int x, int y) {
    int resultado = x + y;
    return resultado;
}

// Função principal
int main() {
    const int x = 2;
    int y = 1;

    y = soma(x, y);

    if (y > 6) {
        printf("O resultado é %d", y);
    } else {
        while (y <= 5) {
            y++;
        }
        printf("O resultado é %d", y);
    }
    
    return 0;
}



