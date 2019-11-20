#include <stdio.h>
#include <stdlib.h>

void QuickSort(int* vetor, int inicio, int fim){
    if(inicio < fim){
        int pivo = separar(vetor, inicio, fim);
        QuickSort(vetor, inicio, pivo-1);
        QuickSort(vetor, pivo+1, fim);
    }
}

int separar(int* vetor, int inicio, int fim){
    int i = inicio-1;
    int pivo = vetor[fim];
    int j, aux;

    for(j = inicio; j < fim; j++){
        if(vetor[j] < pivo){
            i++;
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
    aux = vetor[i+1];
    vetor[i+1] = vetor[fim];
    vetor[fim] = aux;
    return i+1;
}

int main(){

    int vetor[] = {6, 3, 4, 5, 2, 7, 1, 9, 8, 0};
    int tam = 10;
    QuickSort(vetor, 0, tam-1);

    int k;
    for(k = 0; k < tam-1; k++){
        printf("%d ", vetor[k]);
    }
}
