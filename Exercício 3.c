#include <stdio.h>

int main()
{
    int a, i;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    for (i = 1; i < 11; i++)
       printf("\n%d x %d = %d", a, i, a * i);

    return 0;
}