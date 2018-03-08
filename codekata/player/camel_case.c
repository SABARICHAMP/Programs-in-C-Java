#include <stdio.h>
int main()
{
	char str[50];	
	int j;
	scanf("%[^\n]s",str); 
	for(j=0; str[j]!='\0'; j++)
	{
		if(j==0)
		{
			if((str[j]>='a' && str[j]<='z'))
				str[j]=str[j]-32; 
			continue; 
		}
		if(str[j]==' ')
		{
			++j;
			if(str[j]>='a' && str[j]<='z')
			{
				str[j]=str[j]-32; 
				continue; 
			}
		}
		
	}
	
	printf("%s",str);
	
	return 0;
}
