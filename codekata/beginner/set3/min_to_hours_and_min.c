#include <stdio.h>
int main(void) 
{
int time,min,hour;
scanf("%d",&time);
min=time%60;
if(min==0)
{
hour=time/60;
}
else
{
hour=(time-min)/60;
}
printf("%d %d\n",hour,min);
return 0;
}
