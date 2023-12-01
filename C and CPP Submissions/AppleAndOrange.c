#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s,t; 
    scanf("%d %d",&s,&t);
    int a,b; 
    scanf("%d %d",&a,&b);
    int m,n; 
    scanf("%d %d",&m,&n);
    int da[m],dor[n],i,ap=0,o=0;
    for(i = 0;i < m;i++)
    {
       scanf("%d",&da[i]);
    }
    for(i = 0;i < n;i++)
    {
       scanf("%d",&dor[i]);
    }
    for(i=0;i<m;i++)
        {
        if(((a+da[i])>=s)&&((a+da[i])<=t))
            {
            ap++;
        }
    }
    for(i=0;i<n;i++)
        {
        if(((b+dor[i])>=s)&&((b+dor[i])<=t))
            {
            o++;
        }
    }
    printf("%d\n%d",ap,o);
    return 0;
}
