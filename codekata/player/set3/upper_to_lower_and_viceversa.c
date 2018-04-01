#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter the string:");
    scanf("\n%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]-=32;
        }
        else
        {
            str[i]+=32;
        }
    }
    printf("%s",str);
    return 0;
}
