#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1;

    printf("Digite o numero: ");
    scanf("%d", &n);

    printf("Os divisores sao: ");
    while(n>=i){
        if (n % i == 0){
            printf("%d \t", i);
        }
        i++;
    }

    return 0;
}
