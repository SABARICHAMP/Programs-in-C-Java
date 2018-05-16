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
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
for(int i=0;i<n;i++)
{
	if(arr[i]==arr[i+1])
	{
		
	printf("%d ",arr[i]);
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]==arr[j+1])
		{
			arr[n]='\0';
			n--;
			
			
		}
		
	}
	
		
	}
	else
	{
		printf("unique");
		break;
	}
}
			
	return 0;
}
