#include <stdio.h>
int main(void) {
	int i,n,j,count=0;
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
			if(arr[i]==arr[j])
			count++;
		}
		if(count==1)
		printf("%d",arr[i]);
	}
	return 0;
}
