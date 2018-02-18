#include <stdio.h>
int main(void) {
	int n,remainder,pro=1;
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		pro=pro*remainder;
		n=n/10;
	}
	printf("%d",pro);
	return 0;
}
