#include <stdio.h>
typedef struct nd
{
int data;
struct nd *next;
}node;
void display();
node *head,*f,*s,*temp;
int main(void) {

	head=(node*)malloc(sizeof(node));
	f=(node*)malloc(sizeof(node));
	s=(node*)malloc(sizeof(node));
	head->data=10;
	head->next=f;
	f->data=20;
	f->next=s;
	s->data=30;
	s->next=NULL;
	display();
}
	
	void display()
	{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	}
