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

typedef struct pilha{
   struct No* topo;
}pilha;

pilha* init(){
   pilha* pilha = malloc(sizeof(pilha));
   pilha->topo = NULL;
   return pilha;
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

void push(pilha* pilha, int num){
   No* novo = (No*)malloc(sizeof(No));
   novo->valor = num;
   novo->prox = NULL;
   if(pilha->topo == NULL){
       pilha->topo = novo;
   }else{
       No* temp = pilha->topo;
       pilha->topo = novo;
       novo->prox = temp;
   }
}
int pop(pilha* pilha){
   if(pilha->topo != NULL){
       No* temp = pilha->topo;
       pilha->topo = temp->prox;
       return temp->valor;
   }
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

void addPilha(Lista *l, pilha *pilha){
	No *p;
	if(l != NULL){
		for(p = l->inicio; p != NULL; p = p->prox){
			push(pilha, p->valor);
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

void print(pilha* pilha){
   No* cursor = pilha->topo;
   while(cursor->prox != NULL){
       printf("%d\n", cursor->valor);
       cursor = cursor->prox;
   }
   printf("%d\n", cursor->valor);
}


int main(){

    printf("Lista l1 \n");
	Lista *l1 = iniciarLista();
	adicionarLista(l1, 1);
	adicionarLista(l1, 2);
	adicionarLista(l1, 5);
	imprimir(l1);
	printf("\n");

    printf("Lista l2 \n");
	Lista *l2 = iniciarLista();
	adicionarLista(l2, 0);
	adicionarLista(l2, 9);
	adicionarLista(l2, 8);
	imprimir(l2);
	printf("\n");

    Lista *lFinal = iniciarLista();

    pilha* pilha = init();
    addPilha(l2, pilha);
    addPilha(l1, pilha);

    printf("Lista lFinal \n");
    while(pilha->topo != NULL){
        adicionarLista(lFinal, pop(pilha));
    }
    imprimir(lFinal);

	return 0;
}
