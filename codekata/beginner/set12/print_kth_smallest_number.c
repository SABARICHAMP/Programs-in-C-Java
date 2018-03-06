#include <stdio.h>
int main(void) { 
	int arr[20],temp=0,n,k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
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
	printf("%d",arr[1]);
	return 0;
}
