#include <stdio.h>

int main(void) {
  int num, contador, maior;
 

  for(contador = 0;contador < 10; contador++ ){
    
  printf("Digite 10 números inteiros: ");
  scanf("%d",&num);
    if (contador == 0)
    maior = num;
    else if (num > maior)
      maior=num;
  }
  printf("Maior: %d", maior);
  }
