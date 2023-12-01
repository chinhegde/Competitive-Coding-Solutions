#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    int k,i,j,s=0; 
    scanf("%d %d", &n, &k);
    int a[n],d;
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        for(j=1+i;j<n;j++)
            {
            if(j==i)
                {}
            else
                {
                d=(a[i]+a[j])%k;
                if(d==0)
                    {
                    s++;
                }
            }
        }
    }
    printf("%d",s);
    return 0;
}
