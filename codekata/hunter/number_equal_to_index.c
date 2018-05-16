#include <stdio.h>

int main(void) {
int n,temp=0,j=0,count=0,arr[15];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d ",&arr[i]);
}
for(int i=0;i<n;i++)
{
	if(i==arr[i])
	{
		arr[j]=arr[i];
		j++;
		count++;
	}
}
if(count==0)
{
	printf(-1);
}
else
{

	for(int j=0;j<count;j++)
	{
		for(int k=j+1;k<count;k++)
		{
			if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
		
		
for(int i=0;i<count;i++)
{
		
	printf("%d ",arr[i]);
}
}			
	return 0;
}
