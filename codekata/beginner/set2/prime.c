#include <stdio.h>
 int main(void) {
int i,n,j=0;
printf("\n Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		j++;
	}
}
if(j==2)
{
	printf("\nprime");
 
}
else
{
	printf("\nNot prime");
}
	return 0;
}
