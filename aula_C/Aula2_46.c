
#include <stdio.h>

int soma(int a[], int tamanho) {
	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma = soma + a[i];
	}
	return soma;
}

int main() {
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int s;
	s = soma(vetor, 10);
	printf("%d \n", s);
	return 0;
}


