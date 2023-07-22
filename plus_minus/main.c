#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int N , a[100], i;
float f1=0,f2=0,f3=0;
printf("enter total no");
scanf("%d",&N);
for(i=0;i<N;i++)
{ scanf("%d",&a[i]);
if(a[i]>0)
f1++;
else if(a[i]<0)
f2++;
else
f3++;
}
printf("%f\n%f\n%f",f1/N,f2/N,f3/N);
return 0;
}
