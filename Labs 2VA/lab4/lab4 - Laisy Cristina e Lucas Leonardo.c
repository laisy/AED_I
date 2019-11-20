
#include <stdio.h>
#include <stdlib.h>

typedef struct Processo{
   int prioridade;
   struct Processo* prox;
}Processo;

typedef struct fila{
   struct Processo* inicio;
   struct Processo* fim;
}fila;
fila* init(){
   fila* fila = malloc(sizeof(fila));
   fila->inicio = NULL;
   fila->fim = NULL;
   return fila;
}
fila* FilaDePrioridades(Processo p1, fila* inicioFilaProcessos){
    if(p1.prioridade == 0){
        insert(inicioFilaProcessos, p1.prioridade);
    } else{
        insertInicio(inicioFilaProcessos, p1.prioridade);
    }
}

void insertInicio(fila* fila,int prioridade){
    Processo* novo = malloc(sizeof(Processo));
    novo->prioridade = prioridade;
    novo->prox = NULL;
     if(fila->inicio == NULL){
       fila->inicio = novo;
       fila->fim = novo;
   }else{
        fila->fim->prox = novo;
        fila->fim = novo;
   }
}

void insert(fila* fila,int prioridade){
   Processo* novo = malloc(sizeof(Processo));
   novo->prioridade = prioridade;
   novo->prox = NULL;
   if(fila->inicio == NULL){
       fila->inicio = novo;
       fila->fim = novo;
   }else{
       novo->prox = fila->inicio;
       fila->inicio = novo;
   }
}

void imprimir(fila *p1){
    printf("FILA \n");
	Processo *p;
	if(p1 != NULL){
		for(p = p1->inicio; p != NULL; p = p->prox){
			printf("%d ", p->prioridade);
		}
		printf("\n");
	}

}

int main(){
    int prioridade;

    printf("0 - SEM PRIORIDADE \n");
    printf("1 - COM PRIORIDADE \n");
    printf("-1 - PARAR \n");
    printf("\n");

   fila* p1 = init();
   scanf("%d", &prioridade);
   insert(p1, prioridade);

   imprimir(p1);

   while(prioridade!=-1){
    scanf("%d", &prioridade);
    if(prioridade == -1){
        break;
    }
    Processo seila;
    seila.prioridade = prioridade;
    seila.prox = NULL;

    FilaDePrioridades(seila, p1);

    imprimir(p1);
    printf("\n");


   }


}
