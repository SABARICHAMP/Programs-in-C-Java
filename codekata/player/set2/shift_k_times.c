#include <stdio.h>
int main()
{
int arr[15],n,k,temp=0;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(int j=0;j<k;j++)
{
for(int i=n;i>0;i--)
{
	temp=arr[i];
	arr[i]=arr[i-1];
	arr[i-1]=temp;
}
}
for(int i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
	return 0;
}
