#include <stdio.h>
void teste(int a[]) {
	a[5] = 10;
}

int main() {
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d \n", vetor[5]);
	teste(vetor);
	printf("%d \n", vetor[5]);
	
	return 0;
}

