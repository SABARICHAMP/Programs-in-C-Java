#include <stdio.h>
int main(void) {
	int i,n,j;
	scanf("%d",&n);
	int arr[15];
	for(i=0;i<n;i++)
	{
	scanf("%d ",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(arr[i]+arr[j]==arr[k])
			{
				printf("%d %d %d\n",arr[i],arr[j],arr[k]);
			}
		}
	}
	
	}
	return 0;
}
