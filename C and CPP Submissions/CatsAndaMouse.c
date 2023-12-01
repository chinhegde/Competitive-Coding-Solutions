#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q,i; 
    scanf("%d",&q);
    int a[q],b[q],m[q];
    for(i = 0; i < q; i++){
         
        scanf("%d %d %d",&a[i],&b[i],&m[i]);
    }
    for(i=0;i<q;i++)
        {
        if((abs(a[i]-m[i]))<(abs(b[i]-m[i])))
            {
            printf("Cat A\n");
        }
        else if ((abs(a[i]-m[i]))>(abs(b[i]-m[i])))
            {
            printf("Cat B\n");
        }
        else
            {
            printf("Mouse C\n");
        }
    }
    return 0;
}
