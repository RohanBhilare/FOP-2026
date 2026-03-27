#include<stdio.h>
  void main()
  {
    int a,b,c,m,d,s,choice;
printf("enter two numbers:");
scanf("%d%d\n",&a,&b);
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    c=a+b;
    printf("Addition is %d\n",c);
    break;
case 2:
    s=a-b;
    printf("subtraction is :%d",s);
    break;
case 3:
    m=a*b;
    printf("Multiplication is :%d",m);
    break;
case 4:
    d=a/b;
    printf("Division is :%d",d);

default:
printf("invalid input");
    break;
}




  }
