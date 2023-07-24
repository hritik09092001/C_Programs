#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
char o;
void add(int,int);
void sub(int,int);
void Mult(int,int);
void Div(int,int);
clrscr();
printf("Enter the operator and Two Numbers");
scanf("%c%d%d",&o,&n1,&n2);
switch(o)
{
case '+':
add(n1,n2);
break;
case '-':
sub(n1,n2);
break;
case '*':
Mult(n1,n2);
break;
case '/':
Div(n1,n2);
break;
}
getch();
}
void add(int n1,int n2)
{

int res;
res=n1+n2;
printf("%d",res);

}
void sub(int n1,int n2)
{
int res;
res=n1-n2;
printf("%d",res);

}
void Mult(int n1,int n2)
{
int res;
res=n1*n2;
printf("%d",res);

}
void Div(int n1,int n2)
{
int res;
res=n1/n2;
printf("%d",res);

}
