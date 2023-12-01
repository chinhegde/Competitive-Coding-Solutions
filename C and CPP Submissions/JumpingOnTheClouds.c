#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int c[n],i,j=0,p=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&c[i]);
    }
    while(p<=n-1)
        {
        if(c[p+2]!=0)
            {
            j++;
            p=1+p;
        }
        else 
            {
            j++;
            p=2+p;
        }
    }
    printf("%d",j-1);
    return 0;
}
