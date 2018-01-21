#include<stdio.h>
#include<string.h>
int main()
{
int a,b,n,j=0;
scanf("%d",&n);
scanf("%d %d",&a,&b);
for(int i=a+1;i<b;i++)
{
	if(i==n)
	{
		j++;
	}
}
if(j>=1)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
