//Program to find that number is positive and negative by using coditional operator
#include"stdio.h"
#include<conio.h>
void main()
{
int x;
clrscr();
printf("Enter any number=");
scanf("%d",&x);
x>0?printf("Number is positive"):printf("Number is negative");
getch();
}