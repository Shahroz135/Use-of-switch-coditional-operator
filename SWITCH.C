//Program to perforn arithmatic operation by using switch statemant
#include"stdio.h"
#include<conio.h>
void main()
{
int op;
float x,y;
clrscr();
printf("Enter 1st Number=");
scanf("%f",&x);
printf("Enter 2nd Number=");
scanf("%f",&y);
printf("Enter\n 1 for addition:\n 2 for subtraction:\n 3 for multiplication:\n 4 for division: ");
scanf("%d",&op);
switch(op)
{
case 1:
printf("Result of addition of %.3f + %.3f =%.3f",x,y,x+y);
break;
case 2:
printf("Result of subtraction of %.3f - %.3f =%.3f",x,y,x-y);
break;
case 3:
printf("Result of multiplication of %.3f * %.3f =%.3f",x,y,x*y);
break;
case 4:
printf("Result of division of %.3f / %.3f =%.3f",x,y,x/y);
break;
default:
printf("you enter a wrong digit");
break;
}
getch();
}