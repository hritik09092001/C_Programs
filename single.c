#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodeType
{
int info;
struct nodeType *next;
}node;

node *head=NULL;
void insert(node **head,int item)
{
node *ptr;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL)
ptr->next=NULL;
else
ptr->next=*head;
*head=ptr;
}
void traversal(node **head)
{

node *ptr;
ptr=*head;

while(ptr!=NULL)
{
printf(" %d ",ptr->info);
ptr=ptr->next;
}
}

void insertFromEnd(node **head,int item)
{
node *ptr;
node *loc=*head;

ptr=(node *)malloc(sizeof(node));
ptr->info=item;
while(loc->next!=NULL)
loc=loc->next;
if(*head==NULL)
*head=ptr;
else
loc->next=ptr;
ptr->next=NULL;
}
void deleteFromBeg(node **head)
{
 node *ptr;
 ptr=*head;
 *head=ptr->next;
 ptr->next=NULL;
 free(ptr);
}
void deleteFromEnd(node **head)
{
node *temp,*loc=*head;
if(loc->next==NULL)
{
*head=NULL;
free(loc);
}
else
{
while(loc->next!=NULL)
{
temp=loc;
loc=loc->next;

}
temp->next=NULL;
free(loc);
}
}

void InsertAfterVal(node **head,int val,int item)
{
node *ptr,*loc=*head;
ptr=(node *)malloc(sizeof(node));
ptr->info=item;
if(loc->next==NULL){
(*head)->next=ptr;
ptr->next=NULL;}
else{
while(loc->info!=val)
loc=loc->next;
ptr->next=loc->next;
loc->next=ptr;
}
}
int CountNodes(node **head)
{
int c=1;
node *loc=*head;
while(loc->next!=NULL)
{
loc=loc->next;
c++;
}
return c;
}


void main()
{
node *head=NULL;
int ch,count,item,val;
clrscr();
while(1)
{
printf("Enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter an Integer Value");
scanf("%d",&item);
insert(&head,item);
break;
case 2:
traversal(&head);
break;
case 3:
printf("Enter the item");
scanf("%d",&item);
insertFromEnd(&head,item);
break;
case 4:
deleteFromBeg(&head);
break;
case 5:
deleteFromEnd(&head);
break;
case 6:
printf("Enter the val where to insert and item");
scanf("%d%d",&val,&item);
InsertAfterVal(&head,val,item);
break;
case 7:
count=CountNodes(&head);
printf("The No of Nodes is=%d",count);

break;
default:

exit(0);
}
}
getch();
}
