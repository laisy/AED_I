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

int main(){
    Aluno ALUNO[10];
    int tam = 10;
    int k;

    for(k = 0; k < tam; k++){
        scanf("%i", &ALUNO[k].id);
        scanf("%i", &ALUNO[k].idade);
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

    if(cont < 9){
        selectionSort(ALUNO, tam);
        printf("\n");
        for (k = 0; k < tam; k++){
            printf("%0.2f\n", ALUNO[k].altura);
        }

    }else{
         printf("\n");
         printf("Ordenado");
    }


    return 0;
}
