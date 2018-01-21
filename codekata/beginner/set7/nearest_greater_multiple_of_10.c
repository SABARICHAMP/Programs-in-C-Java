#include <stdio.h>
int main(void) {
int n,r,res;
scanf("%d",&n);
r=n%10;
res=n+(10-r);
printf("%d",res);
return 0;
}
