#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=0,n=0,i,k[26]={0},m[26]={0},b=0;
    char s[1000],p;
    fgets(s,1000,stdin);
    for(p='A';p<='Z';p++)
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(p==s[i])
              {
                 k[j]=1;
              }
        }
        j++;
    }
    for(p='a';p<='z';p++)
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(p==s[i])
              {
                  m[n]=1;
              }
        }
        n++;
    }
    for(i=0;i<26;i++)
    {
       if ((k[i]||m[i])==0)
            b=1;
    }
    if(b==1)
    {
        printf("not pangram");
    }
    else
    {
        printf("pangram");
    }
}
