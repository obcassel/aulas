#include <stdio.h>

int recursiva (int x) {
	// Teste de parada
	if(x == 0)
		return x;
	// Chamada recursiva
	return x + recursiva(x-1); 
}

int main() {
	int num = 5;
	int resp;
	
	resp = recursiva(num);
	printf("%d", resp);
	return 0;
}