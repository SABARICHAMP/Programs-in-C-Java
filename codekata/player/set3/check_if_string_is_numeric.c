#include <stdio.h>
int main()
{
   char str[20];
   int flag=0;
   printf("Enter the string:");
   scanf("%s",str);
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]>='0' && str[i]<='9')
       {
          flag=1;
       }
       else
       {
           flag=0;
           break;
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
