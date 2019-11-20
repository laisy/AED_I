#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "MergeSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"

int main()
{
    printf("-----------------------MERGESORT--------------------\n");
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

    printf("-----------------------BUBBLESORT--------------------\n");

    tamanho = 300;
    int vetor4[tamanho];

    for(i=0; i<300; i++){
        vetor4[i] = tamanho;
        tamanho--;
    }

    tamanho = 300;
    begin = clock();
    bubbleSort(vetor4, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 300: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 3000;
    int vetor5[tamanho];

    for(i=0; i<3000; i++){
        vetor5[i] = tamanho;
        tamanho--;
    }

    tamanho = 3000;
    begin = clock();
    bubbleSort(vetor5, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 3000: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 30000;
    int vetor6[tamanho];

    for(i=0; i<30000; i++){
        vetor6[i] = tamanho;
        tamanho--;
    }

    tamanho = 30000;
    begin = clock();
    bubbleSort(vetor6, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 30000: %f \n", tempo);
    printf("\n");

    printf("-----------------------INSERTIONSORT--------------------\n");

    tamanho = 300;
    int vetor7[tamanho];

    for(i=0; i<300; i++){
        vetor7[i] = tamanho;
        tamanho--;
    }

    tamanho = 300;
    begin = clock();
    InsertionSort(vetor7, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 300: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 3000;
    int vetor8[tamanho];

    for(i=0; i<3000; i++){
        vetor8[i] = tamanho;
        tamanho--;
    }

    tamanho = 3000;
    begin = clock();
    InsertionSort(vetor8, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 3000: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 30000;
    int vetor9[tamanho];

    for(i=0; i<30000; i++){
        vetor9[i] = tamanho;
        tamanho--;
    }

    tamanho = 30000;
    begin = clock();
    InsertionSort(vetor9, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 30000: %f \n", tempo);
    printf("\n");

    printf("-----------------------SELECTIONSORT--------------------\n");

    tamanho = 300;
    int vetor10[tamanho];

    for(i=0; i<300; i++){
        vetor10[i] = tamanho;
        tamanho--;
    }

    tamanho = 300;
    begin = clock();
    selectionSort(vetor10, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 300: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 3000;
    int vetor11[tamanho];

    for(i=0; i<3000; i++){
        vetor11[i] = tamanho;
        tamanho--;
    }

    tamanho = 3000;
    begin = clock();
    selectionSort(vetor11, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 3000: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 30000;
    int vetor12[tamanho];

    for(i=0; i<30000; i++){
        vetor12[i] = tamanho;
        tamanho--;
    }

    tamanho = 30000;
    begin = clock();
    selectionSort(vetor12, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 30000: %f \n", tempo);
    printf("\n");

     printf("-----------------------QuickSort--------------------\n");

    tamanho = 300;
    int vetor13[tamanho];

    for(i=0; i<300; i++){
        vetor13[i] = tamanho;
        tamanho--;
    }

    tamanho = 300;
    begin = clock();
    QuickSort(vetor13, 0, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 300: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 3000;
    int vetor14[tamanho];

    for(i=0; i<3000; i++){
        vetor14[i] = tamanho;
        tamanho--;
    }

    tamanho = 3000;
    begin = clock();
    QuickSort(vetor14, 0, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 3000: %f \n", tempo);
    printf("\n");

    //---------------------------------------

    tamanho = 30000;
    int vetor15[tamanho];

    for(i=0; i<30000; i++){
        vetor15[i] = tamanho;
        tamanho--;
    }

    tamanho = 30000;
    begin = clock();
    QuickSort(vetor15, 0, tamanho-1);
    end = clock();
    tempo =  (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Tempo de processamento tamanho 30000: %f \n", tempo);
    printf("\n");


    return 0;
}
