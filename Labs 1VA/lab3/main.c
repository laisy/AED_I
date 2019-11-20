#include <stdio.h>
#include "ordem_dec.h"
#include "mult.h"
#include "max.h"
#include "equacao.h"
#include "soma.h"

int main(void) {

  int a, b, c;
  printf("Digite o numero a: ");
  scanf("%d", &a);

  printf("Digite o numero b: ");
  scanf("%d", &b);

  printf("Digite o numero c: ");
  scanf("%d", &c);

  ordem_dec(a, b, c);
  soma(a, b, c);
  printf("Multiplicacao: %d \n", mult(a, b, c));
  equacao(a, b, c);


  return 0;
}
