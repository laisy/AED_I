#include <stdio.h>
#include <stdlib.h>


typedef struct No{
    int valor;
    struct No *prox;
    struct No *ant;
}No;

typedef struct Lista{
    No *inicio;
}Lista;

Lista* init(){
    Lista *l = malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

void add(Lista *l, int valor){
    No *novo = malloc(sizeof(No));
    if(l->inicio != NULL){
        l->inicio->ant = novo;
        novo->prox = l->inicio;
        novo->ant = NULL;
        novo->valor = valor;
        l->inicio = novo;
    }
    else{
        l->inicio = novo;
        novo->prox = NULL;
        novo->ant = NULL;
        novo->valor = valor;
    }
}

void insertionSort(Lista *l){
    No *i, *j;
    No *chave;
    for(i = l->inicio->prox; i != NULL; i = i->prox){
        chave = i;
        for(j = i->ant; ((j != NULL) && chave->valor <= j->valor); j = j->ant){
            if(j->valor > chave->valor){
                if(j->ant != NULL && chave->prox != NULL){
                    j->prox = chave->prox;
                    chave->prox = j;
                    chave->ant = j->ant;
                    j->ant = chave;
                    chave->ant->prox = chave;
                    j->prox->ant = j;
                }
                else if(j->ant == NULL && chave->prox != NULL){
                    j->prox = chave->prox;
                    chave->prox = j;
                    chave->ant = j->ant;
                    j->ant = chave;
                    j->prox->ant = j;
                    l->inicio = chave;
                }
                else{
                    j->prox = chave->prox;
                    chave->prox = j;
                    chave->ant = j->ant;
                    j->ant = chave;
                    chave->ant->prox = chave;
                }
            }
        }
    }
}

void printar(Lista *l){
    No *p;
    for(p = l->inicio; p != NULL; p = p->prox){
        printf("%d ", p->valor);
    }
    printf("\n");
}

int main()
{
    Lista *l = init();

    add(l, 89);
    add(l, 29);
    add(l, 0);
    add(l, 59);
    add(l, 48);
    add(l, 2);

    printar(l);
    insertionSort(l);
    printar(l);

    return 0;
}
