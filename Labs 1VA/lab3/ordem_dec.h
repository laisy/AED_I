void ordem_dec(int a, int b, int c){

  int maior = 0, menor = 0, medio = 0;

  if(a > b && a > c){
        maior = a;
    }
    else if(b > a && b > c){
        maior = b;
    }
    else{
        maior = c;
    }

    if(a < b && a < c){
        menor = a;
    }
    else if(b < a && b < c){
        menor = b;
    }
    else{
        menor = c;
    }

    if(a < maior && a > menor){
        medio = a;
    }
    else if(b < maior && b > menor){
        medio = b;
    }
    else{
        medio = c;
    }

printf("Ordem decrescente: %d %d %d \n", maior, medio, menor);

}
