#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    int *vet;

    printf("Digite o n: ");
    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    printf("Digite n numeros: \n");
    for(i=0;i<n; i++){
    scanf("%d", &vet[i]);
    }


    printf("Os numeros digitados: \n");
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }

    printf("\nOs numeros digitados invertidos: \n");
    for(i=n-1; i>=0; i--){
        printf("%d ", vet[i]);
    }

    free(vet);

    return 0;
}
