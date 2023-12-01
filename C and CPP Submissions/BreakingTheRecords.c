#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,best=0,worst=0; 
    scanf("%d",&n);
    int s[n],h[n],l[n],i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&s[i]);
    }
    i=1;
    h[0]=s[0];
   
    while(i<n)
        {
        if(s[i]>h[i-1])
            {
            h[i]=s[i];
            best++;
        }
        else
            {
            h[i]=h[i-1];
        }
        i++;
    }
        printf("%d ",best);
l[0]=s[0];
    i=1;
    while(i<n)
        {
        if(s[i]<l[i-1])
            {
            l[i]=s[i];
            worst++;
        }
        else
            {
            l[i]=l[i-1];
        }
        i++;
        
    }
   printf("%d",worst);
    return 0;
}
