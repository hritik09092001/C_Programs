#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
typedef int G;
G *ptr,i,n,j,n2;
clrscr();
printf("Enter the Number of input");
scanf("%d",&n);
ptr=(G *)calloc(n,sizeof(G));
for(i=0;i<n;i++)
{
printf("Enter the %d Number",i);
scanf("%d",ptr+i);
}
puts("  ");
for(i=0;i<n;i++)
{
printf("%d ",*(ptr+i));
}
printf("\nSize is %d",ptr+1);
printf("\nEnter the New Number");
scanf("%d",&n2);
ptr=(G *)realloc(ptr,n2*(sizeof(G)));
for(i=0;i<n2;i++)
{
printf("Enter the %d Number",i);
scanf("%d",ptr+i);
}
puts(" ");
for(i=0;i<n2;i++)
{
printf("%d",*(ptr+i));
}

getch();
}
