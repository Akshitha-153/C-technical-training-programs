#include<stdio.h>
int main() {
int n;
printf("Enter your values\n");
scanf("%d",&n);
if(n&1 == 0)
{
printf("EVEN");
}
else
{
printf("ODD");
}
}