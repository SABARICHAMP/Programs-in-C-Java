#include <stdio.h>
int main(void) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c)
	{
		printf("%d is greater",a);
		
	}
	else if(b>c)
	{
		printf("%d is greater",b);
		
	}
	else
	{
		printf("%d is greater",c);
	}
	return 0;
}
