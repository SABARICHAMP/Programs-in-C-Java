#include <stdio.h>

int main(void) {
int count=0,n,m,arr1[15],arr2[15];
scanf("%d %d",&n,&m);
for(int i=0;i<m;i++)
{
	scanf("%d",&arr1[i]);
}
for(int j=0;j<m;j++)
{
	scanf("%d",&arr2[j]);
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(arr1[i]==arr2[j])
		{
			
			count=1;
		            break;
		            
		}
	
	}
	
}
if(count==1)
{
	printf("YES");
}
else
{
	printf("NO");
}
	return 0;
}
