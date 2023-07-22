#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,ar[1000000],k[100]={0};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<100;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==ar[j])
            {
                k[i]++;
            }
        }
    }
    for(i=0;i<100;i++)
    {
        printf("%d\t",k[i]);
    }
    return 0;
}
