#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	struct no *esq;
	struct no *dir;
	int valor;
}no;

void inserirNo(no **raiz, int elemento){
	if(*raiz == NULL) {
    	no *aux = (no *)malloc(sizeof(no));
    	aux->valor = elemento;
    	aux->dir = aux->esq = NULL;
    	*raiz = aux;
    	printf("Elemento %d foi inserido com sucesso.\n", elemento);
    	return;
	}
	// Percorre árvore da esquerda
	if(elemento < (*raiz)->valor) {
    	inserirNo(&(*raiz)->esq, elemento);
    	return;
	}
	// Percorre árvore da direita
	if(elemento > (*raiz)->valor) {
    	inserirNo(&(*raiz)->dir, elemento);
    	return;
	}	
	printf("Elemento %d ja existe na arvore.\n",elemento);
}

no *DoisFilhos(no *root){
    	if(root == NULL)
        	return NULL;
    	else if(root->esq == NULL)
            	return root;
    	else
        	return DoisFilhos(root->esq);
}

void removerNo(no **raiz, int elemento){

	if((*raiz) != NULL){
            if(elemento > (*raiz)->valor)
                removerNo(&(*raiz)->dir, elemento);

            else if(elemento < (*raiz)->valor )
                removerNo(&(*raiz)->esq, elemento);

            else if((*raiz)->valor == elemento){
                    if(((*raiz)->dir != NULL) && ((*raiz)->esq != NULL)){
                        no *aux = NULL;
                        aux = DoisFilhos((*raiz)->dir);
                        (*raiz)->valor = aux->valor;
                        removerNo(&(*raiz)->esq, aux->valor);
                    }
                    else{
                        no *aux = (*raiz);
                        if((*raiz)->dir == NULL)
                            *raiz = (*raiz)->esq;
                        else
                            *raiz = (*raiz)->dir;
                        free(aux);
                    }
            }
	}
}

void pesquisaOrdemSimetrica(no *raiz){
	if(raiz == NULL)
    	return;
	pesquisaOrdemSimetrica(raiz->esq);
	printf("%d\n",raiz->valor);
	pesquisaOrdemSimetrica(raiz->dir);
}

void pesquisaPosOrdem(no *raiz){
	if(raiz == NULL)
    	return;
	pesquisaPosOrdem(raiz->esq);
	pesquisaPosOrdem(raiz->dir);
	printf("%d\n",raiz->valor);
}

void pesquisaPreOrdem(no *raiz){
	if(raiz == NULL)
    	return;
	printf("%d\n",raiz->valor);
	pesquisaPreOrdem(raiz->esq);
	pesquisaPreOrdem(raiz->dir);
}

	no *busca(no *raiz, int elem) {
		if(raiz == NULL)
			return;		
		if(raiz->valor == elem) {
			return raiz;
		}
		else if (raiz->valor > elem) {		
			busca(raiz->esq, elem);
		} 
		else {
			busca(raiz->dir, elem);
		}
	}

int main(){
	no *raiz = NULL;

	inserirNo(&raiz,5);
	inserirNo(&raiz,7);
	inserirNo(&raiz,1);
	inserirNo(&raiz,2);
	inserirNo(&raiz,6);
	inserirNo(&raiz,4);
	inserirNo(&raiz,3);
	inserirNo(&raiz,10);
	inserirNo(&raiz,9);
	inserirNo(&raiz,8);

    pesquisaPreOrdem(raiz);
    printf("\n---\n");
    removerNo(&raiz, 2);

	pesquisaPreOrdem(raiz);

	return 0;
}
