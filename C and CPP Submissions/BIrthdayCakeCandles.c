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
    int h[n],i,candle=0,large;
    for(i = 0; i < n;i++){
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
    for(i=0;i<n;i++)
        {
        if(h[i]==large)
            {
            candle++;
        }
    }
    printf("%d",candle);
    return 0;
}
