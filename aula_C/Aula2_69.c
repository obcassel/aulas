#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
	char nome[50];
	char email[50];
	int idade;
};

void printPessoa(struct Pessoa x){
	printf("Nome: %s\n", x.nome);
	printf("Email: %s\n", x.email);	
	printf("Idade: %d\n", x.idade);
}

int main () {
	Pessoa pes;
    strcpy(pes.nome, "João");
    strcpy(pes.email, "joaozinho@email.com");
	pes.idade = 26;
	
	printPessoa(pes);
	
    return 0;
}


#include <stdio.h>
#include <string.h>

union Data {
	int x;
	float y;
	char c[20];
};



#include <stdio.h>

int main(void) {
	int vetor[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p;
	// Aponta para o array
	p = vetor;
	printf("\nO terceiro elemento do vetor e: %d", p[2]);
	// Desloca pelo array
	p++;
	printf("\nO segundo elemento do vetor e: %d", *p);
}





