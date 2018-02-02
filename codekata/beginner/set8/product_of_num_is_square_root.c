#include <stdio.h>
int main(void) 
{
	int m,n,c;
	scanf("%d %d",&m,&n);
	c=n*m;
	for(int i=0;i<=c;i++)
	{
		if(c==i*i)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
}
