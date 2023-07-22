#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]<s[i])
            {
                s[i]=s[i]+s[j];
                s[j]=s[i]-s[j];
                s[i]=s[i]-s[j];
            }
        }
    }
    for(i=0;i<n-2;i++)
    {
        if(s[i]<s[i+1]+s[i+2])
        {
            printf("%d\n%d\n%d",s[i+2],s[i+1],s[i]);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    return 0;
}
