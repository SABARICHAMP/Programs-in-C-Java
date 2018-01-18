#include <stdio.h>
#include<string.h>
int main(void) {
char str[20];
int n,flag=0;
scanf("%s",str);
n=strlen(str);
for(int i=0;i<n;i++)
{
	if(str[i]=='0' || str[i]=='1')
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
}
	if(flag==1)
	{
		printf("yes");
 
	}
	else
	{
		printf("no");
	}
return 0;
}
