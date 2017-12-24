#include <stdio.h>

int main(void) {
int n;
int arr[15],temp=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]>arr[j])			
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
if(n%2==0)
{
printf("%d %d",arr[(n-1)/2],arr[n/2]);
}
else
{
printf("%d",arr[(n-1)/2]);
}
return 0;
}
