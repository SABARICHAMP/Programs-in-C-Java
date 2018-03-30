#include <stdio.h>
int main()
{
    int p1[3],p2[3];
	int i,flag;
	printf("Enter the three points:");
	for(i=0;i<3;i++)
	{
		scanf("%d %d",&p1[i],&p2[i]);
	}
	for(i=0;i<2;i++)
	{
		if(p1[i]==p1[i+1] || p2[i]==p2[i+1])
		{
		flag=1;	
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
    return 0;
    }
