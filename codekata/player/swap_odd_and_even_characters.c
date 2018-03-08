#include <stdio.h>
#include <string.h>
int main(void) 
{
	char str[20];
	int temp=0;
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i+=2)
	{
		temp=str[i];
		str[i]=str[i+1];
		str[i+1]=temp;
	}
	printf("%s",str);
	return 0;
}
