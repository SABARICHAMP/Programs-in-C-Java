#include <stdio.h>
int main(void) {
int temp=0,n,arr[10];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d\n",&arr[i]);
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
printf("%d %d",arr[0],arr[n-1]);
return 0;
}
