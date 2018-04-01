#include <stdio.h>
#include <math.h>
int main()
{
    char str1[20],str2[20];
    int k,count=0;
    printf("Enter the two strings:");
    scanf("%s %s %d",str1,str2,&k);
   
        for(int j=0;str1[j]&&str2[j]!='\0';j++)
        {
            if(str1[j]!=str2[j])
            {
                count++;
            }
        }
    
    if(count==k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
