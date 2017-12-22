#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	int len,i,count=0,count1=0;
	scanf("%s",str);
	len=strlen(str);
            for(i=0;i<len;i++)
            {
            	if(str[i]=='\0')
	{
		printf("null");
	}
            	else if(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z')
            	{
            		count++;
            	}
            	else
            	{
            		count1++;
            	}
            }
	
	printf("alpha:%d\n",count);
	printf("num:%d\n",count1);
	return 0;
}
