#include<stdio.h>
#include<string.h>
int main()
{
 char str[25];
 scanf("%s",str);
 int count=1,max=0;
 char maxChar=0;
 int len=strlen(str);
 for(int i=1;i<len;i++)
 {
 if(str[i]==str[i-1])
 {
        count++;
 } else 
 {
        if(count>max){ 
            max=count;
            maxChar=str[i-1];
        }
        count = 1; 
    }
 }
 if(count>max){
    max=count; 
    maxChar=str[len-1];
}
 printf("%c",maxChar);
 return 0;
}
