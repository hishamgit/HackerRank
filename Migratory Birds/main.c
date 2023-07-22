#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sm;
    scanf("%d/n",&n);
    int a[200000]={0};
    int b[5]={0};
    int c[5]={0};
    int d[5]={6,6,6,6,6};
    for(i=0;i<n;i++)
    {
        scanf("%d/t",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            b[0]++;
        }
        else if(a[i]==2)
        {
            b[1]++;
        }
        else if(a[i]==3)
        {
            b[2]++;
        }
        else if(a[i]==4)
        {
            b[3]++;
        }
        else if(a[i]==5)
        {
            b[4]++;
        }
    }
    for(i=0;i<5;i++)
    {
        c[i]=b[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(b[j]<b[i])
            {
                b[i]=b[i]+b[j];
                b[j]=b[i]-b[j];
                b[i]=b[i]-b[j];
            }
        }
    }
    for(j=0;j<5;j++)
    {
        if(c[j]==b[0])
        {
            d[j]=j+1;
        }
    }
    sm=d[0];
    for(i=0;i<5;i++)
    {
        if(sm>d[i])
        {
           sm=d[i];
        }
    }
    printf("%d",sm);
    return 0;
}
