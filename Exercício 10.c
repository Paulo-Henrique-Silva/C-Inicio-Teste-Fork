#include <stdio.h>

int main()
{
  double sal, aumento;
    
  printf("Digite seu salário: R$");
  scanf("%d", &sal);
    
  aumento = sal + sal * 0.1;

  printf("Seu salário com aumento é: R$%.2lf", aumento + sal);

  return 0;
}
