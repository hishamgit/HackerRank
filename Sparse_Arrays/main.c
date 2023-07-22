#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N,Q,i,j;
    int k[1001]={0};

    scanf("%d",&N);
    char n[N][1001];
    for(i=0;i<N;i++)
    {
        scanf("%s",n[i]);
    }

    scanf("%d",&Q);
    char q[Q][1001];
    for(i=0;i<Q;i++)
    {
        scanf("%s",q[i]);
    }
    for(i=0;i<Q;i++)
    {
        for(j=0;j<N;j++)
        {
            if(strcmp(q[i],n[j])==0)
            {
              k[i]++;
            }
        }
    }
    for(i=0;i<Q;i++)
    {
      printf("%d\n",k[i]);
    }
    return 0;
}
