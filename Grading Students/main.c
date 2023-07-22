#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,g[60],i;
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&g[i]);
    }
    for(i=0;i<n;i++)
    {
        if(g[i]>37 && g[i]<101)
        {
            int k=g[i]%5;
            if(k > 2)
            {
                g[i]=g[i]+5-k;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",g[i]);
    }
    return 0;
}
