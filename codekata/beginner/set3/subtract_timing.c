#include <stdio.h>
int main(void) 
{
int a,b,a1,b1,hr,min;
scanf("%d %d\n",&a,&b);
scanf("%d %d\n",&a1,&b1);
if(a>a1)
{
hr=a-a1;
}
else
{
hr=a1-a;
}
if(b>b1)
{
min=b-b1;
}
else
{
min=b1-b;
}
printf("%d %d\n",hr,min);
return 0;
}
