#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int ti=0;ti<t;ti++)
        {
        int m,n;
        scanf("%d%d",&m,&n);
        int cost[n],i,j,id1,id2;
        for(i=0;i<n;i++)
            {
            scanf("%d",(cost+i));
        }
        for(i=0;i<n;i++)
            {
            for(j=i+1;j<n;j++)
                {
                if((cost[i]+cost[j])==m)
                    {
                    id1=i+1;
                    id2=j+1;
                }
            }
        }
        if(id1>id2)
        {printf("%d %d\n",id2,id1);}
        else
        {printf("%d %d\n",id1,id2);}
    }
    return 0;
}
