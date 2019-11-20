#include <stdio.h>
#include <stdlib.h>

void matrizVetSimples(int m, int n){
   int *mat;
   mat = (int*)malloc(m*n*sizeof(float));

   int i, j, k;
   int num;

   for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        printf("Digite os elementos da matriz 1: ");
        scanf("%d", &num);
        mat[i*n + j] = num;
    }
   }

   free(mat);
}

void matrizVetPonteiro(int m, int n){
    int i, j, num;
    int **mat;
    mat = (int**)malloc(m*sizeof(int*));

    for(i=0; i<m; i++){
        mat[i] = (int*)malloc(n*sizeof(int));
    }
     for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("Digite os elementos da matriz 2: ");
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    for(i=0; i<m; i++){
        free(mat[i]);
    }

    free(mat);
}

int main(){

    int m, n;

    printf("Digite o numero de linhas: ");
    scanf("%d", &m);

    printf("Digite o numero de colunas: ");
    scanf("%d", &n);

    matrizVetSimples(m, n);
    matrizVetPonteiro(m, n);

    return 0;
}
