#include <stdio.h>
int main(void) { 
	int arr[20],n,k,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			printf("yes");
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("no");
	}
	return 0;
}
