#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i,j;
    scanf("%d",&t);
    int n[t],h[t];
    for(j=0;j<t;j++)
        {
        scanf("%d",&n[j]);
    }
    
    for(j=0;j<t;j++)
    {   h[j]=1;
       for(i=1;i<=n[j];i++)
           {
           if((i%2)==0)
               {
               h[j]+=1;
           }
           else
               {
               h[j]=h[j]*2;
           }
       }
    }
    for(i=0;i<t;i++)
        {
        printf("%d\n",h[i]);
    }
    return 0;
}
