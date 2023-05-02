#include <stdio.h>
#define MAX 8

// Insere um dado
void inserir(int elemento, int fila[], int *ultimo) {
	if(*ultimo == MAX) {
        // Tratamento
	}
	fila[*ultimo] = elemento;
	(*ultimo)++;
}

// Remove um dado
int remover (int fila[], int *ultimo) {
    if(*ultimo == 0) {
        // Tratamento
    } else {
    	int val = fila[0];
    	for(int x=0; x < (*ultimo); x++) {
    		fila[x] = fila[x+1];
    	}
    	(*ultimo)--;
    	return val;
    }
}

// Função Principal
int main () {
  int fila[MAX], ultimo = 0;

  inserir(5, fila, &ultimo);
  inserir(10, fila, &ultimo);
  inserir(15, fila, &ultimo);

  //Imprime o primeiro valor
  printf("%d\n", remover(fila, &ultimo));

  // Imprime todos valores da fila
  for(int x=0; x<ultimo; x++) {
		printf("%d ", fila[x]);
	}

  return 0;
}