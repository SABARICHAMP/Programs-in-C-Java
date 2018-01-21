#include<stdio.h>
int main()
{
int n,i,a,b,res;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=pow(2,i);
if(a>n)
{
b=i;
break;
}
}
res=pow(2,b);
printf("%d",res);
return 0;
}
