#include <stdio.h>
int main()
{
   int n1,n2;
   printf("Enter the numbers:");
   scanf("%d %d",&n1,&n2);
   for(int i=999;i>=2;i--)
   {
       if(n1%i==0 && n2%i==0)
       {
           printf("%d",i);
           break;
       }
   }
    return 0;
    }
