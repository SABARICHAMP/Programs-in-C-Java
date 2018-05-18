#include <stdio.h>

int main(void) {
int n,arr1[15];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&arr1[i]);
}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(arr1[i]+arr1[j]==0)
		{
			
			printf("%d %d",arr1[i],arr1[j]);
			break;
		       
		}
	
	}
	
}
	return 0;
}
