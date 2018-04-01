#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,num,count=0;
    float square;
    printf("Enter the range of numbers:");
    scanf("%d %d",&m,&n);
    for(int i=m;i<n;i++)
    {
    square=sqrt(i);
    num=square;
    if(num==square)
    {
        count++;
    }
    }
    printf("%d",count);
    return 0;
}
