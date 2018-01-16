#include <stdio.h>
int main(void) {
int n,arr[10],sum=0,avg;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d\n",&arr[i]);
}
for(int i=0;i<n;i++)
{
sum+=arr[i];
}
avg=sum/n;
printf("%d",avg);
return 0;
}
