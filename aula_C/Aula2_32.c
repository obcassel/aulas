#include <stdio.h>

int main () {
	int count = 0;
	int x = 0;
	do {
		for(int y=0; y < 8; y=y+2)
			count++;
		x = x + count;
	} while(x < 10);
     printf("Valor final: %d")
  return 0;
}


