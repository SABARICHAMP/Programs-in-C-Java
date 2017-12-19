#include <stdio.h>
int main(void) {
	int n,exp;
	long result=1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Enter the exponent:\n");
	scanf("%d",&exp);
    while(exp!=0)
    {
    	result*=n;
    	--exp;
    }
    printf("Power of number is:%d\n",result);
	return 0;
}
