#include <stdio.h>
int main(void) {
int a,n,d,tn,sum=0;	
scanf("%d %d %d",&a,&n,&d);
sum = (n * (2 * a + (n - 1)* d ))/ 2;
printf("%d\n",sum);
return 0;
}
