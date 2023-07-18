#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodeType
{
struct nodeType *prev;
int info;
struct nodeType *next;
}node;
node *head=NULL;
node *tail=NULL;
void insert_From_Beg(node **head,node **tail,int item)
{
node *ptr;
ptr=(node*)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL)
{
ptr->next=ptr->prev=NULL;
*head=ptr;
*tail=ptr;

}
else
{
ptr->next=*head;
(*head)->prev=ptr;
ptr->prev=NULL;
*head=ptr;
*head=ptr;
}
}
void  Traverse(node *head)
{
node *ptr;
ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->info);
ptr=ptr->next;
}
}
 void insert_from_end(node **head,node **tail,int item)
 {
 node *ptr,*loc;
 ptr=(node *)malloc(sizeof(node));
 ptr->info=item;

 if(*head==NULL)
 {
 ptr->prev=ptr->next=NULL;
 *head=ptr;
 *tail=ptr;
 }
 else
 {
 ptr->next=NULL;
 loc->next=ptr;
 ptr->prev=loc;
*tail=ptr;
 }
 }

 void DeleteFromBeg(node **head)
 {
 node *ptr;
 if(*head==NULL)
 {
 printf("The List is Null");
 }
 else
 {

*head=(*head)->next;
(ptr->next)->prev=NULL;
 }
 }

 void DeleteFromEnd(node **tail)
 {
 if(*tail==NULL)
 {
 printf("The List is Empty");
 }
 else
 {
 ((*tail)->prev)->next=NULL;
 *tail=(*tail)->next;
 }
 }

void main()
{
 int n,item;
 clrscr();
 while(1)
 {
 printf("Enter the choice");
 scanf("%d",&n);
 switch(n)
 {
 case 1:
 printf("Enter the item");
 scanf("%d",&item);
 insert_From_Beg(&head,&tail,item);
  break;
 case 2:
 Traverse(head);
 break;
 case 3:
 printf("Enter the item");
 scanf("%d",&item);
 insert_from_end(&head,&tail,item);
 break;
 case 4:
 DeleteFromBeg(&head);
 break;
 case 5:
 DeleteFromEnd(&tail);
 break;
 default:

 exit(0);

 }
 }
 getch();
}
