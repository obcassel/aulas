#include <stdio.h>

int soma (int x, int y) {
    return x + y;
}

int multiplicacao(int x, int y) {
    return x * y;
}

void mostra_resultado();

// Função principal
int main(void) {
    int x, y, res;    
    x = 10;
    y = 25;
    res = soma(x, y);
    mostra_resultado(res);

    mostra_resultado(multiplicacao(x,y));
    return 0;
}

void mostra_resultado(int resultado) {
    printf("--------------------\n");
    printf("|| Resultado: %d ||\n", resultado);
    printf("--------------------\n");
}

