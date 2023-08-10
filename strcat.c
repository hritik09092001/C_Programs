#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char fname[40],sname[20];
printf("Enter the first name");
gets(fname);
printf("Enter second name");
gets(sname);
strcat(strcat(fname,' '),sname);
printf("%s",fname);
getch();
}
