#include <stdio.h> 
#include<string.h>
 int main() { 
  char s[20];
   scanf("%s",s);
   int ch,p;
   scanf("%d",&ch);
   scanf("%d",&p);
   int len;
   len=strlen(s);
  if(ch==1)
  {
       for(int i=p;i<len;i=i+p)
       {
         if(s[i-1]>64 && s[i-1]<91)
         {
           s[i-1]+=32;
         }
       }
       printf("%s",s);
  }
       
       
     if(ch==2)
     {
       for(int i=p;i<len;i=i+p)
       {
         if(s[i-1]>96 && s[i-1]<123)
         {
           s[i-1]-=32;
         }
       }
       printf("%s",s);
     }
      
        
   return 0; 
}
