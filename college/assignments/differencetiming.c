#include <stdio.h>

int main(void) {
	int a,b,a1,b1,hr,min,min1;
	printf("Start time:\n");
            scanf("%d%d",&a,&b);
            printf("%d:%d\n",a,b);
	printf("End time:\n");
	scanf("%d%d",&a1,&b1);
	printf("%d:%d\n",a1,b1);
	printf("The difference between two timings is:\n");
	if(a>a1)
	{
		hr=a-a1;
	}
	else
	{
		hr=a1-a;
	}
		
		if(b>b1)
	{
		min=b-b1;
	}
	else
	{
		min=b1-b;
	}
	printf("%d:%d\n",hr,min);
	min1=(hr*60)+min;
	printf("%d MINUTES",min1);



	return 0;
}
