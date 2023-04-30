#include <stdio.h>
#define MAX 7

// Insere um dado
void push(int elemento, int pilha[], int *topo) {
	if ( *topo == MAX) {
		//Pilha Cheia (tratamento)
	} else {
		*topo++;
		pilha[*topo] = elemento;
	}
}

// Retorna o ultimo dado
int pop(int pilha[], int *topo) {
	if ( *topo > 0 ) {
		*topo--;
	}
	return pilha[*topo];
}
// Função Principal
int main () {
  int pilha[MAX], topo = 0;
  int ultimo;
  
  push(10, pilha, &topo);
  push(4, pilha, &topo);
  push(3, pilha, &topo);
  push(2, pilha, &topo);
  push(11, pilha, &topo);
  
  ultimo = pop(pilha, &topo);
  
  printf("%d", ultimo);
}