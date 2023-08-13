#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j;
printf("Enter the no of row");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",j);
}
printf("\n");
}

getch();
