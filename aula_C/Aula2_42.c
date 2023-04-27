#include<stdio.h>

int main()
{
  float notas[5] = {8.5, 9.2, 9.7, 9.9, 8.6};
  
  printf("Exibindo os Valores do Vetor \n\n");
  for( i = 0 ; i <= 4; i++){
    printf("notas[%d] = %.1f\n",i, notas[i]);
  }
  return 0;
}