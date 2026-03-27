#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,SCD,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    a=abs(a);
    b=abs(b);
    SCD=-1;
    for(i=2;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            SCD=i;
            break;
        }
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
