#include <stdio.h>

int main(void) {
int n,temp=0,arr[15];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d ",&arr[i]);
}

	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
		
		
for(int i=0;i<n;i++)
{
		
	if(arr[i]==arr[i+1])
	{
		printf("%d",arr[i]);
		break;
	
	}
	
}

	return 0;
}
