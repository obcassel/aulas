#include <stdio.h>

int x = 25;
int y = 12;

int calc(int n)  {  
    return n + x;
}     

int main(void) {
    int result, y = 10;

    result = calc(y);
    
    printf("\nO resultado é %d\n", result);
    return 0;
}

