#include <stdio.h>
#include <stdlib.h>
#include "MergeSort.h"
#include <time.h>

int main()
{
    int tamanho = 300;
    int vetor[tamanho];
    int i;

    for(i=0; i<300; i++){
        vetor[i] = tamanho;
        tamanho--;
    }

    tamanho = 300;
    clock_t begin = clock();
    MergeSort(vetor, 0, tamanho-1);
    clock_t end = clock();
    double tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 300: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 3000;
    int vetor2[tamanho];

    for(i=0; i<3000; i++){
        vetor2[i] = tamanho;
        tamanho--;
    }

    tamanho = 3000;
    begin = clock();
    MergeSort(vetor2, 0, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 3000: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 30000;
    int vetor3[tamanho];

    for(i=0; i<30000; i++){
        vetor3[i] = tamanho;
        tamanho--;
    }

    tamanho = 30000;
    begin = clock();
    MergeSort(vetor3, 0, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 30000: %f \n", tempo);
    printf("\n");


    return 0;
}
