#include <stdio.h>
#include <conio.h>

double fatorial(int n)
{
  if ( n <= 1 ) {
    return 1;
  }
  return n * fatorial(n - 1);
}

int main(void) {
  int numero;
  double f;
  
  printf("Digite o numero que deseja calcular o fatorial: ");
  scanf("%d",&numero);
  
  f = fatorial(numero);
  printf("Fatorial de %d = %.0lf",numero,f);
 
  return 0;
}


