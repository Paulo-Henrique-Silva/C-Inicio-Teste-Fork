#include <stdio.h>

int main()
{
  int soma = 0;
  
  for(int i = 1; i <= 1000; i++)
        soma += i;
  
  printf("soma = %d",soma);
  
  return 0;
}
