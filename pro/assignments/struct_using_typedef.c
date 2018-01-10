#include <stdio.h>
typedef struct rooms
{
int room_no;
char occupant_name[20];
int entry_date;
int occupants;
int concession;
int booked;
}hotel[30];
int main(void) 
{
hotel h;
for(int i=0;i<3;i++)
{
printf("Room.no:\n");
scanf("%d\n",&h[i].room_no);
printf("Occupant name:\n");
scanf("%s\n",h[i].occupant_name);
printf("Entry date:\n");
scanf("%d\n",&h[i].entry_date);
printf("No.of.occupants:\n");
scanf("%d\n",&h[i].occupants);
printf("Concession:\n");
scanf("%d\n",&h[i].concession);
printf("Status of the room:");
scanf("%d\n",&h[i].booked);
}
for(int i=0;i<3;i++)
{
if(h[i].booked==0)
{
printf("\nVacant rooms:");
printf("\nRoom_no:%d",h[i].room_no);
}
}
return 0;
}

