#include <stdio.h>
int main(void) {
int n,input[20],output[20],pro=1,num;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d ",&input[i]);
   }
for(int i=0;i<n;i++)
{
    pro*=input[i];
}
for(int i=0;i<n;i++)
{
    num=pro/input[i];
    output[i]=num;
}
for(int j=0;j<n;j++)
{
    printf("%d ",output[j]);
}
	return 0;
}
