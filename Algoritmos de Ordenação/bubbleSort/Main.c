#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int vet[], int tam){

    int i, j, aux, flag;

    for(i=0; i<tam; i++){
        flag = 0;
        for(j=0; j<tam-1-i; j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1]= aux;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main()
{
    int tam = 10, vet[] = {4,9,5,6,2,7,1,10,8,11}, k;

    for(k=0; k<tam; k++){
        printf("%d \n", vet[k]);
    }

    bubbleSort(vet, tam);

    printf("\n");
    for(k=0; k<tam; k++){
        printf("%d \n", vet[k]);
    }

    return 0;
}
