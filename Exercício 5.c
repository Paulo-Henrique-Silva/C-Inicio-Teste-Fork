#include <stdio.h>

int main()
{
  int i;
  int soma;
  
  for(i = 1; i <= 1000; i++){
      soma = i + i++ + soma;
  }
  
  printf("%d",soma);
  
  return 0;
  }
