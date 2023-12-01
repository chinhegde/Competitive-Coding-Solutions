#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int m[n],d[n],k[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&m[i]);
    }
    i=0;
    while(i<n)
        {
        if(m[i]>=38)
            {
        d[i]=m[i]%5;
        k[i]=m[i]/5;
        if((5-d[i])<3)
            {
            m[i]=(k[i]+1)*5;
        }
        }
        i++;
    }
    for(i=0;i<n;i++)
        {
        printf("%d\n",m[i]);
    }
    return 0;
}
