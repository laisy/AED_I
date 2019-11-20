#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int* vetor, int tamanho){
    int i, j, chave;
    for(i=1; i<tamanho; i++){
        chave = vetor[i];
        for(j=i-1; j>=0 && vetor[j]>chave; j--){
            vetor[j+1] = vetor[j];
        }
        vetor[j+1] = chave;
    }

}

void printarVetor(int vetor[], int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int main()
{   int vetor[] = {2, 10, 7, 1, 5, 12};
    int tamanho = 6;

    InsertionSort(vetor, tamanho);

    printarVetor(vetor, tamanho);


    return 0;
}
