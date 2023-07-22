#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=0,l=0,m;
    scanf("%d\n",&n);
    int ar[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[i][j]>100 && ar[i][j]<-100)
                goto okbei;
        }
    }

    for(i=0;i<n;i++)
    {
        k=k+ar[i][i];
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        l=l+ar[i][j];
        j--;
        if(j<0)
        {
            break;
        }
    }
    m=l-k;
    if(m<0)
    {
        m=~m+1;
    }s
    printf("%d\n",m);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            scanf("%d\t",&ar[i][j]);
        }
    }
okbei:
    return 0;
}
