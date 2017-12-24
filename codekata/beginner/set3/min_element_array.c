#include <stdio.h>
int min(int arr[],int n)
{
int minimum,temp=0;
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
minimum=arr[0];
return minimum;
}
int main(void) 
{
int n;
int minimum,arr[15];
scanf("%d",&n);
minimum=min(arr,n);
printf("%d\n",minimum);
return 0;
}
