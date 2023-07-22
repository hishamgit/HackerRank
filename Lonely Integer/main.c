#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[100],ab[100]={0};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               ab[i]++;
           }
       }
    }
    for(i=0;i<n;i++)
    {
        if(ab[i]==1)
            {
                printf("%d\n",a[i]);
            }
    }
    return 0;
}
