#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
    int i=0,j,wc=1;
    char c;
    while(s[i]!='\0')
    {
        c=s[i];
        if((c>=65)&&(c<=90))
        {
            wc++;
        }
        i++;
    }
    printf("%d",wc);
    return 0;
}
