#include  <stdio.h>

int main () {
    int x, y, z, res;
    x = 2;
    y = 3;
    z = 4;
    res = (x++) - (--y) + (z++);
    printf ("%d", ++res);
}
