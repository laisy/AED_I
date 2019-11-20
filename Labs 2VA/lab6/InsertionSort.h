void InsertionSort(int* vetor, int tamanho){
    int i, j, chave;
    for(i=1; i<tamanho; i++){
        chave = vetor[i];
        for(j=i-1; j>=0 && vetor[j]>chave; j--){
            vetor[j+1] = vetor[j];
        }
        vetor[j+1] = chave;
    }

}
