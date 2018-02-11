#include <stdio.h>
#include<string.h>
int main(void) 
{
char str[20];
int temp=0;
scanf("%s",str);
int len=strlen(str);
for(int i=0;i<len;i++)
{
	for(int j=i+1;j<len;j++)
	{
		if(str[i]>str[j])
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
		}
	}
}
printf("%s",str);
return 0;
}
