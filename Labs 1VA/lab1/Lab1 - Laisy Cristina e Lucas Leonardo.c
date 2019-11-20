#include <stdio.h>

    /*Faça um programa em C que receba 3 números inteiros e os retorne:
    - De forma ordenada;
    - Informe quais são positivos e quais são negativos;
    - Informe quais são pares e quais são ímpares.*/

int main() {

    int num1, num2, num3;
    int maior, menor, medio = 0;

    //O CODIGO ABAIXO, ATÉ O PROXIMO COMENTARIO, IRÁ SOLICITAR AOS USUARIOS OS 3 NUMEROS NESCESSARIOS PARA DAR PROSSEGUIMENTO AO PROGRAMA

    printf("O PROGRAMA tem a finalidade de ORDENAR os numeros digitados alem de verificar se os mesmos sao POSITIVOS ou NEGATIVOS e PARES ou IMPARES.\n");
    printf("Voce devera digitar TRES numeros para dar prosseguimento ao PROGRAMA.\n\n");
    printf("Digite o PRIMEIRO numero: ");
    scanf("%d", &num1);
    printf("Digite o SEGUNDO numero: ");
    scanf("%d", &num2);
    printf("Digite o TERCEIRO numero: ");
    scanf("%d", &num3);
    printf("\n");

    //O CODIGO ABAIXO, ATE O PROXIMO COMENTARIO, IRA DEFINIR OS NUMEROS ORDENADAMENTE

    if(num1 > num2 && num1 > num3){
        maior = num1;
    }
    else if(num2 > num1 && num2 > num3){
        maior = num2;
    }
    else{
        maior = num3;
    }

    if(num1 < num2 && num1 < num3){
        menor = num1;
    }
    else if(num2 < num1 && num2 < num3){
        menor = num2;
    }
    else{
        menor = num3;
    }

    if(num1 < maior && num1 > menor){
        medio = num1;
    }
    else if(num2 < maior && num2 > menor){
        medio = num2;
    }
    else{
        medio = num3;
    }

    printf("Os numeros digitados de forma ORDENADA seguem na forma: ");
    printf("%d ", menor);
    printf("%d ", medio);
    printf("%d \n", maior);
    printf("\n");

    //O CODIGO ABAIXO, ATE O PROXIMO COMENTARIO, VERIFICA SE O NUMERO E POSITIVO OU NEGATIVO

    if(num1 < 0){
        printf("O numero %d e NEGATIVO \n", num1);
    }else if(num1 == 0){
        printf("O numero %d e ZERO\n", num1);
    }else{
        printf("O numero %d e POSITIVO \n", num1);
    }

    if(num2 < 0){
        printf("O numero %d e NEGATIVO \n", num2);
    }else if(num2 == 0){
        printf("O numero %d e ZERO\n", num2);
    }else{
        printf("O numero %d e POSITIVO \n", num2);
    }

    if(num3 < 0){
        printf("O numero %d e NEGATIVO \n", num3);
    }else if(num3 == 0){
        printf("O numero %d e ZERO\n", num3);
    }else{
        printf("O numero %d e POSITIVO \n", num3);
    }

    printf("\n");

    //O CODIGO ABAIXO, VERIFICA SE OS NUMEROS DIGITADOS SÃO PARES OU IMPARES.

    if(num1 % 2 == 0){
        printf("O numero %d e PAR \n", num1);
    }else{
        printf("O numero %d e IMPAR \n", num1);
    }

    if(num2 % 2 == 0){
        printf("O numero %d e PAR \n", num2);
    }else{
        printf("O numero %d e IMPAR \n", num2);
    }

    if(num3 % 2 == 0){
        printf("O numero %d e PAR\n", num3);
    }else{
        printf("O numero %d e IMPAR \n", num3);
    }

    return 0;
}
