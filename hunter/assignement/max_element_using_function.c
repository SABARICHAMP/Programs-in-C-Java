#include <stdio.h>
int max(int arr[],int n)
{
int maximum,temp=0;
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(arr[i]<arr[j])			
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
maximum=arr[0];
return maximum;
}
int main(void) 
{
int n;
int maximum,arr[15];
scanf("%d",&n);
maximum=max(arr,n);
printf("%d\n",maximum);
return 0;
}
