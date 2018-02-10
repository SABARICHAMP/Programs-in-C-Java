#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[20];
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i+=2)
	{
		printf("%c",str[i]);
	}
	printf("\t");
	for(int i=1;i<len;i+=2)
	{
		printf("%c",str[i]);
	}
	return 0;
}
