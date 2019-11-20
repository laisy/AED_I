void bubbleSort(int vet[], int tam){

    int i, j, aux, flag;

    for(i=0; i<tam; i++){
        flag = 0;
        for(j=0; j<tam-1-i; j++){
            if(vet[j]>vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1]= aux;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}
