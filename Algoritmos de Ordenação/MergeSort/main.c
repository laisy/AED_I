#include <stdio.h>
#include <stdlib.h>

void Merge(int *vetor, int inicio, int meio, int fim){
    int i, j, k;
    int tamanho1 = meio - inicio + 1;
    int tamanho2 = fim - meio;
    int vetor1[tamanho1+1];
    int vetor2[tamanho2+1];

    for(i = 0; i < tamanho1; i++){
        vetor1[i] = vetor[inicio + i];
    }
    for(j = 0; j < tamanho2; j++){
        vetor2[j] = vetor[meio + 1 + j];
    }
    vetor1[tamanho1] = 999999999;
    vetor2[tamanho2] = 999999999;

    k = inicio;
    i = 0;
    j = 0;
    while(k <= fim){
        if(vetor1[i] <= vetor2[j]){
            vetor[k] = vetor1[i];
            i++;
        }
        else{
            vetor[k] = vetor2[j];
            j++;
        }
        k++;
    }
}

void MergeSort(int *vetor, int inicio, int fim){
    if(inicio < fim){
        int meio = (inicio + fim)/2;
        MergeSort(vetor, inicio, meio);
        MergeSort(vetor, meio+1, fim);
        Merge(vetor, inicio, meio, fim);
    }
}

int main()
{

    int vetor[] = {10, 15, 2, 3, 8, 50};
    int tamanho = 6;
    MergeSort(vetor, 0, tamanho-1);
    int i;
    for(i = 0; i < tamanho; i++){
        printf("%d ",vetor[i]);
    }
    return 0;
}
