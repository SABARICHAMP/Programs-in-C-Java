#include <stdio.h>
#include <string.h>
int main(void) 
{
	char str[15];
	int n,length;
	scanf("%s",str);
	scanf("%d",&n);
	int len=strlen(str);
	for(int i=0;i<n;i++)
	{
	            length=len-1;
		printf("%c",str[length]);
		len--;
		
	}
	return 0;
}
