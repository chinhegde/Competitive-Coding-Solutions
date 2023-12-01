#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int i,px[n],py[n],qx[n],qy[n];
    for(i=0;i<n;i++)
        {
        int rx,ry;
        scanf("%d%d%d%d",(px+i),(py+i),(qx+i),(qy+i));
        rx=qx[i]-(px[i]-qx[i]);
        ry=qy[i]-(py[i]-qy[i]);
        printf("%d %d\n",rx,ry);
    }
    return 0;
}
