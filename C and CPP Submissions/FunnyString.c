#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++)
    {
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int k=strlen(s),flag=0;
//        printf("%d\n",k);
        for(int i=0;i<k;i++)
        {
            if(abs(s[i]-s[i+1])==abs(s[k-i-1]-s[k-(i+2)]))
            {
                flag++;
 //               printf("%d",flag);
            }
        }
        if(flag==(k-1))
        {
            printf("Funny\n");
        }
        else
        {
            printf("Not Funny\n");
        } 
    }
    return 0;
}
