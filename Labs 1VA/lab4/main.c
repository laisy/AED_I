#include <stdio.h>
#include <stdlib.h>

struct livros{

    int numLivro;
    int paginas;
    float valorReal;
    float valorDolar;

};

struct livros cadastrar(){

    int num, pag;
    float val;

    printf("Digite o numero do livro: \n");
    scanf("%d", &num);

    printf("Digite a quantidade de paginas do livro: \n");
    scanf("%d", &pag);

    printf("Digite o valor do livro: R$ \n");
    scanf("%f", &val);

    struct livros Livro;
    Livro.numLivro = num;
    Livro.paginas = pag;
    Livro.valorReal = val;

    Livro.valorDolar = val/4.30;
    return Livro;
}

struct livros mudarValor(struct livros l){
    float val;

    printf("Digite o novo valor do livro: R$ \n");
    scanf("%f", &val);

    l.valorReal = val;
    l.valorDolar = val/4.30;

    return l;

}

int main(){
    struct livros l;

    l = cadastrar();

    printf("O numero do livro: %d \n", l.numLivro);
    printf("A quantidade de paginas: %d \n", l.paginas);
    printf("O valor do livro em real: %.2f \n", l.valorReal);
    printf("O valor do livro em dolar: %.2f \n", l.valorDolar);

    l = mudarValor(l);

    printf("O numero do livro: %d \n", l.numLivro);
    printf("A quantidade de paginas: %d \n", l.paginas);
    printf("O novo valor do livro em real: %.2f \n", l.valorReal);
    printf("O novo valor do livro em dolar: %.2f \n", l.valorDolar);


    return 0;
}
