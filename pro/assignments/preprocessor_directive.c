#include <stdio.h>
#define TOP 3
int main(void) {
int array[10],n,temp;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d\n",&array[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(array[i]<array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
for(int i=0;i<TOP;i++)
{
printf("%d\n",array[i]);
}
return 0;
}

