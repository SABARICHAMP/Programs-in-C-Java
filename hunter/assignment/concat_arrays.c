#include <stdio.h>

int main(void) {
	int arr1[10],arr2[10];
	int n1,n2;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d\n",&n2);
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<n1;i++)
	{
	printf("%d ",arr1[i]);
	}
	for(int i=0;i<n2;i++)
	{
	printf("%d ",arr2[i]);	
	}
	return 0;
}
