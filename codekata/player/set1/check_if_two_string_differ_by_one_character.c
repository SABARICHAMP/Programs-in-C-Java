#include <stdio.h>
int main()
{
char str1[20],str2[20];
int count=0;
scanf("%s %s",str1,str2);
for(int i=0;str1[i]!='\0';i++)
{
		if(str1[i]==str2[i])
		{
		count=0;	
		}
		else
		{
			count++;
		}
}
if(count==1)
{
	printf("yes");
}
else
{
	printf("no");
}
	
	return 0;
}
