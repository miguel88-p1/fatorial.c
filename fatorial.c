#include <stdio.h>
int main ()
{
  int numero;  
  int resultado = 1;
  printf("\n digite um numero: ");
  scanf("%d",&numero);
  resultado = fatorial(numero);
  printf("o fatorial de %d é %d",numero,resultado);

}