#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float mc,tpc,txc,tc;
    scanf("%f%f%f",&mc,&tpc,&txc);
    tc=mc+(mc*(tpc/100))+(mc*(txc/100));
    int tcc;
        tcc=(tc/1.000000);
    float frp=tc-tcc;
    if(frp>=0.5)
        {
        tcc=tcc+1;
    }
    printf("The total meal cost is %d dollars.",tcc);
    return 0;
}
