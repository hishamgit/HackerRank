#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=0;
    int a[100],b[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[i])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
               {
                 b[i]++;
               }
            else
               {
                    i= j-1;
                    break;
               }
        }
        if(j==n)
            {
                break;
            }
    }
    for(i=0;i<n;i++)
    {
        b[i]=b[i]/2;
    }
     for(i=0;i<n;i++)
    {
        k=k+b[i];
    }
    printf("%d",k);
    return 0;
}
