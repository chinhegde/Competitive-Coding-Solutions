#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d",&n);
    int s[n],i,j;
    for(i = 0;i < n;i++)
    {
       scanf("%d",&s[i]);
    }
    int d,m,w=0,sum=0; 
    scanf("%d %d",&d,&m);
    i=0;
    while(i<=(n-m))
    {
        sum=0;
        for(j=i;j<i+m;j++)
            {
            sum=sum+s[j];
        }
        if(sum==d)
            {
            w++;
        }
        i++;
    }
    printf("%d",w);
    return 0;
}
