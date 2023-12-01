#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int x)
    {int n;
     if(x>=1)
         {
         n=factorial(x-1)*x;
     return(n);
     }
     else
         {
         return(1);
     }
}
int main() {
int n,f;
    scanf("%d",&n);
    f= factorial(n); 
    printf("%d",f);
  return(0); 
}
