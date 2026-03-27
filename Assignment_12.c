#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,SCD,GCD,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    a=abs(a);
    b=abs(b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            GCD=i;
        }
    }
    for(i=2;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            SCD=i;
            break;
        }
        if(SCD==-1)
        {
            printf("No common divisor other than 1\n");
        }
        else
        {
            printf("Smallest common divisor is %d\n",SCD);
        }
    }
    printf("GCD of %d and %d is %d\n",a,b,GCD);
    printf("SCD of %d and %d is %d\n",a,b,SCD);
}    
