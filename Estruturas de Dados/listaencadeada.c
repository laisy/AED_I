#include <stdio.h>
#include <stdlib.h>


typedef struct No{
	int valor;
	struct No *prox;
}No;

typedef struct Lista{
	No *inicio;
}Lista;

No* criarNo(int valor){
	No *novo = (No*)malloc(sizeof(No));
	novo->valor = valor;
	novo->prox = NULL;
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
		novo->prox = l->inicio;
		l->inicio = novo;
	}
}

void removerLista(Lista *l){
	if(l != NULL){
		if(l->inicio != NULL){
			No *aux = l->inicio;
			l->inicio = aux->prox;
			free(aux);
		}
	}
}

No* procurarNo(Lista *l, int valor){
	No *p;
	if(l != NULL){
		for(p = l->inicio; p != NULL; p = p->prox){
			if(p->valor == valor){
				return p;
			}
		}
		return p;
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
	removerLista(l);
	imprimir(l);	
	return 0;
}