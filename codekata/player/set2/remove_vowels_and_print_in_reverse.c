#include<stdio.h>
#include<string.h>
int main()
{
 char str[10];
 scanf("%s",str);
 int len=strlen(str);
 for(int i=len;i>=0;i--)
 {
 if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'&& str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U')
 {
 	printf("%c",str[i]);
 }
 }
 
 return 0;
}
