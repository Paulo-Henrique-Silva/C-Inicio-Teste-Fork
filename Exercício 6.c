int main()
{
  int n = 1, fib = 1, aux = 0;
  int i =0;
    
    for(i=1; i<=50; i++)
    { 
        printf("%d-", fib);                   
        fib = fib + aux;                 
        aux = n;
        n = fib;        
    }
  return 0;
  
  
}
