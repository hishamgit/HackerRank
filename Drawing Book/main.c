#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,n,i,j,k,b=0;
    scanf("%d",&n);
    scanf("%d",&p);
    int h[n/2][2];
    for(i=0;i<((n+1)/2);i++)
    {
        for(j=0;j<2;j++)
        {
            h[i][j]=b;
            b++;
        }
    }
    for(i=0;i<((n+1)/2);i++)
    {
        for(j=0;j<2;j++)
        {
            if(h[i][j]==p)
            {
                k=i;
            }
        }
    }
    if(k<((n/2)-k))
    {
        printf("%d",k);
    }
    else{
        printf("%d",(n/2)-k);
    }
    return 0;
}
