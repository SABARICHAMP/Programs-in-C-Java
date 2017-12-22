#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
