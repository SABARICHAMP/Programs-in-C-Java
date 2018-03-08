#include<stdio.h>
#include<math.h>
int main()
{
 int n,temp=0,rem,quo;
 scanf("%d",&n);
 quo=n;
 do
 {
      rem=quo%10;
      temp=temp+pow(rem,2);
      quo=quo/10;
 }
 while(quo%10!=0);
 printf("%d",temp);
 return 0;
}
