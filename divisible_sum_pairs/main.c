#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,i,j;
    int k=0;
    int ar[101];
   scanf("%d",&a);
   scanf("%d",&b);
   if(a>1 && a<101)
   {
      for(i=0;i<a;i++)
   {
       scanf("%d",&ar[i]);
   }
   }
   for(i=0;i<a;i++)
   {
       if(ar[i]>0 && ar[i]<101)
       {
       for(j=i+1;j<a;j++)
       {
           if((ar[i]+ar[j])%b==0)
           {
                k++;
           }
       }
       }
   }
    printf("%d\n",k);
    return 0;
}
