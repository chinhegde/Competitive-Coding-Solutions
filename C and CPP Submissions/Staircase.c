#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,k=0; 
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        {
        for(j=1;j<i;j++)
            {
            printf(" ");
           
            }
        k=0;
        while(k<=(n-i))
                {
                printf("#");
            k++;
        }
        printf("\n");
    }
    return 0;
}
