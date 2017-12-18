#include <stdio.h>
int main(void) {
	char ch;
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z')
	{
		printf("IT IS AN ALPHABET");
		
	}
	else
	{
		printf("IT IS NOT AN ALPHABET");
	}
	
	return 0;
}
