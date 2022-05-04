#include <stdio.h>

int main()
{
   int j, res;
    int numprimo = 0, k = 1;
    while (k <= 30)

    {
    int cont = 0;
    j = numprimo;
    while(j > 0)
    {	
    	res = numprimo%j;
    	if(res == 0) cont = cont + 1;
    	j = j - 1;
    }
    	if (cont == 2){
    	printf("%d - Numero Primo\n", numprimo);
    		k = k + 1;
    	
    	}
       	    numprimo = numprimo + 1;		
     }
    
}
