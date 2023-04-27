#include <stdio.h>

int fibonacci (int i) {
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    return fibonacci (i - 1) + fibonacci (i - 2);
}

int main () {
    int numero;
    
    printf ("Digite o numero que deseja calcular: ");
    scanf ("%d", &numero);
  
    for (int i = 1; i <= numero; i++) {
      printf ("Elemento %d: %d\t\n", i, fibonacci (i));
    }   
    return 0;
}


