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

No* criarNo(int valor){
	No *novo = (No*)malloc(sizeof(No));
	novo->valor = valor;
	novo->prox = NULL;
	novo->ant = NULL;
	return novo;
}

Lista* iniciarLista(){
	Lista *l = (Lista*)malloc(sizeof(Lista));
	l->inicio = NULL;
	return l;
}

void adicionarLista(Lista *l, int valor){
	if(l != NULL){
		No *novo = criarNo(valor);
		if(l->inicio == NULL){
			novo->prox = l->inicio;
			l->inicio = novo;
		}
		else{
			novo->prox = l->inicio;
			l->inicio->ant = novo;
			l->inicio = novo;
		}
	}
}


void removerNo(Lista*l,int valor){
    if(l != NULL){
        No *p = l->inicio;
		if(p != NULL && p->valor == valor){
			l->inicio = p->prox;
			free(p);
			return;
		}
		while(p != NULL && p->valor != valor){
			p = p->prox;
		}
		if(p == NULL){
			return;
		}
		p->ant->prox = p->prox;
		free(p);
    }
}

void imprimir(Lista *l){
	No *p;
	if(l != NULL){
		for(p = l->inicio; p != NULL; p = p->prox){
			printf("%d ", p->valor);
		}
		printf("\n");
	}

}

int main(){
	Lista *l = iniciarLista();
	adicionarLista(l, 10);
	imprimir(l);
	adicionarLista(l, 20);
	imprimir(l);
	adicionarLista(l, 30);
	imprimir(l);
	removerNo(l, 10);
	imprimir(l);	
	return 0;
}