#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
scanf("%s",str);
int flag=0;
int len=strlen(str);
for(int i=0;i<len;i++)
{
	if(str[i]!=str[len-i-1])
	{
		flag=1;
		break;
	}
}
if(flag)
{
	printf("no");
}
else
{
	printf("yes");
}

return 0;
}
