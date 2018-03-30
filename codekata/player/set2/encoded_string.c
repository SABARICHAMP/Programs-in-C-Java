#include <stdio.h>
int main()
{
   char array[20];
   int i;
   printf("Enter the string:");
   scanf("%s",array);

   for(int i=0;array[i]!='\0';i++)
   {
       printf("%c",array[i]+3);
   }
    return 0;
}
