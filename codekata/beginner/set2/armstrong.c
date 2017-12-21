#include <stdio.h>
int main(void) {
int n,temp,result,rem;
scanf("%d",&n);
temp=n;
while(n!=0)
{
	rem=n%10;
	result+=rem*rem*rem;
	n=n/10;
}
if(temp==result)
{
	printf("yes");
}
else
{
	printf("no");
}

	return 0;
}
