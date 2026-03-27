#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,GCD,i;
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
    printf("GCD of %d and %d is %d\n",a,b,GCD);
}   
