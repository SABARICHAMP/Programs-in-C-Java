#include <stdio.h>
int main(void) {
int temp=0,a,b;
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
return 0;
}
