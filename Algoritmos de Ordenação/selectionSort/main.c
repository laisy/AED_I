#include <stdio.h>
#include <stdlib.h>

void selectionSort(int vet[], int tam){
    int i, j, menor, aux;

    for(i=0; i<tam; i++){
        menor = i;
        for(j=i+1; j<tam; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            }
        }
        if(i != menor){
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }

}
int main()
{
    int tam = 6, vet[] = {9,5,6,2,7,1}, k;

    for(k=0; k<tam; k++){
        printf("%d \n", vet[k]);
    }

    selectionSort(vet, tam);

    printf("\n");
    for(k=0; k<tam; k++){
        printf("%d \n", vet[k]);
    }

    return 0;
}
