#include <stdio.h>
int main(void) {
int sum=0,n,arr[20];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
sum+=arr[i];	
}
printf("%d",sum);
return 0;
}
