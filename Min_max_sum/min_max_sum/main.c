#include <stdio.h>
#include <math.h>

int main()
{
    long int a[5],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
/*sort*/
    long int temp=0;
    for(i=0;i<5;i++)
    {
      for(j=0;j<4-i;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j+1];
              a[j+1]=a[j];
              a[j]=temp;
          }
      }
    }
   long int min_sum=a[0]+a[1]+a[2]+a[3];
   long int max_sum=a[1]+a[2]+a[3]+a[4];

    printf("%ld %ld",min_sum,max_sum);

    return 0;
}

