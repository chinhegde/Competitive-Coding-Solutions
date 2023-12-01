#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i=0; 
    scanf("%d",&n);
    float a[n],p=0,ng=0,z=0,k;
    k=n;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%f",&a[arr_i]);
    }
    while(i<n)
    {
        if(a[i]>0)
        {
            p+=1;
            
        }
        else if(a[i]==0)
        {
            z+=1;
           
        }
        else{
            ng+=1;
            
        }
        i++;
    }
    p=p/k;
    ng=ng/k;
    z=z/k;
    printf("%f\n%f\n%f\n",p,ng,z);
    return 0;
}
