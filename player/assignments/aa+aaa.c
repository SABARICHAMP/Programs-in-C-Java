#include <stdio.h>
int main(void) 
{
	int a,sum=0;
	scanf("%d",&a);
	int count=a;
	for(int i=1;i<=3;i++)
	{
		count=count*10;
		a=a+count;
		sum=sum+a;
	}
	printf("%d\n",sum+9);
	return 0;
}
