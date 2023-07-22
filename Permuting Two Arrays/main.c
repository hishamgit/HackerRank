#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q,n[10],k[10],i,v,c,z,s,m[1001],x,j,a[10][1001],b[10][1001];
    for(int f=0;f<1000;f++)
    {
        m[f]=0;
    }
    scanf("%d",&q);
    for(j=0;j<q;j++)
    {
        scanf("%d",&n[j]);
        scanf("%d",&k[j]);
        for(i=0;i<n[j];i++)
        {
            scanf("%d",&a[j][i]);
        }
        for(i=0;i<n[j];i++)
        {
            scanf("%d",&b[j][i]);
        }
    }
    for(z=0;z<q;z++)
    {
        for(i=0;i<n[z];i++)
        {
            for(j=0;j<n[z];j++)           //to check for equality with k[z] //
            {
               m[j]=(a[z][i]+b[j][z]);
            }
             for(int f=0;f<1001;f++)
            {
                printf("%d\t",m[f]);
            }
            for(c=0;c<n[z];c++)
            {
                if(m[c]>=k[z])
                {
                    x=m[c];
                    break;
                }
                else
                    goto by;
            }
            for(v=c;v<n[z];v++)
            {
                if(m[v]>=k[z] && m[v]<=x)
                    {
                        x=m[v];
                        s=v;
                    }
            }
            b[z][i]=b[z][i]+b[z][s];
            b[z][s]=b[z][i]-b[z][s];
            b[z][i]=b[z][i]-b[z][s];
            for(int f=0;f<1001;f++)
            {
                m[f]=0;
            }
        }

       printf("YES\n");
    by:
       printf("NO\n");
    }
    return 0;
}
