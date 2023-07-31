#include<stdio.h>
#include<conio.h>
void main()
{
int n;

void EvenNumbers(int *);
void OddNumber(int *);
clrscr();
printf("Enter the value of n");
scanf("%d",&n);

EvenNumbers(&n);
OddNumber(&n);
getch();


}
void EvenNumbers(int *p)
{
int i,sum=0;
for(i=1;i<=*p;i++)
{
if(i%2==0)
{

sum=sum+i;
}
}
printf("\nThe sum of Even Number is=%d",sum);
}
void OddNumber(int *p)
{
int i,sum=0;
for(i=1;i<=*p;i++)
{
if(i%2==1)
{
sum=sum+i;
}
}
printf("\nThe sum of odd Number is=%d",sum);


}
