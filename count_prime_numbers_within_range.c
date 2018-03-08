#include <stdio.h>
int main()
{
	int a,b,flag,count=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			count++;
		}
	}
	printf("%d",count);
	
	return 0;
}
