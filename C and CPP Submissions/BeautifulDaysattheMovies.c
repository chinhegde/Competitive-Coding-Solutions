#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int rev(int n)
    {
    int rev=0,rem=0;
    while(n!=0)
        {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    return (rev);
}
int main() {

    int ni,nj,kf,i,b=0,diff;
    scanf("%d%d%d",&ni,&nj,&kf);
    diff=abs(ni-nj);
    int temp[diff],rv[diff];
    for(i=0;i<=diff;i++)
        {
        temp[i]=ni+i;
        rv[i]=rev(ni+i);
        if(((temp[i]-rv[i])%kf)==0)
            {
            b++;
        }
    }
    printf("%d",b);
    return 0;
}
