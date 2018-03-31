#include <stdio.h>
#include<string.h>
int main()
{
   char str[50][50],temp[50];
   int n;
   printf("Enter the number of strings:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%s",str[i]);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(strcmp(str[i],str[j])>0)
           {
               strcpy(temp,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],temp);
             
               
           }
       }
   }
   printf("Sorted strings are:");
   for(int i=0;i<n;i++)
   {
       printf("\n%s",str[i]);
   }
    return 0;
    }
