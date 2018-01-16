#include <stdio.h>
int main(void) 
{
int n,rn,rem,digit;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rn=rn*10+rem;
n=n/10;
}
while(rn!=0)
{
digit=rn%10;
rn=rn/10;
printf("%d ",digit);
}
return 0;
}
