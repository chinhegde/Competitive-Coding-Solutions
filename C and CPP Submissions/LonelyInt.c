#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    int n;
    scanf("%d",&n);
    int i,j,k,a[n],b[100];
    for(i=0;i<n;i++)
        {
        scanf("%d",(a+i));
    }
    for(i=1;i<n;i++)
        {
        for(j=0;j<i;j++)
            {
            if(a[j]==a[i])
                {
                a[i]=0;
                a[j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
        {
        if(a[i]!=0)
            {
            printf("%d",*(a+i));
        }
    }
    return 0;
}
