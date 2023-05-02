#include <stdio.h>
#define MAX 8

// Insere um dado
void push(int elemento, int pilha[], int *topo) {
	if(*topo == MAX) {
	    // Fila cheia (Tratamento)
	} else {
	    pilha[*topo] = elemento; 		
	    (*topo)++;
	}
}

// Retorna o ultimo dado
int pop(int pilha[], int *topo) {
	if ( *topo > 0 ) {
		(*topo)--;
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
  
  printf("%d \n", ultimo);
  
   for(int x=0; x < topo; x++) {
		printf("%d ", pilha[x]);
	}
}