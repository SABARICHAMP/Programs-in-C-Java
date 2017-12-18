#include <stdio.h>
int count =0;    
void main()
{
do
{
static int count=0;
++count;
printf("%d\n",count);
}
while(++count<=5);
printf("%d\n",count);
return 0;
}
