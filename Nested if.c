#include<stdio.h>
int main() {
int ticket,age;
printf("enter ticket\n");
scanf("%d",&ticket);
printf("enter your age:\n");
scanf("%d",&age);
if(ticket>=1)
{
if(age>=18)
{
printf("Allow to theater\n");
}
else
{
printf("childs not allow to theater\n");
}
}
else{
printf("Not allowed\n");
}
}