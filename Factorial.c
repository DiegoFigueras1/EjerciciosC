#include <stdio.h>

int main()
{
  int num, b, fact = 1;

  printf("Introduzca un numero para calcular su factorial: ");
  scanf("%d", &num);

  for (b = num; b > 1; b--){
  	
    fact = fact * b;
}
  printf("El factorial de %d es %d\n", num, fact);

  return 0;
}
