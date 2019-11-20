void equacao(int a, int b, int c){

  int eq, maxi, multi;

  maxi = max(a, b, c);
  multi = mult(a, b, c);

  eq = multi * maxi;

  printf("(A*B*C)* MAX(A,B,C) = %d", eq);

}
