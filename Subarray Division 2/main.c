#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,m,i,j,k=0;
    int s[100]={0};
    int a[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    scanf("%d",&d);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=i;j<m+i;j++)
        {
            a[i]=a[i]+s[j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
