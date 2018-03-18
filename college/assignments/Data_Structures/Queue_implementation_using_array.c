#include <stdio.h>
int front=-1,rear=-1,count=0,size=3,arr[10];
void enqueue()
{
    if(count!=size)
    {
        int item;
        printf("Insert the element");
        scanf("%d",&item);
        if(front==-1)
        {
            front=rear=0;
            arr[rear]=item;
        }
        else
        {
            rear=rear+1;
            arr[rear]=item;
        }
        count++;
    }
    else
    {
        printf("Queue overflow");
    }
    }
void dequeue()
{
if(front==-1 || front>rear)
{
   printf("Queue underflow");
}
else
{
  
  front=front+1;
  }
}
void display()
{
	if(front==-1 || front>rear)
	{
		printf("Queue is empty");
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d ",arr[i]);
		}
	}
}

int main(void) {
int ch;
while(1)
{
printf("\n1.Insert 2.Delete 3.Display 4.Exit");
printf("\nPlease enter your choice");
scanf("\n%d",&ch);
switch(ch)
{
	case 1:
	enqueue();
	break;
	
	case 2:
	dequeue();
	break;
	
	case 3:
	display();
	break;
	
	case 4:
	exit(1);
	break;
	
	default:
	printf("wrong choice");
	
}
}
    return 0;
}
