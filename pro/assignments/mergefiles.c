#include <stdio.h>
#include<stdlib.h>
int main(void) {
char c,str1[1000],str2[1000];
FILE *fp1,*fp2,*fp3;
fp1=fopen("First.txt","w");
gets(str1);
fp2=fopen("Second.txt","w");
gets(str2);
fp3=fopen("Third.txt","w");
if(fp1==NULL||fp2==NULL||fp3==NULL)
{
printf("Cannot open files");
exit(0);
}
while((c=fgetc(fp1)!=EOF))
{
fputc(c,fp3);
}
while((c=fgetc(fp2)!=EOF))
{
fputc(c,fp3);
printf("%c",c);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}
