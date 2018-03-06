#include <stdio.h>
int main(void) { 
	int arr[20],arr1[10],n,k,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]%2!=0)
			{
				printf("%d",arr[j]);
				break;
			}
		}
	break;
		}
	}
	return 0;
}
