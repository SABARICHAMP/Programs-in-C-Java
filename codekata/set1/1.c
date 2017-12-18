#include <stdio.h>
int main(void) {
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("POSITIVE");
	}
	else if(n<0)
	{
		printf("NEGATIVE");
	}
	else
	{
		printf("ZERO");
	}
	return 0;
}
