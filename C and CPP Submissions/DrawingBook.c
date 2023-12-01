#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,f,b; 
    scanf("%d", &n);
    int p; 
    scanf("%d", &p);
    f=p/2;
    if(n%2==0)
        {
        if(((n-p)%2)==0)
            {
            b=(n-p)/2;
        }
        else
            {
        b=((n-p)/2)+1;
    }
    }
    else
        {
        b=(n-p)/2;
    }
    if(f>=b)
        {
        printf("%d",b);
    }
    else
        {
        printf("%d",f);
    }
    return 0;
}
