#include <stdio.h>

int main()
{
    int x;
    int sal;
    
    printf("digite seu salário: ");
    scanf("%d", &x);
    
    sal = x + (x*0.1);
    
    printf("Seu salário com aumento é: %d", sal);
  return 0;
  


}
