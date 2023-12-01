#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i; 
    scanf("%d",&t);
    long int n[t];
    for(i = 0; i < t; i++)
    {
        long int temp1,temp2; 
        scanf("%ld",&n[i]);
        temp1=n[i];
        temp2=n[i];
        int j,k, ndig=0,count=0;
        while(n[i]!=0)
            {
            n[i]=n[i]/10;
            ndig++;
        }
        int dig[ndig];
        for(j=0;j<ndig;j++)
            {
            dig[j]=temp1%10;
            temp1=temp1/10;
        }
        for(k=0;k<ndig;k++)
            {
            if(dig[k]!=0)
                {
                if((temp2%dig[k])==0)
                    {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
