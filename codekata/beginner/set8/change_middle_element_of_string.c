#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int i,len;
scanf("%s",str);
len=strlen(str);
i=len/2;
if(len%2==0)
{
str[i]='*';
str[i-1]='*';
printf("%s",str);
}
else
{
str[i]='*';
printf("%s",str);
}
return 0;
}
