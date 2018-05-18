#include <stdio.h>

int main(void) {
int n,temp=0,arr[15];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d ",&arr[i]);
}
for(int i=0;i<n;i++)
{
	if(i%2!=0 && arr[i]%2==0)
	{
		printf("%d ",arr[i]);
	}
	if(i%2==0 && arr[i]%2!=0)
	{
		printf("%d ",arr[i]);
	}
	
}

	return 0;
}
