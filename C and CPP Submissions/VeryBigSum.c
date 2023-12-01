#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    scanf("%d",&n);
    long long int sum=0,arr[n];
    for(i = 0;i < n;i++){
       scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
{
        sum+=arr[i];
    }   
    printf("%lld",sum);
           return 0;
}
