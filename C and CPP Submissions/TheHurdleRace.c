#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,large; 
    int k; 
    scanf("%d %d",&n,&k);
    int h[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&h[i]);
    }
    large=h[0];
    for(i=0;i<n;i++)
        {
        if(h[i]>large)
            {
            large=h[i];
        }
    }
    if((large-k)==0)
        {
        printf("0");
    }
    else if ((large-k)<0)
        {
        printf("0");
    }
    else
        {
        printf("%d",(large-k));
    }
    return 0;
}
