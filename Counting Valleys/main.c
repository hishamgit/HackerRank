#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,i,k=0,c=0;
    char p[1000000];
    scanf("%d",&s);
    for(i=0;i<=s;i++)
    {
        scanf("%c",&p[i]);
    }
    for(i=0;i<=s;i++)
    {
        if(p[i]=='U')
        {
           k++;
        }
        else if(p[i]=='D')
        {
            k--;
        }
        if(k==0)
        {
            if(p[i]=='U')
                c++;
        }
    }
    printf("%d\n",c);
     printf("%d\n",s);
    for(i=0;i<=s;i++)
    {
        printf("%c",p[i]);
    }
    return 0;
}
