#include <stdio.h>
#include <stdlib.h>

struct _no{
    int x;
    struct _no *ant;
};
typedef struct _no Pilha;

// Insere um dado
Pilha *push(Pilha *p, int elem){
    Pilha *Anterior, *Novo;
	// Pilha Vazia
    if(p == NULL) {
		p = (Pilha*)malloc(sizeof(Pilha));
		p->x = elem;
		p->ant = NULL;
		return p;
    }
    else {
        Anterior = p;
        Novo = (Pilha*)malloc(sizeof(Pilha));
        Novo->x = elem;
        Novo->ant = Anterior;
        return Novo;
    }
}

int pop (Pilha **p) {
    Pilha *Anterior;
    int val = 0;
    
    if(p != NULL) {
        Anterior = (*p)->ant;
        val = (*p)->x;
		free(*p);
        (*p) = Anterior;
       return val;
    }
}

void mostra(Pilha *l) {
    Pilha *Atual;
    
    Atual = l;
    while(Atual != NULL) {
        printf("\n%d", Atual->x);
        Atual = Atual->ant;
    }
    printf("\n---");
}

// Função Principal
int main () {
	Pilha *p = NULL;
	
    p = push(p, 2);
    p = push(p, 4);
    p = push(p, 5);
    p = push(p, 6);
    p = push(p, 8);
	
    mostra(p);
    
    int val = pop(&p);
    
    mostra(p);
}
