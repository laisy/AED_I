#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int* p;
    int* q;

    x = 2;
    y = 8;

    p = &x;     //p é igual ao endereço de memoria de x.
    q = &y;

    printf("O endereço de x: %d e o valor de x: %d \n", p, x);
    printf("O valor de p: %d e o valor de *p: %d \n", p, *p);

    printf("O endereço de y: %d e o valor de y: %d \n", q, y);
    printf("O valor de q: %d e o valor de *q: %d \n", q, *q);

    printf("O endereço de p: %d \n", &p);
    printf("O endereço de q: %d \n", &q);


    return 0;
}
