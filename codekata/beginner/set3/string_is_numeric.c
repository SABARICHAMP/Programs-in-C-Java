#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) 
{
int len,digit=0;
char str[10];
scanf("%s",str);
len=strlen(str);
for(int i=0;i<len;i++)
{
if(isdigit(str[i]))
digit=0;
else
digit=1;
}
if(digit==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
