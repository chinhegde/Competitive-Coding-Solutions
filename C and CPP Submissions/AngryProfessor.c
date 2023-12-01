#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i,j,a; 
    scanf("%d",&t);
    int n[t],k[t];
    for( i = 0; i < t; i++)
    {
        scanf("%d%d",&n[i],&k[i]);
        a=n[i];
        int min[a],y=0;
        for(j=0;j<a;j++)
            {
            scanf("%d",&min[j]);
        }
        for(j=0;j<a;j++)
            {
            if(min[j]<=0)
                {
                y++;
            }
        }
        if(y>=k[i])
            {
            printf("NO\n");
        }
        if(y<k[i])
            {
            printf("YES\n");
        }
    }
    
    return 0;
}
