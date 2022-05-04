#include <stdio.h>

int main()
{

  int i;
  int r = 0;
  int y;
  int m = 1;
  
  printf("digite um número: ");
  scanf("%d", &y);
  
  for(i = 1; i <= y; i++){
      r = i + r;
      m = i * m;
  }
  
  printf("Soma: %d\n", r);
  printf("Produto: %d", m);
  
  return 0;
  


}
