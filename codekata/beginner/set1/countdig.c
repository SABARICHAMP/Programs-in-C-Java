#include <stdio.h>
int main(void) {
int count=0,n;
scanf("%d",&n);
while(n!=0)
{
	n=n/10;
	count++;
}
printf("\n No.of digits:%d",count);
	return 0;
}
