#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct nodeType
{
struct nodeType *left;
int info;
struct nodeType *right;
}bst;
bst *root=NULL;

void insertion(bst **root,int item)
{
bst *ptr,*parent,*loc;
ptr=(bst *)malloc(sizeof(bst));
ptr->info=item;
ptr->left=ptr->right=NULL;
if(*root==NULL)
*root=ptr;
else
{
loc=*root;
while(loc!=NULL)
{
parent=loc;
if(item>loc->info)
loc=loc->right;
else
loc=loc->left;
}
if(item>parent->info)
parent->right=ptr;
else
parent->left=ptr;
}

}
void Inorder(bst *root)
{
if(root!=NULL)
{
Inorder(root->left);
printf("%d  ",root->info);
Inorder(root->right);
}
}

void preorder_Traverse(bst *root)
{
if(root!=NULL)
{
printf("%d  ",root->info);
preorder_Traverse(root->left);
preorder_Traverse(root->right);
}
}

void main()
{
int ch,item;

clrscr();
while(1)
{
printf("Enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("ENter the Item");
scanf("%d",&item);
insertion(&root,item);
break;
case 2:
preorder_Traverse(root);
break;
case 3:
Inorder(root);
break;
case 4:
Postorder(root);
break;
default:
exit(0);
}
}
getch();
}
