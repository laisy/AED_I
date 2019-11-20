#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nVogais(char* palavra){
    char vogais[] = {'a','e', 'i', 'o', 'u'};
    int cont = 0, i, k;

    for(i=0; i<strlen(palavra); i++){
        for(k=0; k<strlen(vogais); k++){
            if(palavra[i] == vogais[k]){
                cont += 1;
            }
        }
    }
    return cont;
}

int main(){

    char* palavra[50];

    printf("DIGITE UMA PALAVRA: \n");
    scanf("%s", &palavra);

    printf("\nO NUMERO DE VOGAIS EM %s E %d \n", palavra, nVogais(palavra));


    return 0;
}
