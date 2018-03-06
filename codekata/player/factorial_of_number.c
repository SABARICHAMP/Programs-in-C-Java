#include <stdio.h>
#include<string.h>
int main(void) 
{ 
int n,f=1;
scanf("%d",&n);
for(int i=5;i>1;i--)
{
	f=f*i;
}
printf("%d",f);
return 0;
}
