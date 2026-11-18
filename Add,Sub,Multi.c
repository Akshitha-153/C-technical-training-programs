#include<stdio.h>
int main()
{
int a,b;
int ch;
    printf("enter values\n");
    scanf("%d %d",&a,&b);
    printf("1.addition\n");
    printf ("2.subtraction\n");
    printf("3.multiplication\n");
    printf("enter your cchoice\n");
    scanf("%d",&ch);
    if(ch==1)
    {
    printf("additio is %d",a+b);
    }
   else if(ch==2)
    {
    printf("subtraction is %d",a-b);
    }
    else if(ch==3)
    {
    printf("multiplication is %d",a*b);
    }
    else
    {
    printf("invalid input");
    }
    return 0;
}