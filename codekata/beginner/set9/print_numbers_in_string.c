#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			printf("%c",str[i]);
		}
	}
	
	return 0;
}
