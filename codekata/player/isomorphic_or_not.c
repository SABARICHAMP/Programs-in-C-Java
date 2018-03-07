#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[20],str2[20];
	scanf("%s %s",str1,str2);
	int m,n,a,b,c,d,e,f,flag=0;
	m=strlen(str1);
	n=strlen(str2);
	if(m!=n)
	{
		printf("no");
		
	}
	else
	{
		for(int i=0;i<m;i++)
		{
			for(int j=i+1;j<m;j++)
			{
				a=str1[i];
				b=str1[j];
				c=str2[i];
				d=str2[j];
				e=a-b;
				f=c-d;
				if(e==f)
				{
					flag=1;
					
				}
				else
				{
					flag=0;
				}
			}
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
