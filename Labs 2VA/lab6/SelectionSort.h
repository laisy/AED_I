void selectionSort(int vet[], int tam){
    int i, j, menor, aux;

    for(i=0; i<tam; i++){
        menor = i;
        for(j=i+1; j<tam; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            }
        }
        if(i != menor){
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }

}
