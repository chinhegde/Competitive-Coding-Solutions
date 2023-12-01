#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    while((x1<=100000000)&&(x2<=100000000))
        {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
            {
            printf("YES");
            exit(0);
        }
    }
    printf("NO");
    return 0;
}
