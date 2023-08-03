#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],sum=0,i;
clrscr();
printf("Enter the Element of an Array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(i%2==0)
{
sum=sum+a[i];
}
}
printf("The Sum of the Even Numbers=%d",sum);
getch();
}
