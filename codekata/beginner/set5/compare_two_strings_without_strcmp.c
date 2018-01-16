#include <stdio.h>
int main(void) {
char str1[20],str2[20];
int i=0;
scanf("%s\n",str1);
scanf("%s\n",str2);
i = 0;
while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i]==str2[i])
   {
      printf("\n",str1[i]);
   }
      else if(str1[i]>str2[i])
      {
      printf("\n",str1[i]);	
      }
      else
      {
      	printf("\n",str1[i]);
      }
      
      
return 0;
}
