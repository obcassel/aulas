#include <stdio.h>
int main() {
	int matriz[3][5];
	// PREENCHENDO
	for(int L=0; L<3; L++){
		for(int C=0; C<5; C++){
			matriz[L][C] = L+C;
		}
	}
	// MOSTRANDO
	for(int L=0; L<3; L++){
		for(int C=0; C<5; C++){
			printf("%d, ", matriz[L][C]);
		}
		printf("\n");
	}
	return 0;
}

