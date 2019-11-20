#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int id;
    int idade;
    float altura;
}Aluno;

void selectionSort(Aluno ALUNO[], int tam){

    int menor, i, j;
    Aluno aux;
    for(i=0; i<tam; i++){
        menor = i;
        for(j=i+1; j<tam; j++){
             if (ALUNO[menor].altura > ALUNO[j].altura){
            menor = j;
            }
        }
        if(i < j){
            aux = ALUNO[i];
            ALUNO[i] = ALUNO[menor];
            ALUNO[menor] = aux;
            }
        }
}

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

int main(){
    Aluno ALUNO[10];
    int tam = 10;
    int k;

    for(k = 0; k < tam; k++){
        printf("ID: ");
        scanf("%i", &ALUNO[k].id);
        printf("IDADE: ");
        scanf("%i", &ALUNO[k].idade);
        printf("ALTURA: ");
        scanf("%f", &ALUNO[k].altura);
        printf("\n");
    }

    float proxAltura;
    int cont = 0;
    for (k = 0; k < tam; k++){
        proxAltura = ALUNO[k+1].altura;
        if(ALUNO[k].altura <= proxAltura){
            cont += 1;
        }
    }
    printf("Vetor: \n");
    for (k = 0; k < tam; k++){
            printf("%0.2f\n", ALUNO[k].altura);
            printf("\n");
        }

    printf("Ordenação por Selection Sort: \n");
    if(cont < 9){
        selectionSort(ALUNO, tam);
        printf("\n");
        for (k = 0; k < tam; k++){
            printf("%0.2f\n", ALUNO[k].altura);
            printf("\n");
        }

    }else{
         printf("Ordenado \n");
    }

    printf("Ordenação por Bubble Sort: \n");
    if(cont < 9){
        bubbleSort(ALUNO, tam);
        printf("\n");
        for (k = 0; k < tam; k++){
            printf("%0.2f\n", ALUNO[k].altura);
            printf("\n");
        }

    }else{
         printf("Ordenado \n");
    }

    printf("Ordenação por Insertion Sort: \n");
    if(cont < 9){
        InsertionSort(ALUNO, tam);
        printf("\n");
        for (k = 0; k < tam; k++){
            printf("%0.2f\n", ALUNO[k].altura);
            printf("\n");
        }

    }else{
         printf("Ordenado \n");
    }

    return 0;
}
