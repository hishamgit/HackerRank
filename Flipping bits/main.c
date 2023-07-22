#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,q[100];
    unsigned int k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&q[i]);
        k=~q[i];
        printf("%u\n",k);
    }
    return 0;
}
