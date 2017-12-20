#include <stdio.h>
#include<string.h>
int main(void) {
    char ch[20];
    int s,temp=0;
    scanf("%s",ch);
    s=strlen(ch);
    for(int i=0;i<s;i+=2)
    {
    if(ch[i+1]!='\0')
    {
    temp=ch[i];
    ch[i]=ch[i+1];
    ch[i+1]=temp;
    }
    }
    printf("%s",ch);
    return 0;
}
