#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    scanf("%d",&N);
    if((N%2)!=0)
        {
        printf("Weird");
        exit(0);
    }
    else if((N>=6)&&(N<=20))
        {
        printf("Weird");
    }
    else
        {
        printf("Not Weird");
    }
    return 0;
}
