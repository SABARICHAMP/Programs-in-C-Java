#include <stdio.h>

int main(void) {
	int l,r;
	scanf("%d %d",&l,&r);
	for(int i=2;i<=999;i++)
	{
		if(i%l==0 && i%r==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
