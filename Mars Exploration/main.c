#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[100],p[100];
    int k=0;
    scanf("%s",s);
    for(int i=0;i<100;i=i+3)
    {

            p[i]='S';
            p[i+1]='O';
            p[i+2]='S';
    }

    for(int j=0;j<strlen(s);j++)
    {
        if(s[j]!=p[j])
        {
            k++;
        }
    }
    printf("%d",k);
    return 0;

}
