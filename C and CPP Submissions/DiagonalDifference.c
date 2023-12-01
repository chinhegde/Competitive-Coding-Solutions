#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,s1=0,s2=0; 
    scanf("%d",&n);
    int a[n][n];
    for(i = 0; i < n; i++){
       for(j = 0; j < n; j++){
          
          scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<n;i++)
        {
        s1=s1+a[i][i];
    }
    for(i=0;i<n;i++)
        
            {
            s2=s2+a[i][n-1-i];
        }
    
    printf("%d",abs(s2-s1));
    return 0;
}
