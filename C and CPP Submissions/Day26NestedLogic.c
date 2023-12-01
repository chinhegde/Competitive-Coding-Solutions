#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int dR; 
    int mR; 
    int yR; 
    scanf("%d %d %d",&dR,&mR,&yR);
    int dD; 
    int mD; 
    int yD; 
    scanf("%d %d %d",&dD,&mD,&yD);
    if(yD<=yR)
        {
        if(yD==yR)
            {
        if(mR==mD)
            {
            if(dR<=dD)
                {
                printf("0");
            }
            else
                {
                printf("%d",15*(dR-dD));
            }
        }
        else if (mR>mD)
            {
            printf("%d",500*(mR-mD));
        }
            else
                printf("0");
        }
        else
            printf("10000");
    }
    else 
       { printf("0");
       }
    return 0;
}