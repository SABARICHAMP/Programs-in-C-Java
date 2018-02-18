#include <stdio.h>
int main(void) {
	int n,arr[20];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d ",&arr[i]);
	            if(arr[i]!=i)
	            {
	            	printf("%d",i);
	            	break;
	            }
		
	}
	return 0;
}
