#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],minsum=0,maxsum=0,sum=0,large,small;; 
    int i;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        sum=sum+a[i];
    }
    large=a[0];
    i=0;
    while(i<5)
        {
        if(a[i]>=large)
            {
            large=a[i];
        }
        i++;
    }
    minsum=sum-large;
    small=a[0];
    i=0;
    while(i<5)
        {
        if(a[i]<=small)
            {
            small=a[i];
        }
        i++;
    }
    maxsum=sum-small;
    printf("%lld %lld",minsum,maxsum);
    return 0;
}
