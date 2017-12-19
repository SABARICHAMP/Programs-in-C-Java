#include <stdio.h>
int main(void) {
	int a,b,i;
 printf("\n Enter the range:");
 scanf("%d%d",&a,&b);
 for(i=a+1;i<b;i++)
 {
 	if(i%2==0)
 	printf("%d\n",i);
 }
	return 0;
}
