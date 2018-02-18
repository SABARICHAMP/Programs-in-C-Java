#include <stdio.h>
int main(void) {
	int n,k,arr[20];
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d ",&arr[i]);
	}
	printf("%d",arr[k]);
	return 0;
}
