#include<stdio.h>
int main()
{
int a,n,d,sum=0;
scanf("%d %d %d",&a,&n,&d);
 for(int i=0;i<n;i++)
    {
        sum=sum+(a+i*d);
    }
printf("%d",sum);
return 0;
}
