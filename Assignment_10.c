#include<stdio.h>
void main()
{
    int a,b,c,m,d,s,choice,p,f,i;
    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power  of (a)\n");
    printf("6. Factorial of a\n");



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
     if (b != 0)
        {
            d = a / b;
            printf("Division is %d\n", d);
        }
    else
        {
            printf("Division by zero not allowed\n");
        }
    break;


 case 5:
     p=a*a;
     printf("Power is :%d",p);
     break;
 case 6:
    if (a < 0)
            {
                printf("Factorial of negative number not defined\n");
            }
    else
    {
         for (i = 1; i <= a; i++)
        {
            f = f * i;
        }
        printf("Factorial of %d is %d\n", a, f);
    }
    break;
 default:
    printf("invalid input");
    break;
 }

}
