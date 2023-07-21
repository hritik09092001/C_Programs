#include<stdio.h>
#include<time.h>
#include<conio.h>

void main()
{
int i;
time_t t;
clrscr();
printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    // not a primitive datatype
time(&t);

printf("\nThis program has been writeen at (date and time): %s", ctime(&t));



getch();
}
