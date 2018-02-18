#include <stdio.h>
int main(void) {
int l,b,h,ts,vol;
scanf("%d %d %d",&l,&b,&h);
ts=2*((l*b)+(l*h)+(h*b));
vol=l*b*h;
printf("%d %d",ts,vol);
return 0;
}
