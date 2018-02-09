#include <stdio.h>
int main(void) 
{
int n1,n2;
char c;
for(int i=0;i<4;i++)
{
scanf("%d %c %d",&n1,&c,&n2);
if(c=='/')
{
	printf("%d",n1/n2);
	printf("\n");
}
else
{
	printf("%d",n1%n2);
	printf("\n");
}
}
return 0;
}
