#include <stdio.h>
int main(void) {
int n,temp,reverse=0;
scanf("%d",&n);
temp=n;
while(n!=0)
{
	reverse=reverse*10;
            reverse+=n%10;
            n=n/10;
	
}
if(temp==reverse)
{
	printf("The number is a palindrome.\n");
}
else
{
	printf("\n The number is not a palindrome.");
}

   
	return 0;
}


