#include <stdio.h>
// Variável Global
int var_global = 10;

void funcao()  {  
    printf("Resultado: %d\n", var_global);
}     

int main(void) {
    // Variável Local
    int var_local;  

    funcao();   

    var_local = var_global + 2;  

    printf("Resultado: %d\n", var_local);

    var_global = var_local + 3;

    funcao();
    
    return 0;
}

