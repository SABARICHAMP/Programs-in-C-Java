#include <stdio.h>
int main(void) 
{
	int n,digit=0,rem=0;
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		n=n/10;
		rem=digit%2;
	
		if(rem!=0)
		{
			printf("%d ",digit);
		}
	}
	return 0;
}
