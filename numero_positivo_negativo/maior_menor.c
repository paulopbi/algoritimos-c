#include <stdio.h>

int main() {
  int numero;

  printf("\nDigite um numero: ");
  scanf("%d", &numero);

  if (numero == 0) {
    printf("\nO numero digitado e: %d \nEle nao e positivo e nem negativo. \n", numero);
  }
  
  else if (numero > 0) {
    printf("\nO numero digitado e: %d \nEle e positivo! \n", numero);
  }
  
  else {
    printf("\nO numero digitado e: %d \nEle e negativo! \n", numero);
  }
  
  return 0;
}