
#include <math.h>
#include <stdio.h>
int main()
{
    int n,m,i,k=0,j,ar[500000]={0},br[499999]={0};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=i;j<m+i;j++)
        {
           br[i]=br[i]+ar[j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(br[j]<br)
        }
    }
    printf("%d",m+1);
    for(i=0;i<n;i++)
    {
       printf("%d\t",ar[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",br[i]);
    }
    return 0;
}
