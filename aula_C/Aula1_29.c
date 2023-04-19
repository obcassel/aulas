#include <stdio.h>

int calc(int n)  {                                          
    int i, x1 = 1, x2 = 1, soma;         
    for (i = 3; i <= n; i = i + 1) {  
        soma = x1 + x2;                    
        x1 = x2;                           
        x2 = soma;                           
    }                                        
    return x2;                             
}     

int main(void) {
    int n;
    scanf("%d", &n);

    if(n <= 0)
        printf("\nO número é inválido\n");

    printf("\nO resultado é %d\n", calc(n));
    return 0;
}

