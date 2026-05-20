#include <stdio.h>
int main ()
{
  int numero;  
  int resultado = 1;
  printf("\n digite um numero: ");
  scanf("%d",&numero);

  for(int contador=numero;contador>=1;contador--)
  {
  resultado = resultado * contador;
  }
  printf("o fatorial de %d é %d",numero,resultado);

}