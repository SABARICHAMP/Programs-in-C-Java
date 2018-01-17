#include <stdio.h>
int main(void) {
char str[20];
int n;
scanf("%s %d",str,n);
for(int i=0;i<3;i++)
{
	printf("%c",str[i]);
}
return 0;
}
