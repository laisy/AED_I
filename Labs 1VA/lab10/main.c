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

void adicionarListaProx(Lista *l, int valor){
	No *anterior = NULL;
	No *p;
	No *temp;

	if(l != NULL){
		for(p = l->inicio; p != NULL; p = p->prox){
			if(p->valor > valor){

			}
			else{

			}
			anterior = p;
		}
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
	int n;
	scanf("%d", &n);
	adicionarLista(l, n);
	imprimir(l);

    scanf("%d", &n);
    adicionarListaProx(l, n);

	return 0;
}
