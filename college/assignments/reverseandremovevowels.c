#include <stdio.h>
#include<string.h>
int main(void) {
int len,i,j,c=0;
char str[20],str1[20];
scanf("%s",str);
len=strlen(str);
for(i=len-1;i>=0;i--)
{
	str1[c++]=str[i];
}
for(i=0;i<len;i++)
{
	if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
    {
    	for(j=i;j<len;j++)
    	{
    		str1[j]=str1[j+1];
    	}
    	len--;
    }
	
}
printf("The reversed string after removing the vowels:%s\n",str1);
	return 0;
}
